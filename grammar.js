module.exports = grammar({
    name: 'imhex',

    rules: {
        source_file: $ => repeat($._definition),

        _definition: $ => choice(
            $.struct_definition,
            $.union_definition,
            $.variable_placement,
            $._definition_statement,
        ),

        struct_definition: $ => seq(
            'struct',
            field('name', $.identifier),
            field('body',$.field_list),
            $._declaration_finish
        ),

        union_definition: $ => seq(
            'union',
            field('name', $.identifier),
            field('body',$.field_list),
            $._declaration_finish
        ),

        _definition_statement: $ => choice(
            $.variable_definition,
            $.array_definition
        ),

        variable_definition: $ => seq(
            field('type', $._type),
            $._identifier_definition,
            $._declaration_finish
        ),

        variable_placement: $ => seq(
            field('type', $._type),
            $._identifier_definition,
            '@',
            field('offset', $._number),
            $._declaration_finish
        ),

        array_definition: $ => seq(
            field('type', $._type),
            $._identifier_definition,
            $._array_size_wrapper,
            $._declaration_finish
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
            $._number,
            //TODO: Loopsized arrays
        ),

        _identifier_definition: $ => seq(
            repeat(seq(field('name', $.identifier), ',')),
            field('name', $.identifier),
        ),

        field_list: $ => seq(
            '{',
            repeat(choice($._definition_statement, $.padding)),
            '}',
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
            optional($.endian_indicator),
            $.primitive_type,
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
            $.return_statement
        ),

        return_statement: $ => seq(
            'return',
            $._expression,
            ';'
        ),

        _expression: $ => choice(
            $.identifier,
            $._number,
            $._operator,
            // TODO: other kinds of expressions
        ),

        identifier: $ => /[a-zA-Z_]\w*/,

        _type_identifier: $ => alias($.identifier, $.type_identifier),

        number_literal: $ => choice(
            /\d+/,
            /0x\d+/,
            /0b\d+/,
        ),

        _number: $ => choice(
            $.number_literal,
            $.identifier,
        ),

        _operator: $=> choice(

        ),

        _numeric_operator: $ => choice(
            $._number,
            $.unary_numeric_operator,
            $.binary_numeric_operator,
            $.ternary_numeric_operator,
        ),

        unary_numeric_operator: $ => choice(
            seq('~', $._expression),
            seq('!', $._expression),
            seq('(', $._expression, ')'),
        ),

        binary_numeric_operator: $ => choice(
            seq($._expression, '+', $._expression),
            seq($._expression, '-', $._expression),
            seq($._expression, '*', $._expression),
            seq($._expression, '/', $._expression),
            seq($._expression, '%', $._expression),
            seq($._expression, '>>', $._expression),
            seq($._expression, '<<', $._expression),
            seq($._expression, '&', $._expression),
            seq($._expression, '|', $._expression),
            seq($._expression, '^', $._expression),
            seq($._expression, '==', $._expression),
            seq($._expression, '!=', $._expression),
            seq($._expression, '>', $._expression),
            seq($._expression, '<', $._expression),
            seq($._expression, '>=', $._expression),
            seq($._expression, '<=', $._expression),
            seq($._expression, '&&', $._expression),
            seq($._expression, '^^', $._expression),
            // ...
        ),

        ternary_numeric_operator: $ => choice(
            seq($._expression, ':', $._expression,'?', $._expression),
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
