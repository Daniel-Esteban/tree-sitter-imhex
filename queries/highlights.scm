[
  "struct"
  "union"
  "padding"
  "return"
] @keyword

[
 "!"
 "~"

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
(attribute) @attribute
