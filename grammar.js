module.exports = grammar({
  name: 'imhex',

    rules: {
        // TODO: add the actual grammar rules
        source_file: $ => repeat($._definition),
        _definition: $ => choice(
            $.struct_definition,
            $.variable_definition,
        ),
        struct_definition: $ => seq(
            'struct',
            field('struct_name', $.identifier),
            field('fields',$.field_list)
        ),
        variable_definition: $ => seq(
            $.primitive_type,
            $.identifier_definition,
            ';'
        ),
        identifier_definition: $ => seq(
            repeat(seq($.identifier, ',')),
            $.identifier,
        ),
        field_list: $ => seq(
            '{',
            repeat($.variable_definition),
            '}',
            ';'
        ),
        _type: $ => choice(
            $.primitive_type,
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
            $.number,
            $._operator,
            // TODO: other kinds of expressions
        ),

        identifier: $ => /[a-zA-Z_]\w*/,

        number: $ => /\d+/,

        _operator: $=> choice(

        ),
        _numeric_operator: $ => choice(
            $.number,
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
    }
});
