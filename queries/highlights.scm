[
  "struct"
  "union"
  "padding"
  "return"
  (endian_val)
] @keyword

[
 "!"
 "~"

 "="

 ":"
 "?"

 "+"
 "-"
 "*"
 "/"
 "%"
 ">>"
 "<<"
 "&"
 "|"
 "^"
 "=="
 "!="
 ">"
 "<"
 ">="
 "<="
 "&&"
 "||"
 "^^"

 "@"
] @operator

[ "(" ")" "{" "}" "[[" "]]" ] @punctuation.bracket

[ ";" "," ] @punctuation.delimiter

(identifier) @variable
(primitive_type) @type.builtin
(endian_indicator) @type.builtin
(type_identifier) @type
(number_literal) @number
(string_literal) @string
(character_literal) @character
(escape_sequence) @string.escape
(boolean_literal) @boolean
(attribute) @attribute
(comment) @comment
(dollar) @constant.builtin
(pragma (_) @parameter) @keyword
(include) @include
(include
  (system_lib_string
    ["<" ">"] @punctuation.bracket
  )@namespace
)
(define) @keyword

(ERROR) @error
