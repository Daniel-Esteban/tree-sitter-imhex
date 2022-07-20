const PREC = {
    TERNARY: -1,
    DEFAULT: 0,
    UNARY: 1,
    OR: 2,
    AND: 3,
    XOR: 4,
    BITWISE_OR: 5,
    BITWISE_XOR: 6,
    BITWISE_AND: 7,
    EQ: 8,
    SHIFT: 9,
    ADD: 10,
    MULT: 11,

}

module.exports = grammar({
    name: 'imhex',

    extras: $ => [
        /\s|\\\r?\n/,
        $.comment,
    ],

    rules: {
        source_file: $ => repeat($._top_level_statement),

        _top_level_statement: $ => choice(
            $.struct_definition,
            $.union_definition,
            $.bitfield_definition,
            $.enum_definition,
            $.variable_placement,
            $._statement,
            $._preproc_directive,
            $.using_definition,
            $.function_definition,
        ),

        _preproc_directive: $=> choice(
            $.include,
            $.define,
            $.pragma
        ),

        include: $=> seq(
            '#include',
            choice(
                $.string_literal,
                $.system_lib_string
            )
        ),

        system_lib_string: $ => (seq(
            '<',
            token(repeat(choice(/[^>\n]/, '\\>'))),
            '>'
        )),

        define: $ => seq(
            '#define',
            $.identifier, //TODO: Typealias?
            $._expression

        ),

        pragma: $ => seq(
            '#pragma',
            choice(
                $.pragma_endian,
                $.pragma_mime,
                $.pragma_base_address,
                $.pragma_eval_depth,
                $.pragma_array_limit,
                $.pragma_pattern_limit,
                $.pragma_once,
            ),
        ),

        pragma_endian: $=> seq('endian', field('value', $.endian_val)),

        endian_val: $=> token(choice('little', 'big', 'native')),

        pragma_mime: $=> seq('MIME', field('value', $.mime_type)),

        mime_type: $=> token( /[\w\-\.]+\/[\w\-\.]+/ ),

        pragma_base_address: $=> seq('base_address', field('value', $.number_literal)), // Only integer

        pragma_eval_depth: $=> seq('eval_depth', field('value', $.number_literal)), // Only integer

        pragma_array_limit: $=> seq('array_limit', field('value', $.number_literal)), // Only integer

        pragma_pattern_limit: $=> seq('pattern_limit', field('value', $.number_literal)), // Only integer

        pragma_once: $=> token('once'),

        struct_definition: $ => seq(
            'struct',
            field('name', $._identifier),
            field('body',$.field_list),
            $._declaration_finish
        ),

        union_definition: $ => seq(
            'union',
            field('name', $._identifier),
            field('body',$.field_list),
            $._declaration_finish
        ),

        bitfield_definition: $=> seq(
            'bitfield',
            field('name', $._identifier),
            field('body', $.bitfield_list),
            $._declaration_finish
        ),

        enum_definition: $=> seq(
            'enum',
            field('name', $.identifier),
            ':',
            field('type', $.primitive_type),
            field('body', $.enum_field_list)
        ),

        _definition_statement: $ => choice(
            $.variable_definition,
            $.assignation_statement
        ),

        using_definition: $=> seq(
            'using',
            field('name', $.identifier),
            '=',
            $._type,
            ';'
        ),

        variable_definition: $ => seq(
            field('type', $._type),
            $._identifier_definition,
            optional($._array_size_wrapper),
            $._declaration_finish
        ),

        variable_placement: $ => seq(
            field('type', $._type),
            $._identifier_definition,
            optional($._array_size_wrapper),
            '@',
            field('offset', $._offset),
            $._declaration_finish
        ),

        _offset: $ => choice(
            $._expression,
            // $.number_literal, //?
            // $._identifier,
        ),

        assignation_statement: $ => seq(
            field('left', $._identifier),
            field('operator', choice('=', '+=', '-=')),
            field('right', $._expression),
            ';' // TODO: Optional?
        ),

        padding: $ => seq(
            'padding',
            $._array_size_wrapper,
            $._declaration_finish
        ),

        _array_size_wrapper: $ => seq(
            '[',
            optional(field('size', $._array_size)),
            ']',
        ),

        _array_size: $ => choice(
            $.number_literal,
            $._identifier,
            $.loop_size,
            $.function_call,
            $.type_operator,
            $.casting_operator,
        ),

        loop_size: $ => $._while_head,

        _identifier_definition: $ => seq(
            repeat(seq(field('name', $._identifier), ',')),
            field('name', $._identifier),
        ),

        field_list: $ => seq(
            '{',
            repeat(choice($._statement, $.padding)),
            '}',
        ),

        bitfield_list: $ => seq(
            '{',
            repeat1(field('field', $.bitfield_entry)),
            '}',
        ),

        bitfield_entry: $=> seq(
            field('name', choice($.identifier, 'padding')),
            ':',
            field('value', $.number_literal),
            ';' // TODO: can have attributes? $._declaration_finish?
        ),

        enum_field_list: $=> seq(
            '{',
            field('field', $.enum_field),
            repeat(seq(',', field('field', $.enum_field))),
            '}',
            ';' // TODO: can have attributes? $._declaration_finish?
        ),
        enum_field: $=> seq(
            field('name', $.identifier),
            optional(seq('=', field('value', $.number_literal)))
        ),

        _declaration_finish: $ => seq(
            optional(field('attribute',$.attribute)), // TODO: Multiple attributes?
            ';'
        ),

        attribute: $ => seq(
            '[[',
            $._variable_attribute,
            ']]'
        ),

        _variable_attribute: $ => choice(
            seq(field('name','color'),'(',field('value',$.string_literal),')'),
            seq(field('name','name'),'(',field('value',$.string_literal),')'),
            seq(field('name','comment'),'(',field('value',$.string_literal),')'),
            seq(field('name','format'),'(',field('value',$.string_literal),')'),
            seq(field('name','transform'),'(',field('value',$.string_literal),')'),
            seq(field('name','pointer_base'),'(',field('value',$.string_literal),')'),
            seq(field('name','hidden')),
            seq(field('name','inline')),
            seq(field('name','no_unique_address')),
            seq(field('name','static')), // TODO: Separate this as type_attribute?
        ),

        _type: $ => choice(
            $._primitive_type,
            $._type_identifier
        ),

        _primitive_type: $ => seq(
            field('endian', optional($.endian_indicator)),
            field('type', $.primitive_type),
        ),

        endian_indicator: $ => choice(
            'be',
            'le'
        ),

        primitive_type: $ => choice (
            'u8','u16','u32','u64','u128',
            's8','s16','s32','s64','s128',
            'float', 'double',
            'char', 'char16', 'bool', 'str', 'auto'
        ),

        block: $ => seq(
            '{',
            repeat($._statement),
            '}'
        ),

        _statement: $ => choice (
            $._definition_statement,
            $.if_statement,
            $.while_statement,
            $._function_call_statement,
            $.return_statement,
            $.break_statement,
            $.continue_statement,
        ),

        return_statement: $ => seq(
            'return',
            $._expression,
            ';'
        ),

        _expression: $ => choice(
            $._identifier,
            $._number,
            $._operator,
            $.string_literal,
            $.character_literal,
            $.boolean_literal,
            $.field_expression,
            $.function_call,
            $.type_operator,
            $.casting_operator,
        ),

        _identifier: $ => choice(
            $.identifier,
            $.dollar,
        ),

        identifier: $ => /[a-zA-Z_]\w*/,

        dollar: $=> '$',

        this: $=> 'this',

        parent: $=> 'parent',

        _type_identifier: $ => alias($.identifier, $.type_identifier),

        _field_identifier: $ => alias($.identifier, $.field_identifier),

        field_expression: $=> prec.left(1,seq(
            field('parent', choice($.identifier, $.parent, $.this)),
            repeat1(seq(
                '.',
                field('field', $._field_identifier)
            )),
        )),

        number_literal: $ => token(choice(
            /-?\d+/, //int
            /\d+U/, //int
            /-?0x[0-9a-fA-F]+/, // Hex
            /-?0b[01]+/, // Binary
            /-?0o[0-7]+/, // Octal
            /-?\d+(.\d+)?[DF]?/ // Float/Double
        )),

        _number: $ => choice( //TODO: Remove? distinguish float and integer?
            prec(3, $.number_literal),
            // $._identifier,
        ),

        _operator: $=> choice( // TODO: Maybe just call them operators?
            $.unary_numeric_operator,
            $.binary_numeric_operator,
            $.ternary_numeric_operator
        ),

        _numeric_operator: $ => choice(
            prec(4, $._number),
            prec(2, $.unary_numeric_operator),
            $.binary_numeric_operator,
            $.ternary_numeric_operator,
        ),

        unary_numeric_operator: $ => prec(PREC.UNARY, choice(
            seq('~', $._expression),
            seq('!', $._expression),
            seq('(', $._expression, ')'),
        )),

        binary_numeric_operator: $ => {
            const table = [
            ['+', PREC.ADD],
            ['-', PREC.ADD],
            ['*', PREC.MULT],
            ['/', PREC.MULT],
            ['%', PREC.MULT],
            ['>>', PREC.SHIFT],
            ['<<', PREC.SHIFT],
            ['&', PREC.BITWISE_AND],
            ['|', PREC.BITWISE_OR],
            ['^', PREC.BITWISE_XOR],
            ['==', PREC.EQ],
            ['!=', PREC.EQ],
            ['>', PREC.EQ],
            ['<', PREC.EQ],
            ['>=', PREC.EQ],
            ['<=', PREC.EQ],
            ['&&', PREC.AND],
            ['||', PREC.OR],
            ['^^', PREC.XOR]
            ];
            // ...
            return choice(...table.map(([operator, precedence]) => {
                return prec.left(precedence, seq(
                    field('left', $._expression),
                    field('operator', operator),
                    field('right', $._expression)
                ))
            }));
        },

        ternary_numeric_operator: $ => prec.left(PREC.TERNARY, seq(
            field('cond', $._expression),
            '?',
            field('iftrue', $._expression),
            ':',
            field('iffalse', $._expression),
        )),

        _condition: $=> seq(
            '(',
            field('condition', $._expression),
            ')',
        ),

        if_statement: $=> prec.left(1, seq(
            'if',
            $._condition,
            field('body', choice($.block, $._statement)),
            optional(seq(
                'else',
                field('else', choice($.block, $._statement))
            ))
        )),

        break_statement: $=> seq('break', ';'),

        continue_statement: $=> seq('continue', ';'),

        _while_head: $=> seq('while', $._condition),

        while_statement: $=> seq(
            $._while_head,
            field('body', choice($.block, $._statement)),
        ),

        _function_call_statement: $=> seq($.function_call, ';'),

        function_call: $=> seq(
            field('name', $.identifier),
            '(',
            optional(field('parameters', $.function_call_parameters)),
            ')'
        ),

        function_call_parameters: $=> seq(
            field('parameter', $.identifier),
            repeat(seq(',', field('parameter', $.identifier)))
        ),

        function_definition: $=> seq(
            'fn',
            field('name', $.identifier),
            field('parameters', $.parameters_definition),
            field('block', choice($.block, $._statement)),
            ';'
        ),

        type_operator: $=> seq(
            field('function', choice('addressof', 'sizeof')),
            '(',
            field('argument', $._identifier),
            ')'
        ),

        casting_operator: $=> seq(
            field('function', $.primitive_type),
            '(',
            field('argument', $._expression),
            ')'
        ),

        parameters_definition: $=> seq(
            '(',
            optional(choice(
                seq(
                    field('parameter', $.parameter_definition),
                    repeat(seq(',', field('parameter',$.parameter_definition))),
                    optional(seq(',', field('pack', $.parameter_pack))),
                ),
                field('pack', $.parameter_pack),
            )),
            ')'
        ),

        parameter_definition: $=> seq(
            field('type', $._type),
            field('name', $._identifier),
        ),

        parameter_pack: $=> seq(
            field('type', $._type),
            '...',
            field('name', $._identifier)
        ),

        //https://github.com/tree-sitter/tree-sitter-c/blob/master/grammar.js
        string_literal: $ => seq(
            '"',
            repeat(choice(
                token.immediate(prec(1, /[^\\"\n]+/)),
                $.escape_sequence
            )),
            '"',
        ),

        character_literal: $=> seq(
            '\'',
            optional(choice(
                $.escape_sequence,
                token.immediate(/[^\n']/)
            )),
            '\''
        ),

        boolean_literal: $=> token(prec(1,choice(
            'true',
            'false'
        ))),

        escape_sequence: $ => token(prec(1, seq(
            '\\',
            choice(
                /[^xuU]/,
                /\d{2,3}/,
                /x[0-9a-fA-F]{2,}/,
                /u[0-9a-fA-F]{4}/,
                /U[0-9a-fA-F]{8}/
            )
        ))),

        comment: $ => token(choice(
            seq('//', /(\\(.|\r?\n)|[^\\\n])*/),
            seq(
                '/*',
                /[^*]*\*+([^/*][^*]*\*+)*/,
                    '/'
                )
            )
        ),
    }
});
