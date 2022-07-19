#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 292
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 157
#define ALIAS_COUNT 2
#define TOKEN_COUNT 100
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 18
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 28

enum {
  anon_sym_POUNDinclude = 1,
  anon_sym_LT = 2,
  aux_sym_system_lib_string_token1 = 3,
  anon_sym_GT = 4,
  anon_sym_POUNDdefine = 5,
  anon_sym_POUNDpragma = 6,
  anon_sym_endian = 7,
  sym_endian_val = 8,
  anon_sym_MIME = 9,
  sym_mime_type = 10,
  anon_sym_base_address = 11,
  anon_sym_eval_depth = 12,
  anon_sym_array_limit = 13,
  anon_sym_pattern_limit = 14,
  sym_pragma_once = 15,
  anon_sym_struct = 16,
  anon_sym_union = 17,
  anon_sym_using = 18,
  anon_sym_EQ = 19,
  anon_sym_SEMI = 20,
  anon_sym_AT = 21,
  anon_sym_PLUS_EQ = 22,
  anon_sym_DASH_EQ = 23,
  anon_sym_padding = 24,
  anon_sym_LBRACK = 25,
  anon_sym_RBRACK = 26,
  anon_sym_COMMA = 27,
  anon_sym_LBRACE = 28,
  anon_sym_RBRACE = 29,
  anon_sym_LBRACK_LBRACK = 30,
  anon_sym_RBRACK_RBRACK = 31,
  anon_sym_color = 32,
  anon_sym_LPAREN = 33,
  anon_sym_RPAREN = 34,
  anon_sym_name = 35,
  anon_sym_comment = 36,
  anon_sym_format = 37,
  anon_sym_transform = 38,
  anon_sym_pointer_base = 39,
  anon_sym_hidden = 40,
  anon_sym_inline = 41,
  anon_sym_no_unique_address = 42,
  anon_sym_static = 43,
  anon_sym_be = 44,
  anon_sym_le = 45,
  anon_sym_u8 = 46,
  anon_sym_u16 = 47,
  anon_sym_u32 = 48,
  anon_sym_u64 = 49,
  anon_sym_u128 = 50,
  anon_sym_s8 = 51,
  anon_sym_s16 = 52,
  anon_sym_s32 = 53,
  anon_sym_s64 = 54,
  anon_sym_s128 = 55,
  anon_sym_float = 56,
  anon_sym_double = 57,
  anon_sym_char = 58,
  anon_sym_char16 = 59,
  anon_sym_bool = 60,
  anon_sym_str = 61,
  anon_sym_auto = 62,
  anon_sym_return = 63,
  sym_identifier = 64,
  sym_dollar = 65,
  sym_this = 66,
  sym_parent = 67,
  anon_sym_DOT = 68,
  sym_number_literal = 69,
  anon_sym_TILDE = 70,
  anon_sym_BANG = 71,
  anon_sym_PLUS = 72,
  anon_sym_DASH = 73,
  anon_sym_STAR = 74,
  anon_sym_SLASH = 75,
  anon_sym_PERCENT = 76,
  anon_sym_GT_GT = 77,
  anon_sym_LT_LT = 78,
  anon_sym_AMP = 79,
  anon_sym_PIPE = 80,
  anon_sym_CARET = 81,
  anon_sym_EQ_EQ = 82,
  anon_sym_BANG_EQ = 83,
  anon_sym_GT_EQ = 84,
  anon_sym_LT_EQ = 85,
  anon_sym_AMP_AMP = 86,
  anon_sym_PIPE_PIPE = 87,
  anon_sym_CARET_CARET = 88,
  anon_sym_QMARK = 89,
  anon_sym_COLON = 90,
  anon_sym_if = 91,
  anon_sym_else = 92,
  anon_sym_DQUOTE = 93,
  aux_sym_string_literal_token1 = 94,
  anon_sym_SQUOTE = 95,
  aux_sym_character_literal_token1 = 96,
  sym_boolean_literal = 97,
  sym_escape_sequence = 98,
  sym_comment = 99,
  sym_source_file = 100,
  sym__top_level_statement = 101,
  sym__preproc_directive = 102,
  sym_include = 103,
  sym_system_lib_string = 104,
  sym_define = 105,
  sym_pragma = 106,
  sym_pragma_endian = 107,
  sym_pragma_mime = 108,
  sym_pragma_base_address = 109,
  sym_pragma_eval_depth = 110,
  sym_pragma_array_limit = 111,
  sym_pragma_pattern_limit = 112,
  sym_struct_definition = 113,
  sym_union_definition = 114,
  sym__definition_statement = 115,
  sym_using_definition = 116,
  sym_variable_definition = 117,
  sym_variable_placement = 118,
  sym__offset = 119,
  sym_assignation_statement = 120,
  sym_array_definition = 121,
  sym_padding = 122,
  sym__array_size_wrapper = 123,
  sym__array_size = 124,
  sym__identifier_definition = 125,
  sym_field_list = 126,
  sym__declaration_finish = 127,
  sym_attribute = 128,
  sym__variable_attribute = 129,
  sym__type = 130,
  sym__primitive_type = 131,
  sym_endian_indicator = 132,
  sym_primitive_type = 133,
  sym_block = 134,
  sym__statement = 135,
  sym_return_statement = 136,
  sym__expression = 137,
  sym__identifier = 138,
  sym__type_identifier = 139,
  sym__field_identifier = 140,
  sym_field_expression = 141,
  sym__number = 142,
  sym__operator = 143,
  sym_unary_numeric_operator = 144,
  sym_binary_numeric_operator = 145,
  sym_ternary_numeric_operator = 146,
  sym__condition = 147,
  sym_if_statement = 148,
  sym_string_literal = 149,
  sym_character_literal = 150,
  aux_sym_source_file_repeat1 = 151,
  aux_sym__identifier_definition_repeat1 = 152,
  aux_sym_field_list_repeat1 = 153,
  aux_sym_block_repeat1 = 154,
  aux_sym_field_expression_repeat1 = 155,
  aux_sym_string_literal_repeat1 = 156,
  alias_sym_field_identifier = 157,
  alias_sym_type_identifier = 158,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUNDinclude] = "#include",
  [anon_sym_LT] = "<",
  [aux_sym_system_lib_string_token1] = "system_lib_string_token1",
  [anon_sym_GT] = ">",
  [anon_sym_POUNDdefine] = "#define",
  [anon_sym_POUNDpragma] = "#pragma",
  [anon_sym_endian] = "endian",
  [sym_endian_val] = "endian_val",
  [anon_sym_MIME] = "MIME",
  [sym_mime_type] = "mime_type",
  [anon_sym_base_address] = "base_address",
  [anon_sym_eval_depth] = "eval_depth",
  [anon_sym_array_limit] = "array_limit",
  [anon_sym_pattern_limit] = "pattern_limit",
  [sym_pragma_once] = "pragma_once",
  [anon_sym_struct] = "struct",
  [anon_sym_union] = "union",
  [anon_sym_using] = "using",
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
  [anon_sym_AT] = "@",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_padding] = "padding",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK_LBRACK] = "[[",
  [anon_sym_RBRACK_RBRACK] = "]]",
  [anon_sym_color] = "color",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_name] = "name",
  [anon_sym_comment] = "comment",
  [anon_sym_format] = "format",
  [anon_sym_transform] = "transform",
  [anon_sym_pointer_base] = "pointer_base",
  [anon_sym_hidden] = "hidden",
  [anon_sym_inline] = "inline",
  [anon_sym_no_unique_address] = "no_unique_address",
  [anon_sym_static] = "static",
  [anon_sym_be] = "be",
  [anon_sym_le] = "le",
  [anon_sym_u8] = "u8",
  [anon_sym_u16] = "u16",
  [anon_sym_u32] = "u32",
  [anon_sym_u64] = "u64",
  [anon_sym_u128] = "u128",
  [anon_sym_s8] = "s8",
  [anon_sym_s16] = "s16",
  [anon_sym_s32] = "s32",
  [anon_sym_s64] = "s64",
  [anon_sym_s128] = "s128",
  [anon_sym_float] = "float",
  [anon_sym_double] = "double",
  [anon_sym_char] = "char",
  [anon_sym_char16] = "char16",
  [anon_sym_bool] = "bool",
  [anon_sym_str] = "str",
  [anon_sym_auto] = "auto",
  [anon_sym_return] = "return",
  [sym_identifier] = "identifier",
  [sym_dollar] = "dollar",
  [sym_this] = "this",
  [sym_parent] = "parent",
  [anon_sym_DOT] = ".",
  [sym_number_literal] = "number_literal",
  [anon_sym_TILDE] = "~",
  [anon_sym_BANG] = "!",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_CARET_CARET] = "^^",
  [anon_sym_QMARK] = "\?",
  [anon_sym_COLON] = ":",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_character_literal_token1] = "character_literal_token1",
  [sym_boolean_literal] = "boolean_literal",
  [sym_escape_sequence] = "escape_sequence",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__top_level_statement] = "_top_level_statement",
  [sym__preproc_directive] = "_preproc_directive",
  [sym_include] = "include",
  [sym_system_lib_string] = "system_lib_string",
  [sym_define] = "define",
  [sym_pragma] = "pragma",
  [sym_pragma_endian] = "pragma_endian",
  [sym_pragma_mime] = "pragma_mime",
  [sym_pragma_base_address] = "pragma_base_address",
  [sym_pragma_eval_depth] = "pragma_eval_depth",
  [sym_pragma_array_limit] = "pragma_array_limit",
  [sym_pragma_pattern_limit] = "pragma_pattern_limit",
  [sym_struct_definition] = "struct_definition",
  [sym_union_definition] = "union_definition",
  [sym__definition_statement] = "_definition_statement",
  [sym_using_definition] = "using_definition",
  [sym_variable_definition] = "variable_definition",
  [sym_variable_placement] = "variable_placement",
  [sym__offset] = "_offset",
  [sym_assignation_statement] = "assignation_statement",
  [sym_array_definition] = "array_definition",
  [sym_padding] = "padding",
  [sym__array_size_wrapper] = "_array_size_wrapper",
  [sym__array_size] = "_array_size",
  [sym__identifier_definition] = "_identifier_definition",
  [sym_field_list] = "field_list",
  [sym__declaration_finish] = "_declaration_finish",
  [sym_attribute] = "attribute",
  [sym__variable_attribute] = "_variable_attribute",
  [sym__type] = "_type",
  [sym__primitive_type] = "_primitive_type",
  [sym_endian_indicator] = "endian_indicator",
  [sym_primitive_type] = "primitive_type",
  [sym_block] = "block",
  [sym__statement] = "_statement",
  [sym_return_statement] = "return_statement",
  [sym__expression] = "_expression",
  [sym__identifier] = "_identifier",
  [sym__type_identifier] = "_type_identifier",
  [sym__field_identifier] = "_field_identifier",
  [sym_field_expression] = "field_expression",
  [sym__number] = "_number",
  [sym__operator] = "_operator",
  [sym_unary_numeric_operator] = "unary_numeric_operator",
  [sym_binary_numeric_operator] = "binary_numeric_operator",
  [sym_ternary_numeric_operator] = "ternary_numeric_operator",
  [sym__condition] = "_condition",
  [sym_if_statement] = "if_statement",
  [sym_string_literal] = "string_literal",
  [sym_character_literal] = "character_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__identifier_definition_repeat1] = "_identifier_definition_repeat1",
  [aux_sym_field_list_repeat1] = "field_list_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_field_expression_repeat1] = "field_expression_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [alias_sym_field_identifier] = "field_identifier",
  [alias_sym_type_identifier] = "type_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUNDinclude] = anon_sym_POUNDinclude,
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym_system_lib_string_token1] = aux_sym_system_lib_string_token1,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_POUNDdefine] = anon_sym_POUNDdefine,
  [anon_sym_POUNDpragma] = anon_sym_POUNDpragma,
  [anon_sym_endian] = anon_sym_endian,
  [sym_endian_val] = sym_endian_val,
  [anon_sym_MIME] = anon_sym_MIME,
  [sym_mime_type] = sym_mime_type,
  [anon_sym_base_address] = anon_sym_base_address,
  [anon_sym_eval_depth] = anon_sym_eval_depth,
  [anon_sym_array_limit] = anon_sym_array_limit,
  [anon_sym_pattern_limit] = anon_sym_pattern_limit,
  [sym_pragma_once] = sym_pragma_once,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_union] = anon_sym_union,
  [anon_sym_using] = anon_sym_using,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_padding] = anon_sym_padding,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK_LBRACK] = anon_sym_LBRACK_LBRACK,
  [anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK,
  [anon_sym_color] = anon_sym_color,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_name] = anon_sym_name,
  [anon_sym_comment] = anon_sym_comment,
  [anon_sym_format] = anon_sym_format,
  [anon_sym_transform] = anon_sym_transform,
  [anon_sym_pointer_base] = anon_sym_pointer_base,
  [anon_sym_hidden] = anon_sym_hidden,
  [anon_sym_inline] = anon_sym_inline,
  [anon_sym_no_unique_address] = anon_sym_no_unique_address,
  [anon_sym_static] = anon_sym_static,
  [anon_sym_be] = anon_sym_be,
  [anon_sym_le] = anon_sym_le,
  [anon_sym_u8] = anon_sym_u8,
  [anon_sym_u16] = anon_sym_u16,
  [anon_sym_u32] = anon_sym_u32,
  [anon_sym_u64] = anon_sym_u64,
  [anon_sym_u128] = anon_sym_u128,
  [anon_sym_s8] = anon_sym_s8,
  [anon_sym_s16] = anon_sym_s16,
  [anon_sym_s32] = anon_sym_s32,
  [anon_sym_s64] = anon_sym_s64,
  [anon_sym_s128] = anon_sym_s128,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_char] = anon_sym_char,
  [anon_sym_char16] = anon_sym_char16,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_str] = anon_sym_str,
  [anon_sym_auto] = anon_sym_auto,
  [anon_sym_return] = anon_sym_return,
  [sym_identifier] = sym_identifier,
  [sym_dollar] = sym_dollar,
  [sym_this] = sym_this,
  [sym_parent] = sym_parent,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_number_literal] = sym_number_literal,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_CARET_CARET] = anon_sym_CARET_CARET,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_character_literal_token1] = aux_sym_character_literal_token1,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__top_level_statement] = sym__top_level_statement,
  [sym__preproc_directive] = sym__preproc_directive,
  [sym_include] = sym_include,
  [sym_system_lib_string] = sym_system_lib_string,
  [sym_define] = sym_define,
  [sym_pragma] = sym_pragma,
  [sym_pragma_endian] = sym_pragma_endian,
  [sym_pragma_mime] = sym_pragma_mime,
  [sym_pragma_base_address] = sym_pragma_base_address,
  [sym_pragma_eval_depth] = sym_pragma_eval_depth,
  [sym_pragma_array_limit] = sym_pragma_array_limit,
  [sym_pragma_pattern_limit] = sym_pragma_pattern_limit,
  [sym_struct_definition] = sym_struct_definition,
  [sym_union_definition] = sym_union_definition,
  [sym__definition_statement] = sym__definition_statement,
  [sym_using_definition] = sym_using_definition,
  [sym_variable_definition] = sym_variable_definition,
  [sym_variable_placement] = sym_variable_placement,
  [sym__offset] = sym__offset,
  [sym_assignation_statement] = sym_assignation_statement,
  [sym_array_definition] = sym_array_definition,
  [sym_padding] = sym_padding,
  [sym__array_size_wrapper] = sym__array_size_wrapper,
  [sym__array_size] = sym__array_size,
  [sym__identifier_definition] = sym__identifier_definition,
  [sym_field_list] = sym_field_list,
  [sym__declaration_finish] = sym__declaration_finish,
  [sym_attribute] = sym_attribute,
  [sym__variable_attribute] = sym__variable_attribute,
  [sym__type] = sym__type,
  [sym__primitive_type] = sym__primitive_type,
  [sym_endian_indicator] = sym_endian_indicator,
  [sym_primitive_type] = sym_primitive_type,
  [sym_block] = sym_block,
  [sym__statement] = sym__statement,
  [sym_return_statement] = sym_return_statement,
  [sym__expression] = sym__expression,
  [sym__identifier] = sym__identifier,
  [sym__type_identifier] = sym__type_identifier,
  [sym__field_identifier] = sym__field_identifier,
  [sym_field_expression] = sym_field_expression,
  [sym__number] = sym__number,
  [sym__operator] = sym__operator,
  [sym_unary_numeric_operator] = sym_unary_numeric_operator,
  [sym_binary_numeric_operator] = sym_binary_numeric_operator,
  [sym_ternary_numeric_operator] = sym_ternary_numeric_operator,
  [sym__condition] = sym__condition,
  [sym_if_statement] = sym_if_statement,
  [sym_string_literal] = sym_string_literal,
  [sym_character_literal] = sym_character_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__identifier_definition_repeat1] = aux_sym__identifier_definition_repeat1,
  [aux_sym_field_list_repeat1] = aux_sym_field_list_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_field_expression_repeat1] = aux_sym_field_expression_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [alias_sym_field_identifier] = alias_sym_field_identifier,
  [alias_sym_type_identifier] = alias_sym_type_identifier,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUNDinclude] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_system_lib_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDdefine] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDpragma] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endian] = {
    .visible = true,
    .named = false,
  },
  [sym_endian_val] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_MIME] = {
    .visible = true,
    .named = false,
  },
  [sym_mime_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_base_address] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eval_depth] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_array_limit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pattern_limit] = {
    .visible = true,
    .named = false,
  },
  [sym_pragma_once] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_union] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_using] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_padding] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_color] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_comment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_format] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_transform] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pointer_base] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hidden] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_unique_address] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_static] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_be] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_le] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_char16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_str] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_dollar] = {
    .visible = true,
    .named = true,
  },
  [sym_this] = {
    .visible = true,
    .named = true,
  },
  [sym_parent] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_character_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__top_level_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__preproc_directive] = {
    .visible = false,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_system_lib_string] = {
    .visible = true,
    .named = true,
  },
  [sym_define] = {
    .visible = true,
    .named = true,
  },
  [sym_pragma] = {
    .visible = true,
    .named = true,
  },
  [sym_pragma_endian] = {
    .visible = true,
    .named = true,
  },
  [sym_pragma_mime] = {
    .visible = true,
    .named = true,
  },
  [sym_pragma_base_address] = {
    .visible = true,
    .named = true,
  },
  [sym_pragma_eval_depth] = {
    .visible = true,
    .named = true,
  },
  [sym_pragma_array_limit] = {
    .visible = true,
    .named = true,
  },
  [sym_pragma_pattern_limit] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_union_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__definition_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_using_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_placement] = {
    .visible = true,
    .named = true,
  },
  [sym__offset] = {
    .visible = false,
    .named = true,
  },
  [sym_assignation_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_array_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_padding] = {
    .visible = true,
    .named = true,
  },
  [sym__array_size_wrapper] = {
    .visible = false,
    .named = true,
  },
  [sym__array_size] = {
    .visible = false,
    .named = true,
  },
  [sym__identifier_definition] = {
    .visible = false,
    .named = true,
  },
  [sym_field_list] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration_finish] = {
    .visible = false,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__variable_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym__primitive_type] = {
    .visible = false,
    .named = true,
  },
  [sym_endian_indicator] = {
    .visible = true,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__type_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__field_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_field_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [sym__operator] = {
    .visible = false,
    .named = true,
  },
  [sym_unary_numeric_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_numeric_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_ternary_numeric_operator] = {
    .visible = true,
    .named = true,
  },
  [sym__condition] = {
    .visible = false,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_character_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__identifier_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_field_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_type_identifier] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_attribute = 1,
  field_body = 2,
  field_cond = 3,
  field_condition = 4,
  field_else = 5,
  field_endian = 6,
  field_field = 7,
  field_iffalse = 8,
  field_iftrue = 9,
  field_left = 10,
  field_name = 11,
  field_offset = 12,
  field_operator = 13,
  field_parent = 14,
  field_right = 15,
  field_size = 16,
  field_type = 17,
  field_value = 18,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_attribute] = "attribute",
  [field_body] = "body",
  [field_cond] = "cond",
  [field_condition] = "condition",
  [field_else] = "else",
  [field_endian] = "endian",
  [field_field] = "field",
  [field_iffalse] = "iffalse",
  [field_iftrue] = "iftrue",
  [field_left] = "left",
  [field_name] = "name",
  [field_offset] = "offset",
  [field_operator] = "operator",
  [field_parent] = "parent",
  [field_right] = "right",
  [field_size] = "size",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 2},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 11, .length = 5},
  [10] = {.index = 16, .length = 2},
  [11] = {.index = 18, .length = 2},
  [12] = {.index = 20, .length = 3},
  [14] = {.index = 23, .length = 1},
  [15] = {.index = 24, .length = 2},
  [16] = {.index = 26, .length = 3},
  [17] = {.index = 29, .length = 1},
  [18] = {.index = 30, .length = 6},
  [19] = {.index = 36, .length = 1},
  [20] = {.index = 37, .length = 3},
  [21] = {.index = 40, .length = 3},
  [22] = {.index = 43, .length = 6},
  [23] = {.index = 49, .length = 1},
  [24] = {.index = 50, .length = 2},
  [25] = {.index = 52, .length = 2},
  [26] = {.index = 54, .length = 3},
  [27] = {.index = 57, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_endian, 0, .inherited = true},
    {field_type, 0, .inherited = true},
  [2] =
    {field_type, 0},
  [3] =
    {field_name, 0},
  [4] =
    {field_endian, 0},
    {field_type, 1},
  [6] =
    {field_value, 1},
  [7] =
    {field_field, 1, .inherited = true},
    {field_parent, 0},
  [9] =
    {field_body, 2},
    {field_condition, 1, .inherited = true},
  [11] =
    {field_attribute, 2, .inherited = true},
    {field_endian, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_type, 0},
    {field_type, 0, .inherited = true},
  [16] =
    {field_name, 0, .inherited = true},
    {field_name, 1},
  [18] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [20] =
    {field_attribute, 3, .inherited = true},
    {field_body, 2},
    {field_name, 1},
  [23] =
    {field_field, 1},
  [24] =
    {field_field, 0, .inherited = true},
    {field_field, 1, .inherited = true},
  [26] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [29] =
    {field_condition, 1},
  [30] =
    {field_attribute, 3, .inherited = true},
    {field_endian, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_size, 2, .inherited = true},
    {field_type, 0},
    {field_type, 0, .inherited = true},
  [36] =
    {field_attribute, 0},
  [37] =
    {field_endian, 3, .inherited = true},
    {field_name, 1},
    {field_type, 3, .inherited = true},
  [40] =
    {field_body, 2},
    {field_condition, 1, .inherited = true},
    {field_else, 4},
  [43] =
    {field_attribute, 4, .inherited = true},
    {field_endian, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_offset, 3},
    {field_type, 0},
    {field_type, 0, .inherited = true},
  [49] =
    {field_size, 1},
  [50] =
    {field_name, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [52] =
    {field_attribute, 2, .inherited = true},
    {field_size, 1, .inherited = true},
  [54] =
    {field_cond, 0},
    {field_iffalse, 4},
    {field_iftrue, 2},
  [57] =
    {field_name, 0},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_type_identifier,
  },
  [13] = {
    [0] = alias_sym_field_identifier,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(265);
      if (lookahead == '!') ADVANCE(459);
      if (lookahead == '"') ADVANCE(485);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == '$') ADVANCE(440);
      if (lookahead == '%') ADVANCE(466);
      if (lookahead == '&') ADVANCE(469);
      if (lookahead == '\'') ADVANCE(491);
      if (lookahead == '(') ADVANCE(316);
      if (lookahead == ')') ADVANCE(317);
      if (lookahead == '*') ADVANCE(464);
      if (lookahead == '+') ADVANCE(461);
      if (lookahead == ',') ADVANCE(310);
      if (lookahead == '-') ADVANCE(463);
      if (lookahead == '.') ADVANCE(445);
      if (lookahead == '/') ADVANCE(465);
      if (lookahead == ':') ADVANCE(480);
      if (lookahead == ';') ADVANCE(301);
      if (lookahead == '<') ADVANCE(268);
      if (lookahead == '=') ADVANCE(300);
      if (lookahead == '>') ADVANCE(281);
      if (lookahead == '?') ADVANCE(479);
      if (lookahead == '@') ADVANCE(302);
      if (lookahead == 'M') ADVANCE(56);
      if (lookahead == '[') ADVANCE(307);
      if (lookahead == '\\') SKIP(258)
      if (lookahead == ']') ADVANCE(309);
      if (lookahead == '^') ADVANCE(471);
      if (lookahead == 'a') ADVANCE(208);
      if (lookahead == 'b') ADVANCE(67);
      if (lookahead == 'c') ADVANCE(133);
      if (lookahead == 'd') ADVANCE(187);
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead == 'f') ADVANCE(68);
      if (lookahead == 'h') ADVANCE(140);
      if (lookahead == 'i') ADVANCE(125);
      if (lookahead == 'l') ADVANCE(102);
      if (lookahead == 'n') ADVANCE(69);
      if (lookahead == 'o') ADVANCE(171);
      if (lookahead == 'p') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(116);
      if (lookahead == 's') ADVANCE(39);
      if (lookahead == 't') ADVANCE(135);
      if (lookahead == 'u') ADVANCE(42);
      if (lookahead == '{') ADVANCE(311);
      if (lookahead == '|') ADVANCE(470);
      if (lookahead == '}') ADVANCE(312);
      if (lookahead == '~') ADVANCE(457);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(23)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(26)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(27)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(28)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(33)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(33)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(22)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(34)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(34)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(25)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(25)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '"') ADVANCE(485);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(489);
      if (lookahead != 0) ADVANCE(490);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(498);
      if (lookahead == '\r') ADVANCE(497);
      if (lookahead == 'U') ADVANCE(254);
      if (lookahead == 'u') ADVANCE(250);
      if (lookahead == 'x') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(500);
      if (lookahead != 0) ADVANCE(497);
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(29)
      if (lookahead == '\'') ADVANCE(491);
      if (lookahead == '/') ADVANCE(494);
      if (lookahead == '\\') ADVANCE(493);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(495);
      if (lookahead != 0) ADVANCE(492);
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(35)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(35)
      if (lookahead == '\r') SKIP(20)
      END_STATE();
    case 22:
      if (lookahead == '!') ADVANCE(458);
      if (lookahead == '"') ADVANCE(485);
      if (lookahead == '$') ADVANCE(440);
      if (lookahead == '\'') ADVANCE(491);
      if (lookahead == '(') ADVANCE(316);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '0') ADVANCE(453);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'f') ADVANCE(386);
      if (lookahead == 'p') ADVANCE(385);
      if (lookahead == 't') ADVANCE(402);
      if (lookahead == '~') ADVANCE(457);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(454);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(485);
      if (lookahead == '$') ADVANCE(440);
      if (lookahead == '+') ADVANCE(53);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '0') ADVANCE(453);
      if (lookahead == '<') ADVANCE(267);
      if (lookahead == '=') ADVANCE(299);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == ']') ADVANCE(308);
      if (lookahead == 'a') ADVANCE(435);
      if (lookahead == 'b') ADVANCE(392);
      if (lookahead == 'c') ADVANCE(401);
      if (lookahead == 'd') ADVANCE(418);
      if (lookahead == 'f') ADVANCE(409);
      if (lookahead == 'i') ADVANCE(398);
      if (lookahead == 'l') ADVANCE(393);
      if (lookahead == 'p') ADVANCE(382);
      if (lookahead == 'r') ADVANCE(396);
      if (lookahead == 's') ADVANCE(370);
      if (lookahead == 'u') ADVANCE(372);
      if (lookahead == '}') ADVANCE(312);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(454);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(485);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      END_STATE();
    case 25:
      if (lookahead == '$') ADVANCE(440);
      if (lookahead == '+') ADVANCE(53);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '0') ADVANCE(453);
      if (lookahead == ';') ADVANCE(301);
      if (lookahead == '=') ADVANCE(299);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == ']') ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(454);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 26:
      if (lookahead == '$') ADVANCE(440);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'a') ADVANCE(435);
      if (lookahead == 'b') ADVANCE(392);
      if (lookahead == 'c') ADVANCE(401);
      if (lookahead == 'd') ADVANCE(418);
      if (lookahead == 'f') ADVANCE(409);
      if (lookahead == 'i') ADVANCE(398);
      if (lookahead == 'l') ADVANCE(393);
      if (lookahead == 'r') ADVANCE(396);
      if (lookahead == 's') ADVANCE(370);
      if (lookahead == 'u') ADVANCE(372);
      if (lookahead == '{') ADVANCE(311);
      if (lookahead == '}') ADVANCE(312);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 27:
      if (lookahead == '$') ADVANCE(440);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'a') ADVANCE(435);
      if (lookahead == 'b') ADVANCE(392);
      if (lookahead == 'c') ADVANCE(401);
      if (lookahead == 'd') ADVANCE(418);
      if (lookahead == 'e') ADVANCE(408);
      if (lookahead == 'f') ADVANCE(409);
      if (lookahead == 'i') ADVANCE(398);
      if (lookahead == 'l') ADVANCE(393);
      if (lookahead == 'p') ADVANCE(382);
      if (lookahead == 'r') ADVANCE(396);
      if (lookahead == 's') ADVANCE(370);
      if (lookahead == 'u') ADVANCE(372);
      if (lookahead == '}') ADVANCE(312);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 28:
      if (lookahead == '$') ADVANCE(440);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'a') ADVANCE(435);
      if (lookahead == 'b') ADVANCE(392);
      if (lookahead == 'c') ADVANCE(401);
      if (lookahead == 'd') ADVANCE(418);
      if (lookahead == 'e') ADVANCE(408);
      if (lookahead == 'f') ADVANCE(409);
      if (lookahead == 'i') ADVANCE(398);
      if (lookahead == 'l') ADVANCE(393);
      if (lookahead == 'r') ADVANCE(396);
      if (lookahead == 's') ADVANCE(370);
      if (lookahead == 'u') ADVANCE(372);
      if (lookahead == '}') ADVANCE(312);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 29:
      if (lookahead == '\'') ADVANCE(491);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '/') ADVANCE(502);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '/') ADVANCE(501);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == '*') ADVANCE(31);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'a') ADVANCE(435);
      if (lookahead == 'b') ADVANCE(392);
      if (lookahead == 'c') ADVANCE(401);
      if (lookahead == 'd') ADVANCE(418);
      if (lookahead == 'f') ADVANCE(409);
      if (lookahead == 'l') ADVANCE(393);
      if (lookahead == 's') ADVANCE(370);
      if (lookahead == 'u') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 34:
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == 'a') ADVANCE(235);
      if (lookahead == 'b') ADVANCE(189);
      if (lookahead == 'c') ADVANCE(132);
      if (lookahead == 'd') ADVANCE(187);
      if (lookahead == 'f') ADVANCE(153);
      if (lookahead == 's') ADVANCE(40);
      if (lookahead == 'u') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      END_STATE();
    case 35:
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '\\') SKIP(21)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == '/') ADVANCE(255);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '0') ADVANCE(447);
      if (lookahead == '=') ADVANCE(304);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(448);
      END_STATE();
    case 38:
      if (lookahead == '0') ADVANCE(447);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(448);
      END_STATE();
    case 39:
      if (lookahead == '1') ADVANCE(43);
      if (lookahead == '3') ADVANCE(44);
      if (lookahead == '6') ADVANCE(47);
      if (lookahead == '8') ADVANCE(341);
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 40:
      if (lookahead == '1') ADVANCE(43);
      if (lookahead == '3') ADVANCE(44);
      if (lookahead == '6') ADVANCE(47);
      if (lookahead == '8') ADVANCE(341);
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 41:
      if (lookahead == '1') ADVANCE(46);
      if (lookahead == '3') ADVANCE(45);
      if (lookahead == '6') ADVANCE(48);
      if (lookahead == '8') ADVANCE(331);
      END_STATE();
    case 42:
      if (lookahead == '1') ADVANCE(46);
      if (lookahead == '3') ADVANCE(45);
      if (lookahead == '6') ADVANCE(48);
      if (lookahead == '8') ADVANCE(331);
      if (lookahead == 'n') ADVANCE(145);
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 43:
      if (lookahead == '2') ADVANCE(50);
      if (lookahead == '6') ADVANCE(343);
      END_STATE();
    case 44:
      if (lookahead == '2') ADVANCE(345);
      END_STATE();
    case 45:
      if (lookahead == '2') ADVANCE(335);
      END_STATE();
    case 46:
      if (lookahead == '2') ADVANCE(51);
      if (lookahead == '6') ADVANCE(333);
      END_STATE();
    case 47:
      if (lookahead == '4') ADVANCE(347);
      END_STATE();
    case 48:
      if (lookahead == '4') ADVANCE(337);
      END_STATE();
    case 49:
      if (lookahead == '6') ADVANCE(357);
      END_STATE();
    case 50:
      if (lookahead == '8') ADVANCE(349);
      END_STATE();
    case 51:
      if (lookahead == '8') ADVANCE(339);
      END_STATE();
    case 52:
      if (lookahead == '=') ADVANCE(473);
      END_STATE();
    case 53:
      if (lookahead == '=') ADVANCE(303);
      END_STATE();
    case 54:
      if (lookahead == '=') ADVANCE(472);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(286);
      END_STATE();
    case 56:
      if (lookahead == 'I') ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'M') ADVANCE(55);
      END_STATE();
    case 58:
      if (lookahead == '[') ADVANCE(313);
      END_STATE();
    case 59:
      if (lookahead == ']') ADVANCE(314);
      END_STATE();
    case 60:
      if (lookahead == '_') ADVANCE(238);
      END_STATE();
    case 61:
      if (lookahead == '_') ADVANCE(85);
      END_STATE();
    case 62:
      if (lookahead == '_') ADVANCE(81);
      END_STATE();
    case 63:
      if (lookahead == '_') ADVANCE(157);
      END_STATE();
    case 64:
      if (lookahead == '_') ADVANCE(96);
      END_STATE();
    case 65:
      if (lookahead == '_') ADVANCE(163);
      END_STATE();
    case 66:
      if (lookahead == '_') ADVANCE(83);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(214);
      if (lookahead == 'e') ADVANCE(327);
      if (lookahead == 'i') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == 'l') ADVANCE(192);
      if (lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(165);
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(242);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(283);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(177);
      if (lookahead == 'u') ADVANCE(108);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(231);
      if (lookahead == 'r') ADVANCE(363);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(220);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(221);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 84:
      if (lookahead == 'b') ADVANCE(158);
      END_STATE();
    case 85:
      if (lookahead == 'b') ADVANCE(82);
      END_STATE();
    case 86:
      if (lookahead == 'c') ADVANCE(326);
      END_STATE();
    case 87:
      if (lookahead == 'c') ADVANCE(155);
      END_STATE();
    case 88:
      if (lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 89:
      if (lookahead == 'c') ADVANCE(223);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(103);
      if (lookahead == 'i') ADVANCE(176);
      if (lookahead == 'p') ADVANCE(201);
      END_STATE();
    case 91:
      if (lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 92:
      if (lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 93:
      if (lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 94:
      if (lookahead == 'd') ADVANCE(207);
      END_STATE();
    case 95:
      if (lookahead == 'd') ADVANCE(119);
      END_STATE();
    case 96:
      if (lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 97:
      if (lookahead == 'd') ADVANCE(113);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(120);
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 99:
      if (lookahead == 'd') ADVANCE(147);
      END_STATE();
    case 100:
      if (lookahead == 'd') ADVANCE(209);
      END_STATE();
    case 101:
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(329);
      if (lookahead == 'i') ADVANCE(230);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(483);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 125:
      if (lookahead == 'f') ADVANCE(481);
      if (lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 126:
      if (lookahead == 'f') ADVANCE(194);
      END_STATE();
    case 127:
      if (lookahead == 'f') ADVANCE(150);
      END_STATE();
    case 128:
      if (lookahead == 'g') ADVANCE(285);
      END_STATE();
    case 129:
      if (lookahead == 'g') ADVANCE(297);
      END_STATE();
    case 130:
      if (lookahead == 'g') ADVANCE(305);
      END_STATE();
    case 131:
      if (lookahead == 'g') ADVANCE(166);
      END_STATE();
    case 132:
      if (lookahead == 'h') ADVANCE(75);
      END_STATE();
    case 133:
      if (lookahead == 'h') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 134:
      if (lookahead == 'h') ADVANCE(289);
      END_STATE();
    case 135:
      if (lookahead == 'h') ADVANCE(139);
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(241);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(210);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(226);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(227);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(359);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(192);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(239);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(191);
      if (lookahead == 'm') ADVANCE(170);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(215);
      if (lookahead == 'n') ADVANCE(93);
      if (lookahead == 'v') ADVANCE(76);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(218);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 164:
      if (lookahead == 'm') ADVANCE(321);
      END_STATE();
    case 165:
      if (lookahead == 'm') ADVANCE(106);
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 166:
      if (lookahead == 'm') ADVANCE(72);
      END_STATE();
    case 167:
      if (lookahead == 'm') ADVANCE(148);
      END_STATE();
    case 168:
      if (lookahead == 'm') ADVANCE(80);
      END_STATE();
    case 169:
      if (lookahead == 'm') ADVANCE(149);
      END_STATE();
    case 170:
      if (lookahead == 'm') ADVANCE(123);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(295);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(284);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(323);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(367);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(233);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 187:
      if (lookahead == 'o') ADVANCE(236);
      END_STATE();
    case 188:
      if (lookahead == 'o') ADVANCE(365);
      END_STATE();
    case 189:
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 190:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 191:
      if (lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 192:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 193:
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 194:
      if (lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 195:
      if (lookahead == 'p') ADVANCE(225);
      END_STATE();
    case 196:
      if (lookahead == 'q') ADVANCE(240);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(355);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(315);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(361);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 201:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 202:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 203:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 204:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 205:
      if (lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 206:
      if (lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(202);
      if (lookahead == 'u') ADVANCE(229);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 210:
      if (lookahead == 's') ADVANCE(441);
      END_STATE();
    case 211:
      if (lookahead == 's') ADVANCE(288);
      END_STATE();
    case 212:
      if (lookahead == 's') ADVANCE(325);
      END_STATE();
    case 213:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 214:
      if (lookahead == 's') ADVANCE(115);
      END_STATE();
    case 215:
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 216:
      if (lookahead == 's') ADVANCE(211);
      END_STATE();
    case 217:
      if (lookahead == 's') ADVANCE(212);
      END_STATE();
    case 218:
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 219:
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(351);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(320);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(443);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(293);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(319);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(290);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(237);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(234);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 235:
      if (lookahead == 'u') ADVANCE(229);
      END_STATE();
    case 236:
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 237:
      if (lookahead == 'u') ADVANCE(205);
      END_STATE();
    case 238:
      if (lookahead == 'u') ADVANCE(180);
      END_STATE();
    case 239:
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 240:
      if (lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 241:
      if (lookahead == 'v') ADVANCE(104);
      END_STATE();
    case 242:
      if (lookahead == 'y') ADVANCE(63);
      END_STATE();
    case 243:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(450);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(452);
      END_STATE();
    case 244:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(451);
      END_STATE();
    case 245:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(452);
      END_STATE();
    case 246:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(456);
      END_STATE();
    case 247:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(497);
      END_STATE();
    case 248:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(247);
      END_STATE();
    case 249:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(248);
      END_STATE();
    case 250:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(249);
      END_STATE();
    case 251:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(250);
      END_STATE();
    case 252:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(251);
      END_STATE();
    case 253:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(252);
      END_STATE();
    case 254:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(253);
      END_STATE();
    case 255:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 256:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(502);
      if (lookahead == '\r') ADVANCE(503);
      END_STATE();
    case 257:
      if (eof) ADVANCE(265);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 258:
      if (eof) ADVANCE(265);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(257)
      END_STATE();
    case 259:
      if (eof) ADVANCE(265);
      if (lookahead == '\n') SKIP(263)
      END_STATE();
    case 260:
      if (eof) ADVANCE(265);
      if (lookahead == '\n') SKIP(263)
      if (lookahead == '\r') SKIP(259)
      END_STATE();
    case 261:
      if (eof) ADVANCE(265);
      if (lookahead == '\n') SKIP(264)
      END_STATE();
    case 262:
      if (eof) ADVANCE(265);
      if (lookahead == '\n') SKIP(264)
      if (lookahead == '\r') SKIP(261)
      END_STATE();
    case 263:
      if (eof) ADVANCE(265);
      if (lookahead == '!') ADVANCE(52);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == '$') ADVANCE(440);
      if (lookahead == '%') ADVANCE(466);
      if (lookahead == '&') ADVANCE(469);
      if (lookahead == ')') ADVANCE(317);
      if (lookahead == '*') ADVANCE(464);
      if (lookahead == '+') ADVANCE(460);
      if (lookahead == '-') ADVANCE(462);
      if (lookahead == '.') ADVANCE(445);
      if (lookahead == '/') ADVANCE(465);
      if (lookahead == ':') ADVANCE(480);
      if (lookahead == ';') ADVANCE(301);
      if (lookahead == '<') ADVANCE(268);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '>') ADVANCE(281);
      if (lookahead == '?') ADVANCE(479);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == '\\') SKIP(260)
      if (lookahead == ']') ADVANCE(59);
      if (lookahead == '^') ADVANCE(471);
      if (lookahead == 'a') ADVANCE(435);
      if (lookahead == 'b') ADVANCE(392);
      if (lookahead == 'c') ADVANCE(401);
      if (lookahead == 'd') ADVANCE(418);
      if (lookahead == 'f') ADVANCE(409);
      if (lookahead == 'i') ADVANCE(398);
      if (lookahead == 'l') ADVANCE(393);
      if (lookahead == 'r') ADVANCE(396);
      if (lookahead == 's') ADVANCE(369);
      if (lookahead == 'u') ADVANCE(371);
      if (lookahead == '|') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(263)
      if (('A' <= lookahead && lookahead <= '_') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 264:
      if (eof) ADVANCE(265);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == '$') ADVANCE(440);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '\\') SKIP(262)
      if (lookahead == 'a') ADVANCE(435);
      if (lookahead == 'b') ADVANCE(392);
      if (lookahead == 'c') ADVANCE(401);
      if (lookahead == 'd') ADVANCE(418);
      if (lookahead == 'e') ADVANCE(408);
      if (lookahead == 'f') ADVANCE(409);
      if (lookahead == 'i') ADVANCE(398);
      if (lookahead == 'l') ADVANCE(393);
      if (lookahead == 'r') ADVANCE(396);
      if (lookahead == 's') ADVANCE(369);
      if (lookahead == 'u') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(264)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_POUNDinclude);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(468);
      if (lookahead == '=') ADVANCE(475);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '*') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(274);
      if (lookahead == '\\') ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead == '\n') ADVANCE(502);
      if (lookahead == '\r') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(276);
      if (lookahead == '\\') ADVANCE(280);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead == '\r') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(277);
      if (lookahead == '\\') ADVANCE(279);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead == '*') ADVANCE(274);
      if (lookahead == '/') ADVANCE(276);
      if (lookahead == '\\') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '>') ADVANCE(277);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead == '*') ADVANCE(273);
      if (lookahead == '/') ADVANCE(277);
      if (lookahead == '\\') ADVANCE(269);
      if (lookahead == '\n' ||
          lookahead == '>') ADVANCE(32);
      if (lookahead != 0) ADVANCE(274);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead == '*') ADVANCE(273);
      if (lookahead == '\\') ADVANCE(269);
      if (lookahead == '\n' ||
          lookahead == '>') ADVANCE(32);
      if (lookahead != 0) ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead == '/') ADVANCE(272);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '>') ADVANCE(277);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead == '>') ADVANCE(502);
      if (lookahead == '\\') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead == '\\') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '>') ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead == '\n' ||
          lookahead == '>') ADVANCE(502);
      if (lookahead == '\\') ADVANCE(270);
      if (lookahead != 0) ADVANCE(276);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(277);
      if (lookahead == '\\') ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(276);
      if (lookahead == '\\') ADVANCE(270);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(474);
      if (lookahead == '>') ADVANCE(467);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_POUNDdefine);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_POUNDpragma);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_endian);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_endian_val);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_MIME);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_mime_type);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_base_address);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_eval_depth);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_array_limit);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_pattern_limit);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_pragma_once);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_union);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_using);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(472);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_padding);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_padding);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[') ADVANCE(313);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']') ADVANCE(314);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_comment);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_transform);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_pointer_base);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_hidden);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_no_unique_address);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_be);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_be);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_le);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_le);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_u16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_u32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_u64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_u128);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_u128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_s8);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_s8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_s16);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_s16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_s32);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_s32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_s64);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_s64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_s128);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_s128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_char);
      if (lookahead == '1') ADVANCE(49);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_char);
      if (lookahead == '1') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_char16);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_char16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_str);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_str);
      if (lookahead == 'u') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_str);
      if (lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_str);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_auto);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_auto);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(373);
      if (lookahead == '3') ADVANCE(374);
      if (lookahead == '6') ADVANCE(377);
      if (lookahead == '8') ADVANCE(342);
      if (lookahead == 't') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(373);
      if (lookahead == '3') ADVANCE(374);
      if (lookahead == '6') ADVANCE(377);
      if (lookahead == '8') ADVANCE(342);
      if (lookahead == 't') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(376);
      if (lookahead == '3') ADVANCE(375);
      if (lookahead == '6') ADVANCE(378);
      if (lookahead == '8') ADVANCE(332);
      if (lookahead == 'n') ADVANCE(405);
      if (lookahead == 's') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(376);
      if (lookahead == '3') ADVANCE(375);
      if (lookahead == '6') ADVANCE(378);
      if (lookahead == '8') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(380);
      if (lookahead == '6') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(381);
      if (lookahead == '6') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(328);
      if (lookahead == 'o') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(404);
      if (lookahead == 'r') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_dollar);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_this);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_this);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_parent);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_parent);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_number_literal);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'b') ADVANCE(243);
      if (lookahead == 'o') ADVANCE(244);
      if (lookahead == 'x') ADVANCE(246);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(456);
      if (('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(446);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(450);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(452);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(446);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(451);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(452);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'U') ADVANCE(455);
      if (lookahead == 'b') ADVANCE(243);
      if (lookahead == 'o') ADVANCE(244);
      if (lookahead == 'x') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'U') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(452);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(456);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(473);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(303);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(304);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '/') ADVANCE(502);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(476);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(477);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '^') ADVANCE(478);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_CARET_CARET);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(488);
      if (lookahead == '/') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(490);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(487);
      if (lookahead == '/') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(488);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(488);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(490);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(490);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_character_literal_token1);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_character_literal_token1);
      if (lookahead == '\n') ADVANCE(498);
      if (lookahead == '\r') ADVANCE(497);
      if (lookahead == 'U') ADVANCE(254);
      if (lookahead == 'u') ADVANCE(250);
      if (lookahead == 'x') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(500);
      if (lookahead != 0) ADVANCE(497);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_character_literal_token1);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '/') ADVANCE(502);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_character_literal_token1);
      if (lookahead == '\\') ADVANCE(18);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_boolean_literal);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\\') ADVANCE(18);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(497);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(502);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(502);
      if (lookahead == '\\') ADVANCE(256);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 263},
  [2] = {.lex_state = 263},
  [3] = {.lex_state = 263},
  [4] = {.lex_state = 263},
  [5] = {.lex_state = 263},
  [6] = {.lex_state = 263},
  [7] = {.lex_state = 263},
  [8] = {.lex_state = 263},
  [9] = {.lex_state = 263},
  [10] = {.lex_state = 263},
  [11] = {.lex_state = 263},
  [12] = {.lex_state = 263},
  [13] = {.lex_state = 263},
  [14] = {.lex_state = 263},
  [15] = {.lex_state = 263},
  [16] = {.lex_state = 263},
  [17] = {.lex_state = 263},
  [18] = {.lex_state = 263},
  [19] = {.lex_state = 263},
  [20] = {.lex_state = 263},
  [21] = {.lex_state = 263},
  [22] = {.lex_state = 263},
  [23] = {.lex_state = 263},
  [24] = {.lex_state = 263},
  [25] = {.lex_state = 263},
  [26] = {.lex_state = 263},
  [27] = {.lex_state = 263},
  [28] = {.lex_state = 23},
  [29] = {.lex_state = 23},
  [30] = {.lex_state = 23},
  [31] = {.lex_state = 26},
  [32] = {.lex_state = 26},
  [33] = {.lex_state = 26},
  [34] = {.lex_state = 26},
  [35] = {.lex_state = 26},
  [36] = {.lex_state = 26},
  [37] = {.lex_state = 26},
  [38] = {.lex_state = 26},
  [39] = {.lex_state = 26},
  [40] = {.lex_state = 26},
  [41] = {.lex_state = 26},
  [42] = {.lex_state = 26},
  [43] = {.lex_state = 26},
  [44] = {.lex_state = 26},
  [45] = {.lex_state = 26},
  [46] = {.lex_state = 26},
  [47] = {.lex_state = 26},
  [48] = {.lex_state = 26},
  [49] = {.lex_state = 26},
  [50] = {.lex_state = 26},
  [51] = {.lex_state = 26},
  [52] = {.lex_state = 26},
  [53] = {.lex_state = 26},
  [54] = {.lex_state = 26},
  [55] = {.lex_state = 26},
  [56] = {.lex_state = 264},
  [57] = {.lex_state = 264},
  [58] = {.lex_state = 264},
  [59] = {.lex_state = 264},
  [60] = {.lex_state = 264},
  [61] = {.lex_state = 264},
  [62] = {.lex_state = 264},
  [63] = {.lex_state = 264},
  [64] = {.lex_state = 264},
  [65] = {.lex_state = 264},
  [66] = {.lex_state = 264},
  [67] = {.lex_state = 264},
  [68] = {.lex_state = 264},
  [69] = {.lex_state = 264},
  [70] = {.lex_state = 264},
  [71] = {.lex_state = 263},
  [72] = {.lex_state = 263},
  [73] = {.lex_state = 263},
  [74] = {.lex_state = 263},
  [75] = {.lex_state = 263},
  [76] = {.lex_state = 263},
  [77] = {.lex_state = 263},
  [78] = {.lex_state = 263},
  [79] = {.lex_state = 263},
  [80] = {.lex_state = 263},
  [81] = {.lex_state = 263},
  [82] = {.lex_state = 263},
  [83] = {.lex_state = 263},
  [84] = {.lex_state = 263},
  [85] = {.lex_state = 263},
  [86] = {.lex_state = 263},
  [87] = {.lex_state = 263},
  [88] = {.lex_state = 263},
  [89] = {.lex_state = 263},
  [90] = {.lex_state = 263},
  [91] = {.lex_state = 263},
  [92] = {.lex_state = 263},
  [93] = {.lex_state = 263},
  [94] = {.lex_state = 263},
  [95] = {.lex_state = 27},
  [96] = {.lex_state = 27},
  [97] = {.lex_state = 27},
  [98] = {.lex_state = 27},
  [99] = {.lex_state = 27},
  [100] = {.lex_state = 27},
  [101] = {.lex_state = 27},
  [102] = {.lex_state = 27},
  [103] = {.lex_state = 27},
  [104] = {.lex_state = 27},
  [105] = {.lex_state = 27},
  [106] = {.lex_state = 27},
  [107] = {.lex_state = 27},
  [108] = {.lex_state = 27},
  [109] = {.lex_state = 27},
  [110] = {.lex_state = 28},
  [111] = {.lex_state = 23},
  [112] = {.lex_state = 23},
  [113] = {.lex_state = 28},
  [114] = {.lex_state = 23},
  [115] = {.lex_state = 23},
  [116] = {.lex_state = 23},
  [117] = {.lex_state = 23},
  [118] = {.lex_state = 23},
  [119] = {.lex_state = 23},
  [120] = {.lex_state = 23},
  [121] = {.lex_state = 28},
  [122] = {.lex_state = 23},
  [123] = {.lex_state = 28},
  [124] = {.lex_state = 28},
  [125] = {.lex_state = 28},
  [126] = {.lex_state = 33},
  [127] = {.lex_state = 23},
  [128] = {.lex_state = 23},
  [129] = {.lex_state = 28},
  [130] = {.lex_state = 28},
  [131] = {.lex_state = 28},
  [132] = {.lex_state = 28},
  [133] = {.lex_state = 28},
  [134] = {.lex_state = 28},
  [135] = {.lex_state = 28},
  [136] = {.lex_state = 28},
  [137] = {.lex_state = 28},
  [138] = {.lex_state = 26},
  [139] = {.lex_state = 26},
  [140] = {.lex_state = 26},
  [141] = {.lex_state = 26},
  [142] = {.lex_state = 26},
  [143] = {.lex_state = 26},
  [144] = {.lex_state = 26},
  [145] = {.lex_state = 26},
  [146] = {.lex_state = 26},
  [147] = {.lex_state = 26},
  [148] = {.lex_state = 26},
  [149] = {.lex_state = 26},
  [150] = {.lex_state = 22},
  [151] = {.lex_state = 263},
  [152] = {.lex_state = 22},
  [153] = {.lex_state = 22},
  [154] = {.lex_state = 263},
  [155] = {.lex_state = 22},
  [156] = {.lex_state = 263},
  [157] = {.lex_state = 263},
  [158] = {.lex_state = 22},
  [159] = {.lex_state = 263},
  [160] = {.lex_state = 263},
  [161] = {.lex_state = 22},
  [162] = {.lex_state = 263},
  [163] = {.lex_state = 263},
  [164] = {.lex_state = 22},
  [165] = {.lex_state = 263},
  [166] = {.lex_state = 263},
  [167] = {.lex_state = 263},
  [168] = {.lex_state = 263},
  [169] = {.lex_state = 263},
  [170] = {.lex_state = 22},
  [171] = {.lex_state = 22},
  [172] = {.lex_state = 22},
  [173] = {.lex_state = 22},
  [174] = {.lex_state = 22},
  [175] = {.lex_state = 263},
  [176] = {.lex_state = 263},
  [177] = {.lex_state = 263},
  [178] = {.lex_state = 22},
  [179] = {.lex_state = 22},
  [180] = {.lex_state = 22},
  [181] = {.lex_state = 22},
  [182] = {.lex_state = 22},
  [183] = {.lex_state = 22},
  [184] = {.lex_state = 22},
  [185] = {.lex_state = 22},
  [186] = {.lex_state = 22},
  [187] = {.lex_state = 22},
  [188] = {.lex_state = 22},
  [189] = {.lex_state = 22},
  [190] = {.lex_state = 22},
  [191] = {.lex_state = 22},
  [192] = {.lex_state = 22},
  [193] = {.lex_state = 22},
  [194] = {.lex_state = 22},
  [195] = {.lex_state = 34},
  [196] = {.lex_state = 34},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 25},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 25},
  [208] = {.lex_state = 25},
  [209] = {.lex_state = 25},
  [210] = {.lex_state = 25},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 25},
  [214] = {.lex_state = 25},
  [215] = {.lex_state = 25},
  [216] = {.lex_state = 25},
  [217] = {.lex_state = 17},
  [218] = {.lex_state = 25},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 17},
  [229] = {.lex_state = 17},
  [230] = {.lex_state = 25},
  [231] = {.lex_state = 23},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 25},
  [234] = {.lex_state = 25},
  [235] = {.lex_state = 19},
  [236] = {.lex_state = 23},
  [237] = {.lex_state = 25},
  [238] = {.lex_state = 23},
  [239] = {.lex_state = 25},
  [240] = {.lex_state = 25},
  [241] = {.lex_state = 23},
  [242] = {.lex_state = 23},
  [243] = {.lex_state = 23},
  [244] = {.lex_state = 25},
  [245] = {.lex_state = 23},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 25},
  [256] = {.lex_state = 25},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 23},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 25},
  [268] = {.lex_state = 25},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 263},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 23},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 275},
  [280] = {.lex_state = 263},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 263},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 35},
  [287] = {.lex_state = 23},
  [288] = {.lex_state = 23},
  [289] = {.lex_state = 23},
  [290] = {.lex_state = 23},
  [291] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUNDinclude] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_POUNDdefine] = ACTIONS(1),
    [anon_sym_POUNDpragma] = ACTIONS(1),
    [anon_sym_endian] = ACTIONS(1),
    [sym_endian_val] = ACTIONS(1),
    [anon_sym_MIME] = ACTIONS(1),
    [anon_sym_base_address] = ACTIONS(1),
    [anon_sym_eval_depth] = ACTIONS(1),
    [anon_sym_array_limit] = ACTIONS(1),
    [anon_sym_pattern_limit] = ACTIONS(1),
    [sym_pragma_once] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_union] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_padding] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_color] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [anon_sym_comment] = ACTIONS(1),
    [anon_sym_format] = ACTIONS(1),
    [anon_sym_transform] = ACTIONS(1),
    [anon_sym_pointer_base] = ACTIONS(1),
    [anon_sym_hidden] = ACTIONS(1),
    [anon_sym_inline] = ACTIONS(1),
    [anon_sym_no_unique_address] = ACTIONS(1),
    [anon_sym_static] = ACTIONS(1),
    [anon_sym_be] = ACTIONS(1),
    [anon_sym_le] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_u16] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
    [anon_sym_u128] = ACTIONS(1),
    [anon_sym_s8] = ACTIONS(1),
    [anon_sym_s16] = ACTIONS(1),
    [anon_sym_s32] = ACTIONS(1),
    [anon_sym_s64] = ACTIONS(1),
    [anon_sym_s128] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym_char16] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_str] = ACTIONS(1),
    [anon_sym_auto] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [sym_dollar] = ACTIONS(1),
    [sym_this] = ACTIONS(1),
    [sym_parent] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_CARET_CARET] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_boolean_literal] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(272),
    [sym__top_level_statement] = STATE(26),
    [sym__preproc_directive] = STATE(26),
    [sym_include] = STATE(26),
    [sym_define] = STATE(26),
    [sym_pragma] = STATE(26),
    [sym_struct_definition] = STATE(26),
    [sym_union_definition] = STATE(26),
    [sym__definition_statement] = STATE(26),
    [sym_using_definition] = STATE(26),
    [sym_variable_definition] = STATE(26),
    [sym_variable_placement] = STATE(26),
    [sym_assignation_statement] = STATE(26),
    [sym_array_definition] = STATE(26),
    [sym__type] = STATE(209),
    [sym__primitive_type] = STATE(244),
    [sym_endian_indicator] = STATE(195),
    [sym_primitive_type] = STATE(239),
    [sym__statement] = STATE(26),
    [sym_return_statement] = STATE(26),
    [sym__identifier] = STATE(238),
    [sym__type_identifier] = STATE(209),
    [sym_if_statement] = STATE(26),
    [aux_sym_source_file_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_POUNDinclude] = ACTIONS(7),
    [anon_sym_POUNDdefine] = ACTIONS(9),
    [anon_sym_POUNDpragma] = ACTIONS(11),
    [anon_sym_struct] = ACTIONS(13),
    [anon_sym_union] = ACTIONS(15),
    [anon_sym_using] = ACTIONS(17),
    [anon_sym_be] = ACTIONS(19),
    [anon_sym_le] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(21),
    [anon_sym_u16] = ACTIONS(21),
    [anon_sym_u32] = ACTIONS(21),
    [anon_sym_u64] = ACTIONS(21),
    [anon_sym_u128] = ACTIONS(21),
    [anon_sym_s8] = ACTIONS(21),
    [anon_sym_s16] = ACTIONS(21),
    [anon_sym_s32] = ACTIONS(21),
    [anon_sym_s64] = ACTIONS(21),
    [anon_sym_s128] = ACTIONS(21),
    [anon_sym_float] = ACTIONS(21),
    [anon_sym_double] = ACTIONS(21),
    [anon_sym_char] = ACTIONS(21),
    [anon_sym_char16] = ACTIONS(21),
    [anon_sym_bool] = ACTIONS(21),
    [anon_sym_str] = ACTIONS(21),
    [anon_sym_auto] = ACTIONS(21),
    [anon_sym_return] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_dollar] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DOT,
    STATE(4), 1,
      aux_sym_field_expression_repeat1,
    ACTIONS(31), 23,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RPAREN,
      sym_dollar,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_QMARK,
      anon_sym_COLON,
    ACTIONS(33), 31,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_if,
  [68] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DOT,
    STATE(2), 1,
      aux_sym_field_expression_repeat1,
    ACTIONS(37), 23,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RPAREN,
      sym_dollar,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_QMARK,
      anon_sym_COLON,
    ACTIONS(39), 31,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_if,
  [136] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_DOT,
    STATE(4), 1,
      aux_sym_field_expression_repeat1,
    ACTIONS(41), 23,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RPAREN,
      sym_dollar,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_QMARK,
      anon_sym_COLON,
    ACTIONS(43), 31,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_if,
  [204] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DOT,
    STATE(4), 1,
      aux_sym_field_expression_repeat1,
    ACTIONS(31), 23,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RPAREN,
      sym_dollar,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_QMARK,
      anon_sym_COLON,
    ACTIONS(33), 31,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_if,
  [272] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RPAREN,
      sym_dollar,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_QMARK,
      anon_sym_COLON,
    ACTIONS(50), 31,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_if,
  [335] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RPAREN,
      sym_dollar,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_QMARK,
      anon_sym_COLON,
    ACTIONS(54), 31,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_if,
  [398] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 23,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RPAREN,
      sym_dollar,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_QMARK,
      anon_sym_COLON,
    ACTIONS(58), 31,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_if,
  [460] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 23,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RPAREN,
      sym_dollar,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_QMARK,
      anon_sym_COLON,
    ACTIONS(62), 31,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_if,
  [522] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_SLASH,
    ACTIONS(74), 1,
      anon_sym_AMP,
    ACTIONS(64), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(66), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(68), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(72), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(76), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(56), 13,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RPAREN,
      sym_dollar,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_QMARK,
      anon_sym_COLON,
    ACTIONS(58), 27,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_if,
  [598] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_SLASH,
    ACTIONS(74), 1,
      anon_sym_AMP,
    ACTIONS(78), 1,
      anon_sym_CARET,
    ACTIONS(64), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(66), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(68), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(72), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(76), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(56), 13,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RPAREN,
      sym_dollar,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_QMARK,
      anon_sym_COLON,
    ACTIONS(58), 26,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_PIPE,
      anon_sym_if,
  [676] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_SLASH,
    ACTIONS(64), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(66), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(68), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(72), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(76), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(56), 13,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RPAREN,
      sym_dollar,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_QMARK,
      anon_sym_COLON,
    ACTIONS(58), 28,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_if,
  [750] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 23,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RPAREN,
      sym_dollar,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_QMARK,
      anon_sym_COLON,
    ACTIONS(82), 31,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_if,
  [812] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_SLASH,
    ACTIONS(66), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(68), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(56), 19,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RPAREN,
      sym_dollar,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_QMARK,
      anon_sym_COLON,
    ACTIONS(58), 30,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_if,
  [880] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_SLASH,
    ACTIONS(68), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(56), 21,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RPAREN,
      sym_dollar,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_QMARK,
      anon_sym_COLON,
    ACTIONS(58), 30,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_if,
  [946] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_SLASH,
    ACTIONS(74), 1,
      anon_sym_AMP,
    ACTIONS(78), 1,
      anon_sym_CARET,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(64), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(66), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(68), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(72), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(76), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(56), 13,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RPAREN,
      sym_dollar,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_QMARK,
      anon_sym_COLON,
    ACTIONS(58), 25,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [1026] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_SLASH,
    ACTIONS(74), 1,
      anon_sym_AMP,
    ACTIONS(78), 1,
      anon_sym_CARET,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(86), 1,
      anon_sym_CARET_CARET,
    ACTIONS(64), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(66), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(68), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(72), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(76), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(56), 12,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RPAREN,
      sym_dollar,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_COLON,
    ACTIONS(58), 25,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [1108] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 23,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RPAREN,
      sym_dollar,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_QMARK,
      anon_sym_COLON,
    ACTIONS(90), 31,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_if,
  [1170] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_SLASH,
    ACTIONS(74), 1,
      anon_sym_AMP,
    ACTIONS(78), 1,
      anon_sym_CARET,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(86), 1,
      anon_sym_CARET_CARET,
    ACTIONS(96), 1,
      anon_sym_AMP_AMP,
    ACTIONS(98), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(64), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(66), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(68), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(72), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(76), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(92), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RPAREN,
      sym_dollar,
      anon_sym_QMARK,
      anon_sym_COLON,
    ACTIONS(94), 25,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [1256] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 23,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RPAREN,
      sym_dollar,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_QMARK,
      anon_sym_COLON,
    ACTIONS(102), 31,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_if,
  [1318] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 23,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RPAREN,
      sym_dollar,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_QMARK,
      anon_sym_COLON,
    ACTIONS(106), 31,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_if,
  [1380] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_SLASH,
    ACTIONS(66), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(68), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(72), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(56), 17,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RPAREN,
      sym_dollar,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_QMARK,
      anon_sym_COLON,
    ACTIONS(58), 30,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_if,
  [1450] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_SLASH,
    ACTIONS(74), 1,
      anon_sym_AMP,
    ACTIONS(78), 1,
      anon_sym_CARET,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(86), 1,
      anon_sym_CARET_CARET,
    ACTIONS(96), 1,
      anon_sym_AMP_AMP,
    ACTIONS(64), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(66), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(68), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(72), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(76), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(56), 11,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RPAREN,
      sym_dollar,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_COLON,
    ACTIONS(58), 25,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [1534] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_SLASH,
    ACTIONS(74), 1,
      anon_sym_AMP,
    ACTIONS(78), 1,
      anon_sym_CARET,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(86), 1,
      anon_sym_CARET_CARET,
    ACTIONS(96), 1,
      anon_sym_AMP_AMP,
    ACTIONS(98), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(64), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(66), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(68), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(72), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(76), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(108), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RPAREN,
      sym_dollar,
      anon_sym_QMARK,
      anon_sym_COLON,
    ACTIONS(110), 25,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [1620] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    ACTIONS(114), 1,
      anon_sym_POUNDinclude,
    ACTIONS(117), 1,
      anon_sym_POUNDdefine,
    ACTIONS(120), 1,
      anon_sym_POUNDpragma,
    ACTIONS(123), 1,
      anon_sym_struct,
    ACTIONS(126), 1,
      anon_sym_union,
    ACTIONS(129), 1,
      anon_sym_using,
    ACTIONS(138), 1,
      anon_sym_return,
    ACTIONS(141), 1,
      sym_identifier,
    ACTIONS(144), 1,
      sym_dollar,
    ACTIONS(147), 1,
      anon_sym_if,
    STATE(195), 1,
      sym_endian_indicator,
    STATE(238), 1,
      sym__identifier,
    STATE(239), 1,
      sym_primitive_type,
    STATE(244), 1,
      sym__primitive_type,
    ACTIONS(132), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(209), 2,
      sym__type,
      sym__type_identifier,
    ACTIONS(135), 17,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
    STATE(25), 17,
      sym__top_level_statement,
      sym__preproc_directive,
      sym_include,
      sym_define,
      sym_pragma,
      sym_struct_definition,
      sym_union_definition,
      sym__definition_statement,
      sym_using_definition,
      sym_variable_definition,
      sym_variable_placement,
      sym_assignation_statement,
      sym_array_definition,
      sym__statement,
      sym_return_statement,
      sym_if_statement,
      aux_sym_source_file_repeat1,
  [1715] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_POUNDinclude,
    ACTIONS(9), 1,
      anon_sym_POUNDdefine,
    ACTIONS(11), 1,
      anon_sym_POUNDpragma,
    ACTIONS(13), 1,
      anon_sym_struct,
    ACTIONS(15), 1,
      anon_sym_union,
    ACTIONS(17), 1,
      anon_sym_using,
    ACTIONS(23), 1,
      anon_sym_return,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      sym_dollar,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(195), 1,
      sym_endian_indicator,
    STATE(238), 1,
      sym__identifier,
    STATE(239), 1,
      sym_primitive_type,
    STATE(244), 1,
      sym__primitive_type,
    ACTIONS(19), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(209), 2,
      sym__type,
      sym__type_identifier,
    ACTIONS(21), 17,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
    STATE(25), 17,
      sym__top_level_statement,
      sym__preproc_directive,
      sym_include,
      sym_define,
      sym_pragma,
      sym_struct_definition,
      sym_union_definition,
      sym__definition_statement,
      sym_using_definition,
      sym_variable_definition,
      sym_variable_placement,
      sym_assignation_statement,
      sym_array_definition,
      sym__statement,
      sym_return_statement,
      sym_if_statement,
      aux_sym_source_file_repeat1,
  [1810] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_SLASH,
    ACTIONS(74), 1,
      anon_sym_AMP,
    ACTIONS(78), 1,
      anon_sym_CARET,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(86), 1,
      anon_sym_CARET_CARET,
    ACTIONS(96), 1,
      anon_sym_AMP_AMP,
    ACTIONS(98), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(156), 1,
      anon_sym_QMARK,
    ACTIONS(64), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(66), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(68), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(72), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(76), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(152), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(154), 25,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [1894] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_padding,
    ACTIONS(161), 1,
      anon_sym_RBRACE,
    ACTIONS(169), 1,
      anon_sym_return,
    ACTIONS(172), 1,
      sym_identifier,
    ACTIONS(175), 1,
      sym_dollar,
    ACTIONS(178), 1,
      anon_sym_if,
    STATE(195), 1,
      sym_endian_indicator,
    STATE(239), 1,
      sym_primitive_type,
    STATE(243), 1,
      sym__identifier,
    STATE(244), 1,
      sym__primitive_type,
    ACTIONS(163), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(207), 2,
      sym__type,
      sym__type_identifier,
    STATE(28), 9,
      sym__definition_statement,
      sym_variable_definition,
      sym_assignation_statement,
      sym_array_definition,
      sym_padding,
      sym__statement,
      sym_return_statement,
      sym_if_statement,
      aux_sym_field_list_repeat1,
    ACTIONS(166), 17,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
  [1966] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(181), 1,
      anon_sym_padding,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
    ACTIONS(185), 1,
      anon_sym_return,
    ACTIONS(187), 1,
      sym_dollar,
    ACTIONS(189), 1,
      anon_sym_if,
    STATE(195), 1,
      sym_endian_indicator,
    STATE(239), 1,
      sym_primitive_type,
    STATE(243), 1,
      sym__identifier,
    STATE(244), 1,
      sym__primitive_type,
    ACTIONS(19), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(207), 2,
      sym__type,
      sym__type_identifier,
    STATE(28), 9,
      sym__definition_statement,
      sym_variable_definition,
      sym_assignation_statement,
      sym_array_definition,
      sym_padding,
      sym__statement,
      sym_return_statement,
      sym_if_statement,
      aux_sym_field_list_repeat1,
    ACTIONS(21), 17,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
  [2038] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(181), 1,
      anon_sym_padding,
    ACTIONS(185), 1,
      anon_sym_return,
    ACTIONS(187), 1,
      sym_dollar,
    ACTIONS(189), 1,
      anon_sym_if,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
    STATE(195), 1,
      sym_endian_indicator,
    STATE(239), 1,
      sym_primitive_type,
    STATE(243), 1,
      sym__identifier,
    STATE(244), 1,
      sym__primitive_type,
    ACTIONS(19), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(207), 2,
      sym__type,
      sym__type_identifier,
    STATE(29), 9,
      sym__definition_statement,
      sym_variable_definition,
      sym_assignation_statement,
      sym_array_definition,
      sym_padding,
      sym__statement,
      sym_return_statement,
      sym_if_statement,
      aux_sym_field_list_repeat1,
    ACTIONS(21), 17,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
  [2110] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LBRACE,
    ACTIONS(195), 1,
      anon_sym_return,
    ACTIONS(197), 1,
      sym_dollar,
    ACTIONS(199), 1,
      anon_sym_if,
    STATE(104), 1,
      sym_block,
    STATE(195), 1,
      sym_endian_indicator,
    STATE(239), 1,
      sym_primitive_type,
    STATE(242), 1,
      sym__identifier,
    STATE(244), 1,
      sym__primitive_type,
    ACTIONS(19), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(213), 2,
      sym__type,
      sym__type_identifier,
    STATE(105), 7,
      sym__definition_statement,
      sym_variable_definition,
      sym_assignation_statement,
      sym_array_definition,
      sym__statement,
      sym_return_statement,
      sym_if_statement,
    ACTIONS(21), 17,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
  [2180] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(201), 1,
      anon_sym_LBRACE,
    ACTIONS(203), 1,
      anon_sym_return,
    ACTIONS(205), 1,
      sym_dollar,
    ACTIONS(207), 1,
      anon_sym_if,
    STATE(121), 1,
      sym_block,
    STATE(195), 1,
      sym_endian_indicator,
    STATE(236), 1,
      sym__identifier,
    STATE(239), 1,
      sym_primitive_type,
    STATE(244), 1,
      sym__primitive_type,
    ACTIONS(19), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(216), 2,
      sym__type,
      sym__type_identifier,
    STATE(123), 7,
      sym__definition_statement,
      sym_variable_definition,
      sym_assignation_statement,
      sym_array_definition,
      sym__statement,
      sym_return_statement,
      sym_if_statement,
    ACTIONS(21), 17,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
  [2250] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    ACTIONS(217), 1,
      anon_sym_return,
    ACTIONS(220), 1,
      sym_identifier,
    ACTIONS(223), 1,
      sym_dollar,
    ACTIONS(226), 1,
      anon_sym_if,
    STATE(195), 1,
      sym_endian_indicator,
    STATE(239), 1,
      sym_primitive_type,
    STATE(241), 1,
      sym__identifier,
    STATE(244), 1,
      sym__primitive_type,
    ACTIONS(211), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(210), 2,
      sym__type,
      sym__type_identifier,
    STATE(33), 8,
      sym__definition_statement,
      sym_variable_definition,
      sym_assignation_statement,
      sym_array_definition,
      sym__statement,
      sym_return_statement,
      sym_if_statement,
      aux_sym_block_repeat1,
    ACTIONS(214), 17,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
  [2318] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    ACTIONS(231), 1,
      anon_sym_return,
    ACTIONS(233), 1,
      sym_dollar,
    ACTIONS(235), 1,
      anon_sym_if,
    STATE(195), 1,
      sym_endian_indicator,
    STATE(239), 1,
      sym_primitive_type,
    STATE(241), 1,
      sym__identifier,
    STATE(244), 1,
      sym__primitive_type,
    ACTIONS(19), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(210), 2,
      sym__type,
      sym__type_identifier,
    STATE(38), 8,
      sym__definition_statement,
      sym_variable_definition,
      sym_assignation_statement,
      sym_array_definition,
      sym__statement,
      sym_return_statement,
      sym_if_statement,
      aux_sym_block_repeat1,
    ACTIONS(21), 17,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
  [2386] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(201), 1,
      anon_sym_LBRACE,
    ACTIONS(203), 1,
      anon_sym_return,
    ACTIONS(205), 1,
      sym_dollar,
    ACTIONS(207), 1,
      anon_sym_if,
    STATE(130), 1,
      sym_block,
    STATE(195), 1,
      sym_endian_indicator,
    STATE(236), 1,
      sym__identifier,
    STATE(239), 1,
      sym_primitive_type,
    STATE(244), 1,
      sym__primitive_type,
    ACTIONS(19), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(216), 2,
      sym__type,
      sym__type_identifier,
    STATE(110), 7,
      sym__definition_statement,
      sym_variable_definition,
      sym_assignation_statement,
      sym_array_definition,
      sym__statement,
      sym_return_statement,
      sym_if_statement,
    ACTIONS(21), 17,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
  [2456] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_return,
    ACTIONS(233), 1,
      sym_dollar,
    ACTIONS(235), 1,
      anon_sym_if,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    STATE(195), 1,
      sym_endian_indicator,
    STATE(239), 1,
      sym_primitive_type,
    STATE(241), 1,
      sym__identifier,
    STATE(244), 1,
      sym__primitive_type,
    ACTIONS(19), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(210), 2,
      sym__type,
      sym__type_identifier,
    STATE(33), 8,
      sym__definition_statement,
      sym_variable_definition,
      sym_assignation_statement,
      sym_array_definition,
      sym__statement,
      sym_return_statement,
      sym_if_statement,
      aux_sym_block_repeat1,
    ACTIONS(21), 17,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
  [2524] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_return,
    ACTIONS(233), 1,
      sym_dollar,
    ACTIONS(235), 1,
      anon_sym_if,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    STATE(195), 1,
      sym_endian_indicator,
    STATE(239), 1,
      sym_primitive_type,
    STATE(241), 1,
      sym__identifier,
    STATE(244), 1,
      sym__primitive_type,
    ACTIONS(19), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(210), 2,
      sym__type,
      sym__type_identifier,
    STATE(36), 8,
      sym__definition_statement,
      sym_variable_definition,
      sym_assignation_statement,
      sym_array_definition,
      sym__statement,
      sym_return_statement,
      sym_if_statement,
      aux_sym_block_repeat1,
    ACTIONS(21), 17,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
  [2592] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_return,
    ACTIONS(233), 1,
      sym_dollar,
    ACTIONS(235), 1,
      anon_sym_if,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
    STATE(195), 1,
      sym_endian_indicator,
    STATE(239), 1,
      sym_primitive_type,
    STATE(241), 1,
      sym__identifier,
    STATE(244), 1,
      sym__primitive_type,
    ACTIONS(19), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(210), 2,
      sym__type,
      sym__type_identifier,
    STATE(33), 8,
      sym__definition_statement,
      sym_variable_definition,
      sym_assignation_statement,
      sym_array_definition,
      sym__statement,
      sym_return_statement,
      sym_if_statement,
      aux_sym_block_repeat1,
    ACTIONS(21), 17,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
  [2660] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LBRACE,
    ACTIONS(195), 1,
      anon_sym_return,
    ACTIONS(197), 1,
      sym_dollar,
    ACTIONS(199), 1,
      anon_sym_if,
    STATE(107), 1,
      sym_block,
    STATE(195), 1,
      sym_endian_indicator,
    STATE(239), 1,
      sym_primitive_type,
    STATE(242), 1,
      sym__identifier,
    STATE(244), 1,
      sym__primitive_type,
    ACTIONS(19), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(213), 2,
      sym__type,
      sym__type_identifier,
    STATE(103), 7,
      sym__definition_statement,
      sym_variable_definition,
      sym_assignation_statement,
      sym_array_definition,
      sym__statement,
      sym_return_statement,
      sym_if_statement,
    ACTIONS(21), 17,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
  [2730] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_return,
    ACTIONS(233), 1,
      sym_dollar,
    ACTIONS(235), 1,
      anon_sym_if,
    ACTIONS(243), 1,
      anon_sym_LBRACE,
    STATE(140), 1,
      sym_block,
    STATE(195), 1,
      sym_endian_indicator,
    STATE(239), 1,
      sym_primitive_type,
    STATE(241), 1,
      sym__identifier,
    STATE(244), 1,
      sym__primitive_type,
    ACTIONS(19), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(210), 2,
      sym__type,
      sym__type_identifier,
    STATE(139), 7,
      sym__definition_statement,
      sym_variable_definition,
      sym_assignation_statement,
      sym_array_definition,
      sym__statement,
      sym_return_statement,
      sym_if_statement,
    ACTIONS(21), 17,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
  [2800] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(245), 1,
      anon_sym_LBRACE,
    ACTIONS(247), 1,
      anon_sym_return,
    ACTIONS(249), 1,
      sym_dollar,
    ACTIONS(251), 1,
      anon_sym_if,
    STATE(56), 1,
      sym_block,
    STATE(195), 1,
      sym_endian_indicator,
    STATE(239), 1,
      sym_primitive_type,
    STATE(244), 1,
      sym__primitive_type,
    STATE(245), 1,
      sym__identifier,
    ACTIONS(19), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(215), 2,
      sym__type,
      sym__type_identifier,
    STATE(57), 7,
      sym__definition_statement,
      sym_variable_definition,
      sym_assignation_statement,
      sym_array_definition,
      sym__statement,
      sym_return_statement,
      sym_if_statement,
    ACTIONS(21), 17,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
  [2870] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_return,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      sym_dollar,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    STATE(87), 1,
      sym_block,
    STATE(195), 1,
      sym_endian_indicator,
    STATE(238), 1,
      sym__identifier,
    STATE(239), 1,
      sym_primitive_type,
    STATE(244), 1,
      sym__primitive_type,
    ACTIONS(19), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(214), 2,
      sym__type,
      sym__type_identifier,
    STATE(92), 7,
      sym__definition_statement,
      sym_variable_definition,
      sym_assignation_statement,
      sym_array_definition,
      sym__statement,
      sym_return_statement,
      sym_if_statement,
    ACTIONS(21), 17,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
  [2940] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_return,
    ACTIONS(233), 1,
      sym_dollar,
    ACTIONS(235), 1,
      anon_sym_if,
    ACTIONS(243), 1,
      anon_sym_LBRACE,
    STATE(142), 1,
      sym_block,
    STATE(195), 1,
      sym_endian_indicator,
    STATE(239), 1,
      sym_primitive_type,
    STATE(241), 1,
      sym__identifier,
    STATE(244), 1,
      sym__primitive_type,
    ACTIONS(19), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(210), 2,
      sym__type,
      sym__type_identifier,
    STATE(141), 7,
      sym__definition_statement,
      sym_variable_definition,
      sym_assignation_statement,
      sym_array_definition,
      sym__statement,
      sym_return_statement,
      sym_if_statement,
    ACTIONS(21), 17,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
  [3010] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_return,
    ACTIONS(233), 1,
      sym_dollar,
    ACTIONS(235), 1,
      anon_sym_if,
    ACTIONS(255), 1,
      anon_sym_RBRACE,
    STATE(195), 1,
      sym_endian_indicator,
    STATE(239), 1,
      sym_primitive_type,
    STATE(241), 1,
      sym__identifier,
    STATE(244), 1,
      sym__primitive_type,
    ACTIONS(19), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(210), 2,
      sym__type,
      sym__type_identifier,
    STATE(33), 8,
      sym__definition_statement,
      sym_variable_definition,
      sym_assignation_statement,
      sym_array_definition,
      sym__statement,
      sym_return_statement,
      sym_if_statement,
      aux_sym_block_repeat1,
    ACTIONS(21), 17,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
  [3078] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_return,
    ACTIONS(233), 1,
      sym_dollar,
    ACTIONS(235), 1,
      anon_sym_if,
    ACTIONS(257), 1,
      anon_sym_RBRACE,
    STATE(195), 1,
      sym_endian_indicator,
    STATE(239), 1,
      sym_primitive_type,
    STATE(241), 1,
      sym__identifier,
    STATE(244), 1,
      sym__primitive_type,
    ACTIONS(19), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(210), 2,
      sym__type,
      sym__type_identifier,
    STATE(33), 8,
      sym__definition_statement,
      sym_variable_definition,
      sym_assignation_statement,
      sym_array_definition,
      sym__statement,
      sym_return_statement,
      sym_if_statement,
      aux_sym_block_repeat1,
    ACTIONS(21), 17,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
  [3146] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_return,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      sym_dollar,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    STATE(79), 1,
      sym_block,
    STATE(195), 1,
      sym_endian_indicator,
    STATE(238), 1,
      sym__identifier,
    STATE(239), 1,
      sym_primitive_type,
    STATE(244), 1,
      sym__primitive_type,
    ACTIONS(19), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(214), 2,
      sym__type,
      sym__type_identifier,
    STATE(82), 7,
      sym__definition_statement,
      sym_variable_definition,
      sym_assignation_statement,
      sym_array_definition,
      sym__statement,
      sym_return_statement,
      sym_if_statement,
    ACTIONS(21), 17,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
  [3216] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(245), 1,
      anon_sym_LBRACE,
    ACTIONS(247), 1,
      anon_sym_return,
    ACTIONS(249), 1,
      sym_dollar,
    ACTIONS(251), 1,
      anon_sym_if,
    STATE(69), 1,
      sym_block,
    STATE(195), 1,
      sym_endian_indicator,
    STATE(239), 1,
      sym_primitive_type,
    STATE(244), 1,
      sym__primitive_type,
    STATE(245), 1,
      sym__identifier,
    ACTIONS(19), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(215), 2,
      sym__type,
      sym__type_identifier,
    STATE(68), 7,
      sym__definition_statement,
      sym_variable_definition,
      sym_assignation_statement,
      sym_array_definition,
      sym__statement,
      sym_return_statement,
      sym_if_statement,
    ACTIONS(21), 17,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
  [3286] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_return,
    ACTIONS(233), 1,
      sym_dollar,
    ACTIONS(235), 1,
      anon_sym_if,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
    STATE(195), 1,
      sym_endian_indicator,
    STATE(239), 1,
      sym_primitive_type,
    STATE(241), 1,
      sym__identifier,
    STATE(244), 1,
      sym__primitive_type,
    ACTIONS(19), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(210), 2,
      sym__type,
      sym__type_identifier,
    STATE(45), 8,
      sym__definition_statement,
      sym_variable_definition,
      sym_assignation_statement,
      sym_array_definition,
      sym__statement,
      sym_return_statement,
      sym_if_statement,
      aux_sym_block_repeat1,
    ACTIONS(21), 17,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
  [3354] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_return,
    ACTIONS(233), 1,
      sym_dollar,
    ACTIONS(235), 1,
      anon_sym_if,
    ACTIONS(261), 1,
      anon_sym_RBRACE,
    STATE(195), 1,
      sym_endian_indicator,
    STATE(239), 1,
      sym_primitive_type,
    STATE(241), 1,
      sym__identifier,
    STATE(244), 1,
      sym__primitive_type,
    ACTIONS(19), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(210), 2,
      sym__type,
      sym__type_identifier,
    STATE(51), 8,
      sym__definition_statement,
      sym_variable_definition,
      sym_assignation_statement,
      sym_array_definition,
      sym__statement,
      sym_return_statement,
      sym_if_statement,
      aux_sym_block_repeat1,
    ACTIONS(21), 17,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
  [3422] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_return,
    ACTIONS(187), 1,
      sym_dollar,
    ACTIONS(189), 1,
      anon_sym_if,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    STATE(119), 1,
      sym_block,
    STATE(195), 1,
      sym_endian_indicator,
    STATE(239), 1,
      sym_primitive_type,
    STATE(243), 1,
      sym__identifier,
    STATE(244), 1,
      sym__primitive_type,
    ACTIONS(19), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(207), 2,
      sym__type,
      sym__type_identifier,
    STATE(120), 7,
      sym__definition_statement,
      sym_variable_definition,
      sym_assignation_statement,
      sym_array_definition,
      sym__statement,
      sym_return_statement,
      sym_if_statement,
    ACTIONS(21), 17,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
  [3492] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_return,
    ACTIONS(233), 1,
      sym_dollar,
    ACTIONS(235), 1,
      anon_sym_if,
    ACTIONS(265), 1,
      anon_sym_RBRACE,
    STATE(195), 1,
      sym_endian_indicator,
    STATE(239), 1,
      sym_primitive_type,
    STATE(241), 1,
      sym__identifier,
    STATE(244), 1,
      sym__primitive_type,
    ACTIONS(19), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(210), 2,
      sym__type,
      sym__type_identifier,
    STATE(33), 8,
      sym__definition_statement,
      sym_variable_definition,
      sym_assignation_statement,
      sym_array_definition,
      sym__statement,
      sym_return_statement,
      sym_if_statement,
      aux_sym_block_repeat1,
    ACTIONS(21), 17,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
  [3560] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_return,
    ACTIONS(187), 1,
      sym_dollar,
    ACTIONS(189), 1,
      anon_sym_if,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    STATE(117), 1,
      sym_block,
    STATE(195), 1,
      sym_endian_indicator,
    STATE(239), 1,
      sym_primitive_type,
    STATE(243), 1,
      sym__identifier,
    STATE(244), 1,
      sym__primitive_type,
    ACTIONS(19), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(207), 2,
      sym__type,
      sym__type_identifier,
    STATE(118), 7,
      sym__definition_statement,
      sym_variable_definition,
      sym_assignation_statement,
      sym_array_definition,
      sym__statement,
      sym_return_statement,
      sym_if_statement,
    ACTIONS(21), 17,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
  [3630] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_return,
    ACTIONS(233), 1,
      sym_dollar,
    ACTIONS(235), 1,
      anon_sym_if,
    ACTIONS(267), 1,
      anon_sym_RBRACE,
    STATE(195), 1,
      sym_endian_indicator,
    STATE(239), 1,
      sym_primitive_type,
    STATE(241), 1,
      sym__identifier,
    STATE(244), 1,
      sym__primitive_type,
    ACTIONS(19), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(210), 2,
      sym__type,
      sym__type_identifier,
    STATE(33), 8,
      sym__definition_statement,
      sym_variable_definition,
      sym_assignation_statement,
      sym_array_definition,
      sym__statement,
      sym_return_statement,
      sym_if_statement,
      aux_sym_block_repeat1,
    ACTIONS(21), 17,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
  [3698] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_return,
    ACTIONS(233), 1,
      sym_dollar,
    ACTIONS(235), 1,
      anon_sym_if,
    ACTIONS(269), 1,
      anon_sym_RBRACE,
    STATE(195), 1,
      sym_endian_indicator,
    STATE(239), 1,
      sym_primitive_type,
    STATE(241), 1,
      sym__identifier,
    STATE(244), 1,
      sym__primitive_type,
    ACTIONS(19), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(210), 2,
      sym__type,
      sym__type_identifier,
    STATE(53), 8,
      sym__definition_statement,
      sym_variable_definition,
      sym_assignation_statement,
      sym_array_definition,
      sym__statement,
      sym_return_statement,
      sym_if_statement,
      aux_sym_block_repeat1,
    ACTIONS(21), 17,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
  [3766] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_return,
    ACTIONS(233), 1,
      sym_dollar,
    ACTIONS(235), 1,
      anon_sym_if,
    ACTIONS(271), 1,
      anon_sym_RBRACE,
    STATE(195), 1,
      sym_endian_indicator,
    STATE(239), 1,
      sym_primitive_type,
    STATE(241), 1,
      sym__identifier,
    STATE(244), 1,
      sym__primitive_type,
    ACTIONS(19), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(210), 2,
      sym__type,
      sym__type_identifier,
    STATE(44), 8,
      sym__definition_statement,
      sym_variable_definition,
      sym_assignation_statement,
      sym_array_definition,
      sym__statement,
      sym_return_statement,
      sym_if_statement,
      aux_sym_block_repeat1,
    ACTIONS(21), 17,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
  [3834] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_else,
    ACTIONS(273), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(275), 25,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [3875] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_else,
    ACTIONS(273), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(275), 25,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [3916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(283), 26,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
      anon_sym_else,
  [3955] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(287), 26,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
      anon_sym_else,
  [3994] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(283), 26,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
      anon_sym_else,
  [4033] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(283), 26,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
      anon_sym_else,
  [4072] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(283), 26,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
      anon_sym_else,
  [4111] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(291), 26,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
      anon_sym_else,
  [4150] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(295), 26,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
      anon_sym_else,
  [4189] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(299), 26,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
      anon_sym_else,
  [4228] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(303), 26,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
      anon_sym_else,
  [4267] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(307), 26,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
      anon_sym_else,
  [4306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(275), 26,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
      anon_sym_else,
  [4345] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(275), 26,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
      anon_sym_else,
  [4384] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(311), 26,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
      anon_sym_else,
  [4423] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(315), 25,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [4461] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(287), 25,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [4499] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(319), 25,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [4537] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(323), 25,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [4575] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(299), 25,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [4613] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(303), 25,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [4651] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(327), 25,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [4689] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(331), 25,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [4727] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(283), 25,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [4765] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(335), 25,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [4803] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(339), 25,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [4841] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(283), 25,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [4879] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(343), 25,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [4917] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(347), 25,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [4955] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(351), 25,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [4993] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(295), 25,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [5031] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(283), 25,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [5069] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(307), 25,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [5107] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(355), 25,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [5145] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(311), 25,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [5183] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(359), 25,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [5221] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(283), 25,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [5259] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(291), 25,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [5297] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(363), 25,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [5335] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(283), 24,
      anon_sym_padding,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
      anon_sym_else,
  [5369] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(283), 24,
      anon_sym_padding,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
      anon_sym_else,
  [5403] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(283), 24,
      anon_sym_padding,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
      anon_sym_else,
  [5437] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(283), 24,
      anon_sym_padding,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
      anon_sym_else,
  [5471] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(295), 24,
      anon_sym_padding,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
      anon_sym_else,
  [5505] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(299), 24,
      anon_sym_padding,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
      anon_sym_else,
  [5539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(303), 24,
      anon_sym_padding,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
      anon_sym_else,
  [5573] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(307), 24,
      anon_sym_padding,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
      anon_sym_else,
  [5607] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(275), 24,
      anon_sym_padding,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
      anon_sym_else,
  [5641] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_else,
    ACTIONS(273), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(275), 23,
      anon_sym_padding,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [5677] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_else,
    ACTIONS(273), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(275), 23,
      anon_sym_padding,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [5713] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(291), 24,
      anon_sym_padding,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
      anon_sym_else,
  [5747] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(275), 24,
      anon_sym_padding,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
      anon_sym_else,
  [5781] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(311), 24,
      anon_sym_padding,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
      anon_sym_else,
  [5815] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(287), 24,
      anon_sym_padding,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
      anon_sym_else,
  [5849] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(275), 23,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
      anon_sym_else,
  [5882] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(307), 23,
      anon_sym_padding,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [5915] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(311), 23,
      anon_sym_padding,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [5948] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(283), 23,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
      anon_sym_else,
  [5981] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(303), 23,
      anon_sym_padding,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [6014] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(299), 23,
      anon_sym_padding,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [6047] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(295), 23,
      anon_sym_padding,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [6080] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(283), 23,
      anon_sym_padding,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [6113] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(283), 23,
      anon_sym_padding,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [6146] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(283), 23,
      anon_sym_padding,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [6179] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(283), 23,
      anon_sym_padding,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [6212] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_else,
    ACTIONS(273), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(275), 22,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [6247] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(371), 23,
      anon_sym_padding,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [6280] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_else,
    ACTIONS(273), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(275), 22,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [6315] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(291), 23,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
      anon_sym_else,
  [6348] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(287), 23,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
      anon_sym_else,
  [6381] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      sym_identifier,
    STATE(195), 1,
      sym_endian_indicator,
    STATE(239), 1,
      sym_primitive_type,
    STATE(244), 1,
      sym__primitive_type,
    ACTIONS(19), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(264), 2,
      sym__type,
      sym__type_identifier,
    ACTIONS(21), 17,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
  [6424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(291), 23,
      anon_sym_padding,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [6457] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(287), 23,
      anon_sym_padding,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [6490] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(311), 23,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
      anon_sym_else,
  [6523] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(275), 23,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
      anon_sym_else,
  [6556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(307), 23,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
      anon_sym_else,
  [6589] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(303), 23,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
      anon_sym_else,
  [6622] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(299), 23,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
      anon_sym_else,
  [6655] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(295), 23,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
      anon_sym_else,
  [6688] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(283), 23,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
      anon_sym_else,
  [6721] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(283), 23,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
      anon_sym_else,
  [6754] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(283), 23,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
      anon_sym_else,
  [6787] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(291), 22,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [6819] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(283), 22,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [6851] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(283), 22,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [6883] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(283), 22,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [6915] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(283), 22,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [6947] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(295), 22,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [6979] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(299), 22,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [7011] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(303), 22,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [7043] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(307), 22,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [7075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(311), 22,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [7107] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(287), 22,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [7139] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 2,
      anon_sym_LBRACE,
      sym_dollar,
    ACTIONS(381), 22,
      anon_sym_be,
      anon_sym_le,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
      anon_sym_return,
      sym_identifier,
      anon_sym_if,
  [7171] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(385), 1,
      sym_identifier,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    STATE(220), 1,
      sym__offset,
    ACTIONS(389), 2,
      sym_this,
      sym_parent,
    ACTIONS(391), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(387), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(151), 10,
      sym__expression,
      sym__identifier,
      sym_field_expression,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [7215] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_SLASH,
    ACTIONS(74), 1,
      anon_sym_AMP,
    ACTIONS(78), 1,
      anon_sym_CARET,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(86), 1,
      anon_sym_CARET_CARET,
    ACTIONS(96), 1,
      anon_sym_AMP_AMP,
    ACTIONS(98), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(156), 1,
      anon_sym_QMARK,
    ACTIONS(64), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(66), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(68), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(72), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(397), 2,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(76), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [7269] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(385), 1,
      sym_identifier,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(389), 2,
      sym_this,
      sym_parent,
    ACTIONS(391), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(399), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(27), 10,
      sym__expression,
      sym__identifier,
      sym_field_expression,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [7310] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(385), 1,
      sym_identifier,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(389), 2,
      sym_this,
      sym_parent,
    ACTIONS(391), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(401), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(8), 10,
      sym__expression,
      sym__identifier,
      sym_field_expression,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [7351] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_SLASH,
    ACTIONS(74), 1,
      anon_sym_AMP,
    ACTIONS(78), 1,
      anon_sym_CARET,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(86), 1,
      anon_sym_CARET_CARET,
    ACTIONS(96), 1,
      anon_sym_AMP_AMP,
    ACTIONS(98), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(156), 1,
      anon_sym_QMARK,
    ACTIONS(403), 1,
      anon_sym_SEMI,
    ACTIONS(64), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(66), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(68), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(72), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(76), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [7404] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(385), 1,
      sym_identifier,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(389), 2,
      sym_this,
      sym_parent,
    ACTIONS(391), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(405), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(156), 10,
      sym__expression,
      sym__identifier,
      sym_field_expression,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [7445] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_SLASH,
    ACTIONS(74), 1,
      anon_sym_AMP,
    ACTIONS(78), 1,
      anon_sym_CARET,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(86), 1,
      anon_sym_CARET_CARET,
    ACTIONS(96), 1,
      anon_sym_AMP_AMP,
    ACTIONS(98), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(156), 1,
      anon_sym_QMARK,
    ACTIONS(407), 1,
      anon_sym_SEMI,
    ACTIONS(64), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(66), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(68), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(72), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(76), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [7498] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_SLASH,
    ACTIONS(74), 1,
      anon_sym_AMP,
    ACTIONS(78), 1,
      anon_sym_CARET,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(86), 1,
      anon_sym_CARET_CARET,
    ACTIONS(96), 1,
      anon_sym_AMP_AMP,
    ACTIONS(98), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(156), 1,
      anon_sym_QMARK,
    ACTIONS(409), 1,
      anon_sym_SEMI,
    ACTIONS(64), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(66), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(68), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(72), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(76), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [7551] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(385), 1,
      sym_identifier,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(389), 2,
      sym_this,
      sym_parent,
    ACTIONS(391), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(411), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(157), 10,
      sym__expression,
      sym__identifier,
      sym_field_expression,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [7592] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_SLASH,
    ACTIONS(74), 1,
      anon_sym_AMP,
    ACTIONS(78), 1,
      anon_sym_CARET,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(86), 1,
      anon_sym_CARET_CARET,
    ACTIONS(96), 1,
      anon_sym_AMP_AMP,
    ACTIONS(98), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(156), 1,
      anon_sym_QMARK,
    ACTIONS(413), 1,
      anon_sym_COLON,
    ACTIONS(64), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(66), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(68), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(72), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(76), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [7645] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_SLASH,
    ACTIONS(74), 1,
      anon_sym_AMP,
    ACTIONS(78), 1,
      anon_sym_CARET,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(86), 1,
      anon_sym_CARET_CARET,
    ACTIONS(96), 1,
      anon_sym_AMP_AMP,
    ACTIONS(98), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(156), 1,
      anon_sym_QMARK,
    ACTIONS(415), 1,
      anon_sym_SEMI,
    ACTIONS(64), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(66), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(68), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(72), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(76), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [7698] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(385), 1,
      sym_identifier,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(389), 2,
      sym_this,
      sym_parent,
    ACTIONS(391), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(417), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(175), 10,
      sym__expression,
      sym__identifier,
      sym_field_expression,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [7739] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_SLASH,
    ACTIONS(74), 1,
      anon_sym_AMP,
    ACTIONS(78), 1,
      anon_sym_CARET,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(86), 1,
      anon_sym_CARET_CARET,
    ACTIONS(96), 1,
      anon_sym_AMP_AMP,
    ACTIONS(98), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(156), 1,
      anon_sym_QMARK,
    ACTIONS(419), 1,
      anon_sym_SEMI,
    ACTIONS(64), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(66), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(68), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(72), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(76), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [7792] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_SLASH,
    ACTIONS(74), 1,
      anon_sym_AMP,
    ACTIONS(78), 1,
      anon_sym_CARET,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(86), 1,
      anon_sym_CARET_CARET,
    ACTIONS(96), 1,
      anon_sym_AMP_AMP,
    ACTIONS(98), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(156), 1,
      anon_sym_QMARK,
    ACTIONS(421), 1,
      anon_sym_SEMI,
    ACTIONS(64), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(66), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(68), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(72), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(76), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [7845] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(385), 1,
      sym_identifier,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(389), 2,
      sym_this,
      sym_parent,
    ACTIONS(391), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(423), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(19), 10,
      sym__expression,
      sym__identifier,
      sym_field_expression,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [7886] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_SLASH,
    ACTIONS(74), 1,
      anon_sym_AMP,
    ACTIONS(78), 1,
      anon_sym_CARET,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(86), 1,
      anon_sym_CARET_CARET,
    ACTIONS(96), 1,
      anon_sym_AMP_AMP,
    ACTIONS(98), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(156), 1,
      anon_sym_QMARK,
    ACTIONS(425), 1,
      anon_sym_SEMI,
    ACTIONS(64), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(66), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(68), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(72), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(76), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [7939] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_SLASH,
    ACTIONS(74), 1,
      anon_sym_AMP,
    ACTIONS(78), 1,
      anon_sym_CARET,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(86), 1,
      anon_sym_CARET_CARET,
    ACTIONS(96), 1,
      anon_sym_AMP_AMP,
    ACTIONS(98), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(156), 1,
      anon_sym_QMARK,
    ACTIONS(427), 1,
      anon_sym_SEMI,
    ACTIONS(64), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(66), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(68), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(72), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(76), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [7992] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_SLASH,
    ACTIONS(74), 1,
      anon_sym_AMP,
    ACTIONS(78), 1,
      anon_sym_CARET,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(86), 1,
      anon_sym_CARET_CARET,
    ACTIONS(96), 1,
      anon_sym_AMP_AMP,
    ACTIONS(98), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(156), 1,
      anon_sym_QMARK,
    ACTIONS(429), 1,
      anon_sym_SEMI,
    ACTIONS(64), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(66), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(68), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(72), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(76), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [8045] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_SLASH,
    ACTIONS(74), 1,
      anon_sym_AMP,
    ACTIONS(78), 1,
      anon_sym_CARET,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(86), 1,
      anon_sym_CARET_CARET,
    ACTIONS(96), 1,
      anon_sym_AMP_AMP,
    ACTIONS(98), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(156), 1,
      anon_sym_QMARK,
    ACTIONS(431), 1,
      anon_sym_SEMI,
    ACTIONS(64), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(66), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(68), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(72), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(76), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [8098] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_SLASH,
    ACTIONS(74), 1,
      anon_sym_AMP,
    ACTIONS(78), 1,
      anon_sym_CARET,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(86), 1,
      anon_sym_CARET_CARET,
    ACTIONS(96), 1,
      anon_sym_AMP_AMP,
    ACTIONS(98), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(156), 1,
      anon_sym_QMARK,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(64), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(66), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(68), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(72), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(76), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [8151] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(385), 1,
      sym_identifier,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(389), 2,
      sym_this,
      sym_parent,
    ACTIONS(391), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(435), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(154), 10,
      sym__expression,
      sym__identifier,
      sym_field_expression,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [8192] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(385), 1,
      sym_identifier,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(389), 2,
      sym_this,
      sym_parent,
    ACTIONS(391), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(437), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(176), 10,
      sym__expression,
      sym__identifier,
      sym_field_expression,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [8233] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(385), 1,
      sym_identifier,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(389), 2,
      sym_this,
      sym_parent,
    ACTIONS(391), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(439), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(167), 10,
      sym__expression,
      sym__identifier,
      sym_field_expression,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [8274] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(385), 1,
      sym_identifier,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(389), 2,
      sym_this,
      sym_parent,
    ACTIONS(391), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(441), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(24), 10,
      sym__expression,
      sym__identifier,
      sym_field_expression,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [8315] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(385), 1,
      sym_identifier,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(389), 2,
      sym_this,
      sym_parent,
    ACTIONS(391), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(443), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(168), 10,
      sym__expression,
      sym__identifier,
      sym_field_expression,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [8356] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_SLASH,
    ACTIONS(74), 1,
      anon_sym_AMP,
    ACTIONS(78), 1,
      anon_sym_CARET,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(86), 1,
      anon_sym_CARET_CARET,
    ACTIONS(96), 1,
      anon_sym_AMP_AMP,
    ACTIONS(98), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(156), 1,
      anon_sym_QMARK,
    ACTIONS(445), 1,
      anon_sym_SEMI,
    ACTIONS(64), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(66), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(68), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(72), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(76), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [8409] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_SLASH,
    ACTIONS(74), 1,
      anon_sym_AMP,
    ACTIONS(78), 1,
      anon_sym_CARET,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(86), 1,
      anon_sym_CARET_CARET,
    ACTIONS(96), 1,
      anon_sym_AMP_AMP,
    ACTIONS(98), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(156), 1,
      anon_sym_QMARK,
    ACTIONS(447), 1,
      anon_sym_RPAREN,
    ACTIONS(64), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(66), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(68), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(72), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(76), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [8462] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_SLASH,
    ACTIONS(74), 1,
      anon_sym_AMP,
    ACTIONS(78), 1,
      anon_sym_CARET,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(86), 1,
      anon_sym_CARET_CARET,
    ACTIONS(96), 1,
      anon_sym_AMP_AMP,
    ACTIONS(98), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(156), 1,
      anon_sym_QMARK,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
    ACTIONS(64), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(66), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(68), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(72), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(76), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [8515] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(385), 1,
      sym_identifier,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(389), 2,
      sym_this,
      sym_parent,
    ACTIONS(391), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(451), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(159), 10,
      sym__expression,
      sym__identifier,
      sym_field_expression,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [8556] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(385), 1,
      sym_identifier,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(389), 2,
      sym_this,
      sym_parent,
    ACTIONS(391), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(453), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(16), 10,
      sym__expression,
      sym__identifier,
      sym_field_expression,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [8597] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(385), 1,
      sym_identifier,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(389), 2,
      sym_this,
      sym_parent,
    ACTIONS(391), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(455), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(23), 10,
      sym__expression,
      sym__identifier,
      sym_field_expression,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [8638] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(385), 1,
      sym_identifier,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(389), 2,
      sym_this,
      sym_parent,
    ACTIONS(391), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(457), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(17), 10,
      sym__expression,
      sym__identifier,
      sym_field_expression,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [8679] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(385), 1,
      sym_identifier,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(389), 2,
      sym_this,
      sym_parent,
    ACTIONS(391), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(459), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(10), 10,
      sym__expression,
      sym__identifier,
      sym_field_expression,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [8720] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(385), 1,
      sym_identifier,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(389), 2,
      sym_this,
      sym_parent,
    ACTIONS(391), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(461), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(11), 10,
      sym__expression,
      sym__identifier,
      sym_field_expression,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [8761] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(385), 1,
      sym_identifier,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(389), 2,
      sym_this,
      sym_parent,
    ACTIONS(391), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(463), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(12), 10,
      sym__expression,
      sym__identifier,
      sym_field_expression,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [8802] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(385), 1,
      sym_identifier,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(389), 2,
      sym_this,
      sym_parent,
    ACTIONS(391), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(465), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(14), 10,
      sym__expression,
      sym__identifier,
      sym_field_expression,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [8843] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(385), 1,
      sym_identifier,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(389), 2,
      sym_this,
      sym_parent,
    ACTIONS(391), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(467), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(169), 10,
      sym__expression,
      sym__identifier,
      sym_field_expression,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [8884] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(385), 1,
      sym_identifier,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(389), 2,
      sym_this,
      sym_parent,
    ACTIONS(391), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(469), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(166), 10,
      sym__expression,
      sym__identifier,
      sym_field_expression,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [8925] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(385), 1,
      sym_identifier,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(389), 2,
      sym_this,
      sym_parent,
    ACTIONS(391), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(471), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(15), 10,
      sym__expression,
      sym__identifier,
      sym_field_expression,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [8966] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(385), 1,
      sym_identifier,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(389), 2,
      sym_this,
      sym_parent,
    ACTIONS(391), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(473), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(22), 10,
      sym__expression,
      sym__identifier,
      sym_field_expression,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [9007] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(385), 1,
      sym_identifier,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(389), 2,
      sym_this,
      sym_parent,
    ACTIONS(391), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(475), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(177), 10,
      sym__expression,
      sym__identifier,
      sym_field_expression,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [9048] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(385), 1,
      sym_identifier,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(389), 2,
      sym_this,
      sym_parent,
    ACTIONS(391), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(477), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(165), 10,
      sym__expression,
      sym__identifier,
      sym_field_expression,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [9089] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(385), 1,
      sym_identifier,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(389), 2,
      sym_this,
      sym_parent,
    ACTIONS(391), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(479), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(160), 10,
      sym__expression,
      sym__identifier,
      sym_field_expression,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [9130] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(385), 1,
      sym_identifier,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(389), 2,
      sym_this,
      sym_parent,
    ACTIONS(391), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(481), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(163), 10,
      sym__expression,
      sym__identifier,
      sym_field_expression,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [9171] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(385), 1,
      sym_identifier,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(389), 2,
      sym_this,
      sym_parent,
    ACTIONS(391), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(483), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(162), 10,
      sym__expression,
      sym__identifier,
      sym_field_expression,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [9212] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_char,
    STATE(233), 1,
      sym_primitive_type,
    ACTIONS(485), 16,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
  [9240] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_char,
    ACTIONS(487), 16,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
  [9265] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_endian,
    ACTIONS(493), 1,
      anon_sym_MIME,
    ACTIONS(495), 1,
      anon_sym_base_address,
    ACTIONS(497), 1,
      anon_sym_eval_depth,
    ACTIONS(499), 1,
      anon_sym_array_limit,
    ACTIONS(501), 1,
      anon_sym_pattern_limit,
    ACTIONS(503), 1,
      sym_pragma_once,
    STATE(80), 6,
      sym_pragma_endian,
      sym_pragma_mime,
      sym_pragma_base_address,
      sym_pragma_eval_depth,
      sym_pragma_array_limit,
      sym_pragma_pattern_limit,
  [9298] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(282), 1,
      sym__variable_attribute,
    ACTIONS(507), 4,
      anon_sym_hidden,
      anon_sym_inline,
      anon_sym_no_unique_address,
      anon_sym_static,
    ACTIONS(505), 6,
      anon_sym_color,
      anon_sym_name,
      anon_sym_comment,
      anon_sym_format,
      anon_sym_transform,
      anon_sym_pointer_base,
  [9319] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_SEMI,
    ACTIONS(511), 1,
      anon_sym_AT,
    ACTIONS(513), 1,
      anon_sym_LBRACK,
    ACTIONS(515), 1,
      anon_sym_LBRACK_LBRACK,
    STATE(88), 1,
      sym__declaration_finish,
    STATE(225), 1,
      sym__array_size_wrapper,
    STATE(283), 1,
      sym_attribute,
  [9344] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_LBRACK,
    ACTIONS(515), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(517), 1,
      anon_sym_SEMI,
    STATE(102), 1,
      sym__declaration_finish,
    STATE(227), 1,
      sym__array_size_wrapper,
    STATE(269), 1,
      sym_attribute,
  [9366] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_RBRACK,
    STATE(276), 2,
      sym__array_size,
      sym__identifier,
    ACTIONS(521), 3,
      sym_identifier,
      sym_dollar,
      sym_number_literal,
  [9382] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_LBRACK,
    ACTIONS(515), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(523), 1,
      anon_sym_SEMI,
    STATE(67), 1,
      sym__declaration_finish,
    STATE(222), 1,
      sym__array_size_wrapper,
    STATE(281), 1,
      sym_attribute,
  [9404] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_LBRACK,
    ACTIONS(515), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(525), 1,
      anon_sym_SEMI,
    STATE(131), 1,
      sym__declaration_finish,
    STATE(219), 1,
      sym__array_size_wrapper,
    STATE(265), 1,
      sym_attribute,
  [9426] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_LBRACK,
    ACTIONS(515), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(527), 1,
      anon_sym_SEMI,
    STATE(146), 1,
      sym__declaration_finish,
    STATE(232), 1,
      sym__array_size_wrapper,
    STATE(271), 1,
      sym_attribute,
  [9448] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_SEMI,
    ACTIONS(513), 1,
      anon_sym_LBRACK,
    ACTIONS(515), 1,
      anon_sym_LBRACK_LBRACK,
    STATE(88), 1,
      sym__declaration_finish,
    STATE(225), 1,
      sym__array_size_wrapper,
    STATE(283), 1,
      sym_attribute,
  [9470] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_LBRACK,
    ACTIONS(515), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(529), 1,
      anon_sym_SEMI,
    STATE(111), 1,
      sym__declaration_finish,
    STATE(223), 1,
      sym__array_size_wrapper,
    STATE(277), 1,
      sym_attribute,
  [9492] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(206), 1,
      sym__identifier_definition,
    STATE(212), 1,
      sym__identifier,
    STATE(230), 1,
      aux_sym__identifier_definition_repeat1,
    ACTIONS(531), 2,
      sym_identifier,
      sym_dollar,
  [9509] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 2,
      sym_identifier,
      sym_dollar,
    ACTIONS(37), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [9522] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(199), 1,
      sym__identifier_definition,
    STATE(212), 1,
      sym__identifier,
    STATE(230), 1,
      aux_sym__identifier_definition_repeat1,
    ACTIONS(531), 2,
      sym_identifier,
      sym_dollar,
  [9539] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(204), 1,
      sym__identifier_definition,
    STATE(212), 1,
      sym__identifier,
    STATE(230), 1,
      aux_sym__identifier_definition_repeat1,
    ACTIONS(531), 2,
      sym_identifier,
      sym_dollar,
  [9556] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_LBRACK,
    ACTIONS(539), 1,
      anon_sym_COMMA,
    ACTIONS(535), 3,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_LBRACK_LBRACK,
  [9571] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_COMMA,
    ACTIONS(543), 1,
      anon_sym_LBRACK,
    ACTIONS(541), 3,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_LBRACK_LBRACK,
  [9586] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(200), 1,
      sym__identifier_definition,
    STATE(212), 1,
      sym__identifier,
    STATE(230), 1,
      aux_sym__identifier_definition_repeat1,
    ACTIONS(531), 2,
      sym_identifier,
      sym_dollar,
  [9603] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(205), 1,
      sym__identifier_definition,
    STATE(212), 1,
      sym__identifier,
    STATE(230), 1,
      aux_sym__identifier_definition_repeat1,
    ACTIONS(531), 2,
      sym_identifier,
      sym_dollar,
  [9620] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(202), 1,
      sym__identifier_definition,
    STATE(212), 1,
      sym__identifier,
    STATE(230), 1,
      aux_sym__identifier_definition_repeat1,
    ACTIONS(531), 2,
      sym_identifier,
      sym_dollar,
  [9637] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(203), 1,
      sym__identifier_definition,
    STATE(212), 1,
      sym__identifier,
    STATE(230), 1,
      aux_sym__identifier_definition_repeat1,
    ACTIONS(531), 2,
      sym_identifier,
      sym_dollar,
  [9654] = 5,
    ACTIONS(545), 1,
      anon_sym_DQUOTE,
    ACTIONS(547), 1,
      aux_sym_string_literal_token1,
    ACTIONS(549), 1,
      sym_escape_sequence,
    ACTIONS(551), 1,
      sym_comment,
    STATE(228), 1,
      aux_sym_string_literal_repeat1,
  [9670] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(218), 1,
      aux_sym__identifier_definition_repeat1,
    STATE(284), 1,
      sym__identifier,
    ACTIONS(553), 2,
      sym_identifier,
      sym_dollar,
  [9684] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    STATE(132), 1,
      sym__declaration_finish,
    STATE(265), 1,
      sym_attribute,
  [9700] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(558), 1,
      anon_sym_SEMI,
    STATE(74), 1,
      sym__declaration_finish,
    STATE(283), 1,
      sym_attribute,
  [9716] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(560), 1,
      anon_sym_SEMI,
    STATE(89), 1,
      sym__declaration_finish,
    STATE(283), 1,
      sym_attribute,
  [9732] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(562), 1,
      anon_sym_SEMI,
    STATE(66), 1,
      sym__declaration_finish,
    STATE(281), 1,
      sym_attribute,
  [9748] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(564), 1,
      anon_sym_SEMI,
    STATE(114), 1,
      sym__declaration_finish,
    STATE(277), 1,
      sym_attribute,
  [9764] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(566), 1,
      anon_sym_SEMI,
    STATE(122), 1,
      sym__declaration_finish,
    STATE(277), 1,
      sym_attribute,
  [9780] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(568), 1,
      anon_sym_SEMI,
    STATE(76), 1,
      sym__declaration_finish,
    STATE(283), 1,
      sym_attribute,
  [9796] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(570), 1,
      anon_sym_SEMI,
    STATE(91), 1,
      sym__declaration_finish,
    STATE(283), 1,
      sym_attribute,
  [9812] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(572), 1,
      anon_sym_SEMI,
    STATE(101), 1,
      sym__declaration_finish,
    STATE(269), 1,
      sym_attribute,
  [9828] = 5,
    ACTIONS(551), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_DQUOTE,
    ACTIONS(576), 1,
      aux_sym_string_literal_token1,
    ACTIONS(578), 1,
      sym_escape_sequence,
    STATE(229), 1,
      aux_sym_string_literal_repeat1,
  [9844] = 5,
    ACTIONS(551), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_DQUOTE,
    ACTIONS(582), 1,
      aux_sym_string_literal_token1,
    ACTIONS(585), 1,
      sym_escape_sequence,
    STATE(229), 1,
      aux_sym_string_literal_repeat1,
  [9860] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(211), 1,
      sym__identifier,
    STATE(218), 1,
      aux_sym__identifier_definition_repeat1,
    ACTIONS(588), 2,
      sym_identifier,
      sym_dollar,
  [9874] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
    ACTIONS(590), 1,
      anon_sym_LT,
    STATE(73), 2,
      sym_system_lib_string,
      sym_string_literal,
  [9888] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(592), 1,
      anon_sym_SEMI,
    STATE(145), 1,
      sym__declaration_finish,
    STATE(271), 1,
      sym_attribute,
  [9904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 3,
      anon_sym_SEMI,
      sym_identifier,
      sym_dollar,
  [9913] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(254), 1,
      sym__identifier,
    ACTIONS(596), 2,
      sym_identifier,
      sym_dollar,
  [9924] = 3,
    ACTIONS(551), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_SQUOTE,
    ACTIONS(600), 2,
      aux_sym_character_literal_token1,
      sym_escape_sequence,
  [9935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [9944] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(261), 1,
      sym__identifier,
    ACTIONS(604), 2,
      sym_identifier,
      sym_dollar,
  [9955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [9964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 3,
      anon_sym_SEMI,
      sym_identifier,
      sym_dollar,
  [9973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 3,
      anon_sym_SEMI,
      sym_identifier,
      sym_dollar,
  [9982] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [9991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [10000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [10009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 3,
      anon_sym_SEMI,
      sym_identifier,
      sym_dollar,
  [10018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [10027] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_LBRACK,
    STATE(224), 1,
      sym__array_size_wrapper,
  [10037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym__condition,
  [10047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 2,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
  [10055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 2,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
  [10063] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym__condition,
  [10073] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_LPAREN,
    STATE(39), 1,
      sym__condition,
  [10083] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DOT,
    STATE(5), 1,
      aux_sym_field_expression_repeat1,
  [10093] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      sym__condition,
  [10103] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      anon_sym_LBRACE,
    STATE(226), 1,
      sym_field_list,
  [10113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 2,
      sym_identifier,
      sym_dollar,
  [10121] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      sym_identifier,
    STATE(7), 1,
      sym__field_identifier,
  [10131] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
    STATE(273), 1,
      sym_string_literal,
  [10141] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym__condition,
  [10151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 2,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
  [10159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 2,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
  [10167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      anon_sym_LBRACE,
    STATE(221), 1,
      sym_field_list,
  [10177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym__condition,
  [10187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      sym_number_literal,
  [10194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_SEMI,
  [10201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      anon_sym_SEMI,
  [10208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      anon_sym_SEMI,
  [10215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      sym_identifier,
  [10222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      sym_identifier,
  [10229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_SEMI,
  [10236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      anon_sym_RBRACK_RBRACK,
  [10243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_SEMI,
  [10250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      ts_builtin_sym_end,
  [10257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_RPAREN,
  [10264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_SEMI,
  [10271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      anon_sym_SQUOTE,
  [10278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_RBRACK,
  [10285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_SEMI,
  [10292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_LPAREN,
  [10299] = 2,
    ACTIONS(551), 1,
      sym_comment,
    ACTIONS(670), 1,
      aux_sym_system_lib_string_token1,
  [10306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      anon_sym_RBRACK_RBRACK,
  [10313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_SEMI,
  [10320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_RBRACK_RBRACK,
  [10327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_SEMI,
  [10334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_COMMA,
  [10341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      sym_endian_val,
  [10348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      sym_mime_type,
  [10355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      sym_number_literal,
  [10362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      sym_number_literal,
  [10369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      sym_number_literal,
  [10376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      anon_sym_EQ,
  [10383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 68,
  [SMALL_STATE(4)] = 136,
  [SMALL_STATE(5)] = 204,
  [SMALL_STATE(6)] = 272,
  [SMALL_STATE(7)] = 335,
  [SMALL_STATE(8)] = 398,
  [SMALL_STATE(9)] = 460,
  [SMALL_STATE(10)] = 522,
  [SMALL_STATE(11)] = 598,
  [SMALL_STATE(12)] = 676,
  [SMALL_STATE(13)] = 750,
  [SMALL_STATE(14)] = 812,
  [SMALL_STATE(15)] = 880,
  [SMALL_STATE(16)] = 946,
  [SMALL_STATE(17)] = 1026,
  [SMALL_STATE(18)] = 1108,
  [SMALL_STATE(19)] = 1170,
  [SMALL_STATE(20)] = 1256,
  [SMALL_STATE(21)] = 1318,
  [SMALL_STATE(22)] = 1380,
  [SMALL_STATE(23)] = 1450,
  [SMALL_STATE(24)] = 1534,
  [SMALL_STATE(25)] = 1620,
  [SMALL_STATE(26)] = 1715,
  [SMALL_STATE(27)] = 1810,
  [SMALL_STATE(28)] = 1894,
  [SMALL_STATE(29)] = 1966,
  [SMALL_STATE(30)] = 2038,
  [SMALL_STATE(31)] = 2110,
  [SMALL_STATE(32)] = 2180,
  [SMALL_STATE(33)] = 2250,
  [SMALL_STATE(34)] = 2318,
  [SMALL_STATE(35)] = 2386,
  [SMALL_STATE(36)] = 2456,
  [SMALL_STATE(37)] = 2524,
  [SMALL_STATE(38)] = 2592,
  [SMALL_STATE(39)] = 2660,
  [SMALL_STATE(40)] = 2730,
  [SMALL_STATE(41)] = 2800,
  [SMALL_STATE(42)] = 2870,
  [SMALL_STATE(43)] = 2940,
  [SMALL_STATE(44)] = 3010,
  [SMALL_STATE(45)] = 3078,
  [SMALL_STATE(46)] = 3146,
  [SMALL_STATE(47)] = 3216,
  [SMALL_STATE(48)] = 3286,
  [SMALL_STATE(49)] = 3354,
  [SMALL_STATE(50)] = 3422,
  [SMALL_STATE(51)] = 3492,
  [SMALL_STATE(52)] = 3560,
  [SMALL_STATE(53)] = 3630,
  [SMALL_STATE(54)] = 3698,
  [SMALL_STATE(55)] = 3766,
  [SMALL_STATE(56)] = 3834,
  [SMALL_STATE(57)] = 3875,
  [SMALL_STATE(58)] = 3916,
  [SMALL_STATE(59)] = 3955,
  [SMALL_STATE(60)] = 3994,
  [SMALL_STATE(61)] = 4033,
  [SMALL_STATE(62)] = 4072,
  [SMALL_STATE(63)] = 4111,
  [SMALL_STATE(64)] = 4150,
  [SMALL_STATE(65)] = 4189,
  [SMALL_STATE(66)] = 4228,
  [SMALL_STATE(67)] = 4267,
  [SMALL_STATE(68)] = 4306,
  [SMALL_STATE(69)] = 4345,
  [SMALL_STATE(70)] = 4384,
  [SMALL_STATE(71)] = 4423,
  [SMALL_STATE(72)] = 4461,
  [SMALL_STATE(73)] = 4499,
  [SMALL_STATE(74)] = 4537,
  [SMALL_STATE(75)] = 4575,
  [SMALL_STATE(76)] = 4613,
  [SMALL_STATE(77)] = 4651,
  [SMALL_STATE(78)] = 4689,
  [SMALL_STATE(79)] = 4727,
  [SMALL_STATE(80)] = 4765,
  [SMALL_STATE(81)] = 4803,
  [SMALL_STATE(82)] = 4841,
  [SMALL_STATE(83)] = 4879,
  [SMALL_STATE(84)] = 4917,
  [SMALL_STATE(85)] = 4955,
  [SMALL_STATE(86)] = 4993,
  [SMALL_STATE(87)] = 5031,
  [SMALL_STATE(88)] = 5069,
  [SMALL_STATE(89)] = 5107,
  [SMALL_STATE(90)] = 5145,
  [SMALL_STATE(91)] = 5183,
  [SMALL_STATE(92)] = 5221,
  [SMALL_STATE(93)] = 5259,
  [SMALL_STATE(94)] = 5297,
  [SMALL_STATE(95)] = 5335,
  [SMALL_STATE(96)] = 5369,
  [SMALL_STATE(97)] = 5403,
  [SMALL_STATE(98)] = 5437,
  [SMALL_STATE(99)] = 5471,
  [SMALL_STATE(100)] = 5505,
  [SMALL_STATE(101)] = 5539,
  [SMALL_STATE(102)] = 5573,
  [SMALL_STATE(103)] = 5607,
  [SMALL_STATE(104)] = 5641,
  [SMALL_STATE(105)] = 5677,
  [SMALL_STATE(106)] = 5713,
  [SMALL_STATE(107)] = 5747,
  [SMALL_STATE(108)] = 5781,
  [SMALL_STATE(109)] = 5815,
  [SMALL_STATE(110)] = 5849,
  [SMALL_STATE(111)] = 5882,
  [SMALL_STATE(112)] = 5915,
  [SMALL_STATE(113)] = 5948,
  [SMALL_STATE(114)] = 5981,
  [SMALL_STATE(115)] = 6014,
  [SMALL_STATE(116)] = 6047,
  [SMALL_STATE(117)] = 6080,
  [SMALL_STATE(118)] = 6113,
  [SMALL_STATE(119)] = 6146,
  [SMALL_STATE(120)] = 6179,
  [SMALL_STATE(121)] = 6212,
  [SMALL_STATE(122)] = 6247,
  [SMALL_STATE(123)] = 6280,
  [SMALL_STATE(124)] = 6315,
  [SMALL_STATE(125)] = 6348,
  [SMALL_STATE(126)] = 6381,
  [SMALL_STATE(127)] = 6424,
  [SMALL_STATE(128)] = 6457,
  [SMALL_STATE(129)] = 6490,
  [SMALL_STATE(130)] = 6523,
  [SMALL_STATE(131)] = 6556,
  [SMALL_STATE(132)] = 6589,
  [SMALL_STATE(133)] = 6622,
  [SMALL_STATE(134)] = 6655,
  [SMALL_STATE(135)] = 6688,
  [SMALL_STATE(136)] = 6721,
  [SMALL_STATE(137)] = 6754,
  [SMALL_STATE(138)] = 6787,
  [SMALL_STATE(139)] = 6819,
  [SMALL_STATE(140)] = 6851,
  [SMALL_STATE(141)] = 6883,
  [SMALL_STATE(142)] = 6915,
  [SMALL_STATE(143)] = 6947,
  [SMALL_STATE(144)] = 6979,
  [SMALL_STATE(145)] = 7011,
  [SMALL_STATE(146)] = 7043,
  [SMALL_STATE(147)] = 7075,
  [SMALL_STATE(148)] = 7107,
  [SMALL_STATE(149)] = 7139,
  [SMALL_STATE(150)] = 7171,
  [SMALL_STATE(151)] = 7215,
  [SMALL_STATE(152)] = 7269,
  [SMALL_STATE(153)] = 7310,
  [SMALL_STATE(154)] = 7351,
  [SMALL_STATE(155)] = 7404,
  [SMALL_STATE(156)] = 7445,
  [SMALL_STATE(157)] = 7498,
  [SMALL_STATE(158)] = 7551,
  [SMALL_STATE(159)] = 7592,
  [SMALL_STATE(160)] = 7645,
  [SMALL_STATE(161)] = 7698,
  [SMALL_STATE(162)] = 7739,
  [SMALL_STATE(163)] = 7792,
  [SMALL_STATE(164)] = 7845,
  [SMALL_STATE(165)] = 7886,
  [SMALL_STATE(166)] = 7939,
  [SMALL_STATE(167)] = 7992,
  [SMALL_STATE(168)] = 8045,
  [SMALL_STATE(169)] = 8098,
  [SMALL_STATE(170)] = 8151,
  [SMALL_STATE(171)] = 8192,
  [SMALL_STATE(172)] = 8233,
  [SMALL_STATE(173)] = 8274,
  [SMALL_STATE(174)] = 8315,
  [SMALL_STATE(175)] = 8356,
  [SMALL_STATE(176)] = 8409,
  [SMALL_STATE(177)] = 8462,
  [SMALL_STATE(178)] = 8515,
  [SMALL_STATE(179)] = 8556,
  [SMALL_STATE(180)] = 8597,
  [SMALL_STATE(181)] = 8638,
  [SMALL_STATE(182)] = 8679,
  [SMALL_STATE(183)] = 8720,
  [SMALL_STATE(184)] = 8761,
  [SMALL_STATE(185)] = 8802,
  [SMALL_STATE(186)] = 8843,
  [SMALL_STATE(187)] = 8884,
  [SMALL_STATE(188)] = 8925,
  [SMALL_STATE(189)] = 8966,
  [SMALL_STATE(190)] = 9007,
  [SMALL_STATE(191)] = 9048,
  [SMALL_STATE(192)] = 9089,
  [SMALL_STATE(193)] = 9130,
  [SMALL_STATE(194)] = 9171,
  [SMALL_STATE(195)] = 9212,
  [SMALL_STATE(196)] = 9240,
  [SMALL_STATE(197)] = 9265,
  [SMALL_STATE(198)] = 9298,
  [SMALL_STATE(199)] = 9319,
  [SMALL_STATE(200)] = 9344,
  [SMALL_STATE(201)] = 9366,
  [SMALL_STATE(202)] = 9382,
  [SMALL_STATE(203)] = 9404,
  [SMALL_STATE(204)] = 9426,
  [SMALL_STATE(205)] = 9448,
  [SMALL_STATE(206)] = 9470,
  [SMALL_STATE(207)] = 9492,
  [SMALL_STATE(208)] = 9509,
  [SMALL_STATE(209)] = 9522,
  [SMALL_STATE(210)] = 9539,
  [SMALL_STATE(211)] = 9556,
  [SMALL_STATE(212)] = 9571,
  [SMALL_STATE(213)] = 9586,
  [SMALL_STATE(214)] = 9603,
  [SMALL_STATE(215)] = 9620,
  [SMALL_STATE(216)] = 9637,
  [SMALL_STATE(217)] = 9654,
  [SMALL_STATE(218)] = 9670,
  [SMALL_STATE(219)] = 9684,
  [SMALL_STATE(220)] = 9700,
  [SMALL_STATE(221)] = 9716,
  [SMALL_STATE(222)] = 9732,
  [SMALL_STATE(223)] = 9748,
  [SMALL_STATE(224)] = 9764,
  [SMALL_STATE(225)] = 9780,
  [SMALL_STATE(226)] = 9796,
  [SMALL_STATE(227)] = 9812,
  [SMALL_STATE(228)] = 9828,
  [SMALL_STATE(229)] = 9844,
  [SMALL_STATE(230)] = 9860,
  [SMALL_STATE(231)] = 9874,
  [SMALL_STATE(232)] = 9888,
  [SMALL_STATE(233)] = 9904,
  [SMALL_STATE(234)] = 9913,
  [SMALL_STATE(235)] = 9924,
  [SMALL_STATE(236)] = 9935,
  [SMALL_STATE(237)] = 9944,
  [SMALL_STATE(238)] = 9955,
  [SMALL_STATE(239)] = 9964,
  [SMALL_STATE(240)] = 9973,
  [SMALL_STATE(241)] = 9982,
  [SMALL_STATE(242)] = 9991,
  [SMALL_STATE(243)] = 10000,
  [SMALL_STATE(244)] = 10009,
  [SMALL_STATE(245)] = 10018,
  [SMALL_STATE(246)] = 10027,
  [SMALL_STATE(247)] = 10037,
  [SMALL_STATE(248)] = 10047,
  [SMALL_STATE(249)] = 10055,
  [SMALL_STATE(250)] = 10063,
  [SMALL_STATE(251)] = 10073,
  [SMALL_STATE(252)] = 10083,
  [SMALL_STATE(253)] = 10093,
  [SMALL_STATE(254)] = 10103,
  [SMALL_STATE(255)] = 10113,
  [SMALL_STATE(256)] = 10121,
  [SMALL_STATE(257)] = 10131,
  [SMALL_STATE(258)] = 10141,
  [SMALL_STATE(259)] = 10151,
  [SMALL_STATE(260)] = 10159,
  [SMALL_STATE(261)] = 10167,
  [SMALL_STATE(262)] = 10177,
  [SMALL_STATE(263)] = 10187,
  [SMALL_STATE(264)] = 10194,
  [SMALL_STATE(265)] = 10201,
  [SMALL_STATE(266)] = 10208,
  [SMALL_STATE(267)] = 10215,
  [SMALL_STATE(268)] = 10222,
  [SMALL_STATE(269)] = 10229,
  [SMALL_STATE(270)] = 10236,
  [SMALL_STATE(271)] = 10243,
  [SMALL_STATE(272)] = 10250,
  [SMALL_STATE(273)] = 10257,
  [SMALL_STATE(274)] = 10264,
  [SMALL_STATE(275)] = 10271,
  [SMALL_STATE(276)] = 10278,
  [SMALL_STATE(277)] = 10285,
  [SMALL_STATE(278)] = 10292,
  [SMALL_STATE(279)] = 10299,
  [SMALL_STATE(280)] = 10306,
  [SMALL_STATE(281)] = 10313,
  [SMALL_STATE(282)] = 10320,
  [SMALL_STATE(283)] = 10327,
  [SMALL_STATE(284)] = 10334,
  [SMALL_STATE(285)] = 10341,
  [SMALL_STATE(286)] = 10348,
  [SMALL_STATE(287)] = 10355,
  [SMALL_STATE(288)] = 10362,
  [SMALL_STATE(289)] = 10369,
  [SMALL_STATE(290)] = 10376,
  [SMALL_STATE(291)] = 10383,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_expression, 2, .production_id = 7),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_expression, 2, .production_id = 7),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_expression_repeat1, 2, .production_id = 15),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_expression_repeat1, 2, .production_id = 15),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_expression_repeat1, 2, .production_id = 15), SHIFT_REPEAT(256),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_identifier, 1, .production_id = 13),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_identifier, 1, .production_id = 13),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_expression_repeat1, 2, .production_id = 14),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_expression_repeat1, 2, .production_id = 14),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_numeric_operator, 3, .production_id = 16),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_numeric_operator, 3, .production_id = 16),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_literal, 3),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_literal, 3),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_numeric_operator, 3),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_numeric_operator, 3),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_numeric_operator, 5, .production_id = 26),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ternary_numeric_operator, 5, .production_id = 26),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_literal, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_literal, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_numeric_operator, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_numeric_operator, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(231),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(267),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(197),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(234),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(237),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(268),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(196),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(240),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(161),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(208),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(238),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(247),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(246),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(196),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(240),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(187),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(208),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(243),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(262),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(196),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(240),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(193),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(208),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(241),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(253),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 8),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 8),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 21),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 21),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignation_statement, 4, .production_id = 16),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignation_statement, 4, .production_id = 16),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration_finish, 2, .production_id = 19),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declaration_finish, 2, .production_id = 19),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_definition, 4, .production_id = 18),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_definition, 4, .production_id = 18),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3, .production_id = 9),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 3, .production_id = 9),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_base_address, 2, .production_id = 6),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma_base_address, 2, .production_id = 6),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 2),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_placement, 5, .production_id = 22),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_placement, 5, .production_id = 22),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_definition, 5, .production_id = 20),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using_definition, 5, .production_id = 20),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_pattern_limit, 2, .production_id = 6),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma_pattern_limit, 2, .production_id = 6),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 2),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma, 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_array_limit, 2, .production_id = 6),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma_array_limit, 2, .production_id = 6),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_eval_depth, 2, .production_id = 6),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma_eval_depth, 2, .production_id = 6),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_mime, 2, .production_id = 6),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma_mime, 2, .production_id = 6),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_endian, 2, .production_id = 6),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma_endian, 2, .production_id = 6),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_definition, 4, .production_id = 12),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union_definition, 4, .production_id = 12),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 4, .production_id = 12),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 4, .production_id = 12),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_lib_string, 3),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_lib_string, 3),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_padding, 3, .production_id = 25),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_padding, 3, .production_id = 25),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition, 3, .production_id = 17),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__condition, 3, .production_id = 17),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset, 1),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endian_indicator, 1),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endian_indicator, 1),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 1),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier_definition, 2, .production_id = 10),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier_definition, 2, .production_id = 10),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier_definition, 1, .production_id = 4),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier_definition, 1, .production_id = 4),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_definition_repeat1, 2, .production_id = 11), SHIFT_REPEAT(284),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(229),
  [585] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(229),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive_type, 2, .production_id = 5),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive_type, 1, .production_id = 3),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1, .production_id = 2),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 2),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_size_wrapper, 2),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_definition_repeat1, 2, .production_id = 4),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_size_wrapper, 3, .production_id = 23),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 3),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, .production_id = 24),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_attribute, 4, .production_id = 27),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [658] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_attribute, 1, .production_id = 4),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_imhex(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
