(identifier) @variable
(primitive_type) @type.builtin

; Misc
(comment) @comment
(ERROR) @error
[ "(" ")" "{" "}" "[[" "]]" ] @punctuation.bracket
[ ";" "," ] @punctuation.delimiter
(define (identifier)@constant.macro) @preproc
(pragma (_) @parameter) @preproc

; Constants
(dollar) @constant.builtin
(string_literal) @string
(escape_sequence) @string.escape
(character_literal) @character
(number_literal) @number
(boolean_literal) @boolean

; Functions
(function_definition name:(identifier) @function)
(function_call name:(identifier) @function)
["addressof" "sizeof"] @function.builtin
(casting_operator function:(primitive_type) @function.builtin)
(field_identifier) @field
(this) @field

; Keywords
[ "if" "else" ] @conditional
[ "while" ] @repeat
[
  "struct" "union"
  "break" "continue"
  "padding"
  "using"
  (parent)
  (endian_val)
] @keyword

"fn" @keyword.function
"return" @keyword.return

[
 "!" "~"
 "=" "+=" "-="
 ":" "?"
 "+" "-" "*" "/" "%"
 ">>" "<<"
 "&" "|" "^"
 "==" "!="
 ">" "<" ">=" "<="
 "&&" "||" "^^"
 "@"
] @operator

"#include" @include

(type_identifier) @type
(using_definition name: (identifier) @type)
(endian_indicator) @type.builtin
(attribute) @attribute

; Variables

; Text
; Tags

; Overrides
(system_lib_string ["<" ">"] @string) @string
