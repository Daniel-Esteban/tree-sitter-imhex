[
  "struct"
  "union"
  "padding"
  "return"
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
