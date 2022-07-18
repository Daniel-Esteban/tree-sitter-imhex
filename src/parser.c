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
#define STATE_COUNT 131
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 139
#define ALIAS_COUNT 1
#define TOKEN_COUNT 92
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 19

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
  anon_sym_AT = 18,
  anon_sym_EQ = 19,
  anon_sym_SEMI = 20,
  anon_sym_padding = 21,
  anon_sym_LBRACK = 22,
  anon_sym_RBRACK = 23,
  anon_sym_COMMA = 24,
  anon_sym_LBRACE = 25,
  anon_sym_RBRACE = 26,
  anon_sym_LBRACK_LBRACK = 27,
  anon_sym_RBRACK_RBRACK = 28,
  anon_sym_color = 29,
  anon_sym_LPAREN = 30,
  anon_sym_RPAREN = 31,
  anon_sym_name = 32,
  anon_sym_comment = 33,
  anon_sym_format = 34,
  anon_sym_transform = 35,
  anon_sym_pointer_base = 36,
  anon_sym_hidden = 37,
  anon_sym_inline = 38,
  anon_sym_no_unique_address = 39,
  anon_sym_static = 40,
  anon_sym_be = 41,
  anon_sym_le = 42,
  anon_sym_u8 = 43,
  anon_sym_u16 = 44,
  anon_sym_u32 = 45,
  anon_sym_u64 = 46,
  anon_sym_u128 = 47,
  anon_sym_s8 = 48,
  anon_sym_s16 = 49,
  anon_sym_s32 = 50,
  anon_sym_s64 = 51,
  anon_sym_s128 = 52,
  anon_sym_float = 53,
  anon_sym_double = 54,
  anon_sym_char = 55,
  anon_sym_char16 = 56,
  anon_sym_bool = 57,
  anon_sym_str = 58,
  anon_sym_auto = 59,
  anon_sym_return = 60,
  sym_identifier = 61,
  sym_dollar = 62,
  sym_number_literal = 63,
  anon_sym_TILDE = 64,
  anon_sym_BANG = 65,
  anon_sym_PLUS = 66,
  anon_sym_DASH = 67,
  anon_sym_STAR = 68,
  anon_sym_SLASH = 69,
  anon_sym_PERCENT = 70,
  anon_sym_GT_GT = 71,
  anon_sym_LT_LT = 72,
  anon_sym_AMP = 73,
  anon_sym_PIPE = 74,
  anon_sym_CARET = 75,
  anon_sym_EQ_EQ = 76,
  anon_sym_BANG_EQ = 77,
  anon_sym_GT_EQ = 78,
  anon_sym_LT_EQ = 79,
  anon_sym_AMP_AMP = 80,
  anon_sym_PIPE_PIPE = 81,
  anon_sym_CARET_CARET = 82,
  anon_sym_QMARK = 83,
  anon_sym_COLON = 84,
  anon_sym_DQUOTE = 85,
  aux_sym_string_literal_token1 = 86,
  anon_sym_SQUOTE = 87,
  aux_sym_character_literal_token1 = 88,
  sym_boolean_literal = 89,
  sym_escape_sequence = 90,
  sym_comment = 91,
  sym_source_file = 92,
  sym__definition = 93,
  sym__preproc_directive = 94,
  sym_include = 95,
  sym_system_lib_string = 96,
  sym_define = 97,
  sym_pragma = 98,
  sym_pragma_endian = 99,
  sym_pragma_mime = 100,
  sym_pragma_base_address = 101,
  sym_pragma_eval_depth = 102,
  sym_pragma_array_limit = 103,
  sym_pragma_pattern_limit = 104,
  sym_struct_definition = 105,
  sym_union_definition = 106,
  sym__definition_statement = 107,
  sym_variable_definition = 108,
  sym_variable_placement = 109,
  sym__offset = 110,
  sym_assignation_statement = 111,
  sym_array_definition = 112,
  sym_padding = 113,
  sym__array_size_wrapper = 114,
  sym__array_size = 115,
  sym__identifier_definition = 116,
  sym_field_list = 117,
  sym__declaration_finish = 118,
  sym_attribute = 119,
  sym__variable_attribute = 120,
  sym__type = 121,
  sym__primitive_type = 122,
  sym_endian_indicator = 123,
  sym_primitive_type = 124,
  sym__expression = 125,
  sym__identifier = 126,
  sym__type_identifier = 127,
  sym__number = 128,
  sym__operator = 129,
  sym_unary_numeric_operator = 130,
  sym_binary_numeric_operator = 131,
  sym_ternary_numeric_operator = 132,
  sym_string_literal = 133,
  sym_character_literal = 134,
  aux_sym_source_file_repeat1 = 135,
  aux_sym__identifier_definition_repeat1 = 136,
  aux_sym_field_list_repeat1 = 137,
  aux_sym_string_literal_repeat1 = 138,
  alias_sym_type_identifier = 139,
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
  [anon_sym_AT] = "@",
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
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
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_character_literal_token1] = "character_literal_token1",
  [sym_boolean_literal] = "boolean_literal",
  [sym_escape_sequence] = "escape_sequence",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
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
  [sym__expression] = "_expression",
  [sym__identifier] = "_identifier",
  [sym__type_identifier] = "_type_identifier",
  [sym__number] = "_number",
  [sym__operator] = "_operator",
  [sym_unary_numeric_operator] = "unary_numeric_operator",
  [sym_binary_numeric_operator] = "binary_numeric_operator",
  [sym_ternary_numeric_operator] = "ternary_numeric_operator",
  [sym_string_literal] = "string_literal",
  [sym_character_literal] = "character_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__identifier_definition_repeat1] = "_identifier_definition_repeat1",
  [aux_sym_field_list_repeat1] = "field_list_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
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
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
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
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_character_literal_token1] = aux_sym_character_literal_token1,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
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
  [sym__expression] = sym__expression,
  [sym__identifier] = sym__identifier,
  [sym__type_identifier] = sym__type_identifier,
  [sym__number] = sym__number,
  [sym__operator] = sym__operator,
  [sym_unary_numeric_operator] = sym_unary_numeric_operator,
  [sym_binary_numeric_operator] = sym_binary_numeric_operator,
  [sym_ternary_numeric_operator] = sym_ternary_numeric_operator,
  [sym_string_literal] = sym_string_literal,
  [sym_character_literal] = sym_character_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__identifier_definition_repeat1] = aux_sym__identifier_definition_repeat1,
  [aux_sym_field_list_repeat1] = aux_sym_field_list_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
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
  [anon_sym_AT] = {
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
  [sym__definition] = {
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
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
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
  field_endian = 4,
  field_iffalse = 5,
  field_iftrue = 6,
  field_left = 7,
  field_name = 8,
  field_offset = 9,
  field_operator = 10,
  field_right = 11,
  field_size = 12,
  field_type = 13,
  field_value = 14,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_attribute] = "attribute",
  [field_body] = "body",
  [field_cond] = "cond",
  [field_endian] = "endian",
  [field_iffalse] = "iffalse",
  [field_iftrue] = "iftrue",
  [field_left] = "left",
  [field_name] = "name",
  [field_offset] = "offset",
  [field_operator] = "operator",
  [field_right] = "right",
  [field_size] = "size",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 1},
  [5] = {.index = 3, .length = 1},
  [6] = {.index = 4, .length = 4},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 3},
  [10] = {.index = 15, .length = 5},
  [11] = {.index = 20, .length = 1},
  [12] = {.index = 21, .length = 3},
  [13] = {.index = 24, .length = 5},
  [14] = {.index = 29, .length = 1},
  [15] = {.index = 30, .length = 2},
  [16] = {.index = 32, .length = 2},
  [17] = {.index = 34, .length = 3},
  [18] = {.index = 37, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_endian, 0, .inherited = true},
  [1] =
    {field_name, 0},
  [2] =
    {field_endian, 0},
  [3] =
    {field_value, 1},
  [4] =
    {field_attribute, 2, .inherited = true},
    {field_endian, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_type, 0},
  [8] =
    {field_name, 0, .inherited = true},
    {field_name, 1},
  [10] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [12] =
    {field_attribute, 3, .inherited = true},
    {field_body, 2},
    {field_name, 1},
  [15] =
    {field_attribute, 3, .inherited = true},
    {field_endian, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_size, 2, .inherited = true},
    {field_type, 0},
  [20] =
    {field_attribute, 0},
  [21] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [24] =
    {field_attribute, 4, .inherited = true},
    {field_endian, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_offset, 3},
    {field_type, 0},
  [29] =
    {field_size, 1},
  [30] =
    {field_name, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [32] =
    {field_attribute, 2, .inherited = true},
    {field_size, 1, .inherited = true},
  [34] =
    {field_cond, 0},
    {field_iffalse, 4},
    {field_iftrue, 2},
  [37] =
    {field_name, 0},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_type_identifier,
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
      if (eof) ADVANCE(238);
      if (lookahead == '!') ADVANCE(403);
      if (lookahead == '"') ADVANCE(423);
      if (lookahead == '#') ADVANCE(76);
      if (lookahead == '$') ADVANCE(389);
      if (lookahead == '%') ADVANCE(408);
      if (lookahead == '&') ADVANCE(411);
      if (lookahead == '\'') ADVANCE(429);
      if (lookahead == '(') ADVANCE(285);
      if (lookahead == ')') ADVANCE(286);
      if (lookahead == '*') ADVANCE(406);
      if (lookahead == '+') ADVANCE(404);
      if (lookahead == ',') ADVANCE(279);
      if (lookahead == '-') ADVANCE(405);
      if (lookahead == '/') ADVANCE(407);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == ';') ADVANCE(273);
      if (lookahead == '<') ADVANCE(241);
      if (lookahead == '=') ADVANCE(272);
      if (lookahead == '>') ADVANCE(254);
      if (lookahead == '?') ADVANCE(421);
      if (lookahead == '@') ADVANCE(270);
      if (lookahead == 'M') ADVANCE(42);
      if (lookahead == '[') ADVANCE(276);
      if (lookahead == '\\') SKIP(234)
      if (lookahead == ']') ADVANCE(278);
      if (lookahead == '^') ADVANCE(413);
      if (lookahead == 'a') ADVANCE(187);
      if (lookahead == 'b') ADVANCE(53);
      if (lookahead == 'c') ADVANCE(115);
      if (lookahead == 'd') ADVANCE(165);
      if (lookahead == 'e') ADVANCE(149);
      if (lookahead == 'f') ADVANCE(54);
      if (lookahead == 'h') ADVANCE(119);
      if (lookahead == 'i') ADVANCE(156);
      if (lookahead == 'l') ADVANCE(88);
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == 'o') ADVANCE(150);
      if (lookahead == 'p') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(101);
      if (lookahead == 's') ADVANCE(26);
      if (lookahead == 't') ADVANCE(175);
      if (lookahead == 'u') ADVANCE(29);
      if (lookahead == '{') ADVANCE(280);
      if (lookahead == '|') ADVANCE(412);
      if (lookahead == '}') ADVANCE(281);
      if (lookahead == '~') ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(15)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(14)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(22)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(17)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '"') ADVANCE(423);
      if (lookahead == '/') ADVANCE(424);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(427);
      if (lookahead != 0) ADVANCE(428);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(436);
      if (lookahead == '\r') ADVANCE(435);
      if (lookahead == 'U') ADVANCE(230);
      if (lookahead == 'u') ADVANCE(226);
      if (lookahead == 'x') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(438);
      if (lookahead != 0) ADVANCE(435);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '\'') ADVANCE(429);
      if (lookahead == '/') ADVANCE(432);
      if (lookahead == '\\') ADVANCE(431);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(433);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(23)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '\r') SKIP(12)
      END_STATE();
    case 14:
      if (lookahead == '!') ADVANCE(402);
      if (lookahead == '"') ADVANCE(423);
      if (lookahead == '$') ADVANCE(389);
      if (lookahead == '\'') ADVANCE(429);
      if (lookahead == '(') ADVANCE(285);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '0') ADVANCE(397);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'f') ADVANCE(353);
      if (lookahead == 't') ADVANCE(380);
      if (lookahead == '~') ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(398);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(423);
      if (lookahead == '$') ADVANCE(389);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '0') ADVANCE(397);
      if (lookahead == '<') ADVANCE(240);
      if (lookahead == '=') ADVANCE(271);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == ']') ADVANCE(277);
      if (lookahead == 'a') ADVANCE(385);
      if (lookahead == 'b') ADVANCE(359);
      if (lookahead == 'c') ADVANCE(363);
      if (lookahead == 'd') ADVANCE(374);
      if (lookahead == 'f') ADVANCE(369);
      if (lookahead == 'l') ADVANCE(360);
      if (lookahead == 'p') ADVANCE(350);
      if (lookahead == 's') ADVANCE(338);
      if (lookahead == 'u') ADVANCE(340);
      if (lookahead == '}') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(398);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(423);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == '$') ADVANCE(389);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '0') ADVANCE(397);
      if (lookahead == '=') ADVANCE(271);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == ']') ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(398);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 18:
      if (lookahead == '\'') ADVANCE(429);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      END_STATE();
    case 19:
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '/') ADVANCE(440);
      END_STATE();
    case 20:
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '/') ADVANCE(439);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == '*') ADVANCE(20);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'a') ADVANCE(211);
      if (lookahead == 'b') ADVANCE(167);
      if (lookahead == 'c') ADVANCE(114);
      if (lookahead == 'd') ADVANCE(165);
      if (lookahead == 'f') ADVANCE(132);
      if (lookahead == 's') ADVANCE(27);
      if (lookahead == 'u') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      END_STATE();
    case 23:
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '\\') SKIP(13)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == '/') ADVANCE(231);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '0') ADVANCE(391);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(392);
      END_STATE();
    case 26:
      if (lookahead == '1') ADVANCE(30);
      if (lookahead == '3') ADVANCE(31);
      if (lookahead == '6') ADVANCE(34);
      if (lookahead == '8') ADVANCE(310);
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 27:
      if (lookahead == '1') ADVANCE(30);
      if (lookahead == '3') ADVANCE(31);
      if (lookahead == '6') ADVANCE(34);
      if (lookahead == '8') ADVANCE(310);
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 28:
      if (lookahead == '1') ADVANCE(33);
      if (lookahead == '3') ADVANCE(32);
      if (lookahead == '6') ADVANCE(35);
      if (lookahead == '8') ADVANCE(300);
      END_STATE();
    case 29:
      if (lookahead == '1') ADVANCE(33);
      if (lookahead == '3') ADVANCE(32);
      if (lookahead == '6') ADVANCE(35);
      if (lookahead == '8') ADVANCE(300);
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 30:
      if (lookahead == '2') ADVANCE(37);
      if (lookahead == '6') ADVANCE(312);
      END_STATE();
    case 31:
      if (lookahead == '2') ADVANCE(314);
      END_STATE();
    case 32:
      if (lookahead == '2') ADVANCE(304);
      END_STATE();
    case 33:
      if (lookahead == '2') ADVANCE(38);
      if (lookahead == '6') ADVANCE(302);
      END_STATE();
    case 34:
      if (lookahead == '4') ADVANCE(316);
      END_STATE();
    case 35:
      if (lookahead == '4') ADVANCE(306);
      END_STATE();
    case 36:
      if (lookahead == '6') ADVANCE(326);
      END_STATE();
    case 37:
      if (lookahead == '8') ADVANCE(318);
      END_STATE();
    case 38:
      if (lookahead == '8') ADVANCE(308);
      END_STATE();
    case 39:
      if (lookahead == '=') ADVANCE(415);
      END_STATE();
    case 40:
      if (lookahead == '=') ADVANCE(414);
      END_STATE();
    case 41:
      if (lookahead == 'E') ADVANCE(259);
      END_STATE();
    case 42:
      if (lookahead == 'I') ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == 'M') ADVANCE(41);
      END_STATE();
    case 44:
      if (lookahead == '[') ADVANCE(282);
      END_STATE();
    case 45:
      if (lookahead == ']') ADVANCE(283);
      END_STATE();
    case 46:
      if (lookahead == '_') ADVANCE(214);
      END_STATE();
    case 47:
      if (lookahead == '_') ADVANCE(71);
      END_STATE();
    case 48:
      if (lookahead == '_') ADVANCE(67);
      END_STATE();
    case 49:
      if (lookahead == '_') ADVANCE(136);
      END_STATE();
    case 50:
      if (lookahead == '_') ADVANCE(82);
      END_STATE();
    case 51:
      if (lookahead == '_') ADVANCE(141);
      END_STATE();
    case 52:
      if (lookahead == '_') ADVANCE(69);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(192);
      if (lookahead == 'e') ADVANCE(296);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(139);
      if (lookahead == 'l') ADVANCE(170);
      if (lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(143);
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(256);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead == 'u') ADVANCE(93);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(207);
      if (lookahead == 'r') ADVANCE(332);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 70:
      if (lookahead == 'b') ADVANCE(137);
      END_STATE();
    case 71:
      if (lookahead == 'b') ADVANCE(68);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(295);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(134);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(199);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(89);
      if (lookahead == 'i') ADVANCE(157);
      if (lookahead == 'p') ADVANCE(180);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(80);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(125);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(81);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(104);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(186);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(97);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(98);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(85);
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(188);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(86);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(298);
      if (lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 109:
      if (lookahead == 'f') ADVANCE(172);
      END_STATE();
    case 110:
      if (lookahead == 'f') ADVANCE(129);
      END_STATE();
    case 111:
      if (lookahead == 'g') ADVANCE(258);
      END_STATE();
    case 112:
      if (lookahead == 'g') ADVANCE(274);
      END_STATE();
    case 113:
      if (lookahead == 'g') ADVANCE(145);
      END_STATE();
    case 114:
      if (lookahead == 'h') ADVANCE(60);
      END_STATE();
    case 115:
      if (lookahead == 'h') ADVANCE(60);
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 116:
      if (lookahead == 'h') ADVANCE(262);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(203);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 131:
      if (lookahead == 'l') ADVANCE(328);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(215);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(169);
      if (lookahead == 'm') ADVANCE(144);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 142:
      if (lookahead == 'm') ADVANCE(290);
      END_STATE();
    case 143:
      if (lookahead == 'm') ADVANCE(91);
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 144:
      if (lookahead == 'm') ADVANCE(106);
      END_STATE();
    case 145:
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 146:
      if (lookahead == 'm') ADVANCE(127);
      END_STATE();
    case 147:
      if (lookahead == 'm') ADVANCE(65);
      END_STATE();
    case 148:
      if (lookahead == 'm') ADVANCE(128);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(78);
      if (lookahead == 'v') ADVANCE(61);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(268);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(292);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(336);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 165:
      if (lookahead == 'o') ADVANCE(212);
      END_STATE();
    case 166:
      if (lookahead == 'o') ADVANCE(334);
      END_STATE();
    case 167:
      if (lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 168:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 169:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 173:
      if (lookahead == 'p') ADVANCE(201);
      END_STATE();
    case 174:
      if (lookahead == 'q') ADVANCE(216);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(324);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(284);
      END_STATE();
    case 178:
      if (lookahead == 'r') ADVANCE(330);
      END_STATE();
    case 179:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 180:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 181:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 182:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 183:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 184:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(181);
      if (lookahead == 'u') ADVANCE(205);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 189:
      if (lookahead == 's') ADVANCE(261);
      END_STATE();
    case 190:
      if (lookahead == 's') ADVANCE(294);
      END_STATE();
    case 191:
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 192:
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 193:
      if (lookahead == 's') ADVANCE(189);
      END_STATE();
    case 194:
      if (lookahead == 's') ADVANCE(190);
      END_STATE();
    case 195:
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 196:
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(320);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(289);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(288);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(213);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(210);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 211:
      if (lookahead == 'u') ADVANCE(205);
      END_STATE();
    case 212:
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 213:
      if (lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 214:
      if (lookahead == 'u') ADVANCE(159);
      END_STATE();
    case 215:
      if (lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 216:
      if (lookahead == 'u') ADVANCE(108);
      END_STATE();
    case 217:
      if (lookahead == 'v') ADVANCE(90);
      END_STATE();
    case 218:
      if (lookahead == 'y') ADVANCE(49);
      END_STATE();
    case 219:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(394);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(396);
      END_STATE();
    case 220:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(395);
      END_STATE();
    case 221:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(396);
      END_STATE();
    case 222:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(400);
      END_STATE();
    case 223:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(435);
      END_STATE();
    case 224:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(223);
      END_STATE();
    case 225:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(224);
      END_STATE();
    case 226:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      END_STATE();
    case 227:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(226);
      END_STATE();
    case 228:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      END_STATE();
    case 229:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(228);
      END_STATE();
    case 230:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(229);
      END_STATE();
    case 231:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 232:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(440);
      if (lookahead == '\r') ADVANCE(441);
      END_STATE();
    case 233:
      if (eof) ADVANCE(238);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 234:
      if (eof) ADVANCE(238);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(233)
      END_STATE();
    case 235:
      if (eof) ADVANCE(238);
      if (lookahead == '\n') SKIP(237)
      END_STATE();
    case 236:
      if (eof) ADVANCE(238);
      if (lookahead == '\n') SKIP(237)
      if (lookahead == '\r') SKIP(235)
      END_STATE();
    case 237:
      if (eof) ADVANCE(238);
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '#') ADVANCE(76);
      if (lookahead == '$') ADVANCE(389);
      if (lookahead == '%') ADVANCE(408);
      if (lookahead == '&') ADVANCE(411);
      if (lookahead == ')') ADVANCE(286);
      if (lookahead == '*') ADVANCE(406);
      if (lookahead == '+') ADVANCE(404);
      if (lookahead == '-') ADVANCE(405);
      if (lookahead == '/') ADVANCE(407);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == ';') ADVANCE(273);
      if (lookahead == '<') ADVANCE(241);
      if (lookahead == '=') ADVANCE(40);
      if (lookahead == '>') ADVANCE(254);
      if (lookahead == '?') ADVANCE(421);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == '\\') SKIP(236)
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == '^') ADVANCE(413);
      if (lookahead == 'a') ADVANCE(385);
      if (lookahead == 'b') ADVANCE(359);
      if (lookahead == 'c') ADVANCE(363);
      if (lookahead == 'd') ADVANCE(374);
      if (lookahead == 'f') ADVANCE(369);
      if (lookahead == 'l') ADVANCE(360);
      if (lookahead == 's') ADVANCE(337);
      if (lookahead == 'u') ADVANCE(339);
      if (lookahead == '|') ADVANCE(412);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(237)
      if (('A' <= lookahead && lookahead <= '_') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_POUNDinclude);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(410);
      if (lookahead == '=') ADVANCE(417);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '*') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(247);
      if (lookahead == '\\') ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead == '\n') ADVANCE(440);
      if (lookahead == '\r') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(249);
      if (lookahead == '\\') ADVANCE(253);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead == '\r') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(252);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead == '*') ADVANCE(247);
      if (lookahead == '/') ADVANCE(249);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '>') ADVANCE(250);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead == '*') ADVANCE(246);
      if (lookahead == '/') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(242);
      if (lookahead == '\n' ||
          lookahead == '>') ADVANCE(21);
      if (lookahead != 0) ADVANCE(247);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead == '*') ADVANCE(246);
      if (lookahead == '\\') ADVANCE(242);
      if (lookahead == '\n' ||
          lookahead == '>') ADVANCE(21);
      if (lookahead != 0) ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead == '/') ADVANCE(245);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '>') ADVANCE(250);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead == '>') ADVANCE(440);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '>') ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead == '\n' ||
          lookahead == '>') ADVANCE(440);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(249);
      if (lookahead == '\\') ADVANCE(243);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(416);
      if (lookahead == '>') ADVANCE(409);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_POUNDdefine);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_POUNDpragma);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_endian);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_endian_val);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_MIME);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_mime_type);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_base_address);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_eval_depth);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_array_limit);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_pattern_limit);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_pragma_once);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_union);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(414);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_padding);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_padding);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[') ADVANCE(282);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']') ADVANCE(283);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_comment);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_transform);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_pointer_base);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_hidden);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_no_unique_address);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_be);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_be);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_le);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_le);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_u16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_u32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_u64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_u128);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_u128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_s8);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_s8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_s16);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_s16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_s32);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_s32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_s64);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_s64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_s128);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_s128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_char);
      if (lookahead == '1') ADVANCE(36);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_char);
      if (lookahead == '1') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_char16);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_char16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_str);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_str);
      if (lookahead == 'u') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_str);
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_str);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_auto);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_auto);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(341);
      if (lookahead == '3') ADVANCE(342);
      if (lookahead == '6') ADVANCE(345);
      if (lookahead == '8') ADVANCE(311);
      if (lookahead == 't') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(341);
      if (lookahead == '3') ADVANCE(342);
      if (lookahead == '6') ADVANCE(345);
      if (lookahead == '8') ADVANCE(311);
      if (lookahead == 't') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(344);
      if (lookahead == '3') ADVANCE(343);
      if (lookahead == '6') ADVANCE(346);
      if (lookahead == '8') ADVANCE(301);
      if (lookahead == 'n') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(344);
      if (lookahead == '3') ADVANCE(343);
      if (lookahead == '6') ADVANCE(346);
      if (lookahead == '8') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(348);
      if (lookahead == '6') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(349);
      if (lookahead == '6') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(297);
      if (lookahead == 'o') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_dollar);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_number_literal);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'b') ADVANCE(219);
      if (lookahead == 'o') ADVANCE(220);
      if (lookahead == 'x') ADVANCE(222);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(221);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(221);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(400);
      if (('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(393);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(390);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(394);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(396);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(390);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(395);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(396);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'U') ADVANCE(399);
      if (lookahead == 'b') ADVANCE(219);
      if (lookahead == 'o') ADVANCE(220);
      if (lookahead == 'x') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(221);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'U') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(221);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(396);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(400);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(415);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '/') ADVANCE(440);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(418);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(419);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '^') ADVANCE(420);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_CARET_CARET);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(426);
      if (lookahead == '/') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(428);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(425);
      if (lookahead == '/') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(424);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(428);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(428);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_character_literal_token1);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_character_literal_token1);
      if (lookahead == '\n') ADVANCE(436);
      if (lookahead == '\r') ADVANCE(435);
      if (lookahead == 'U') ADVANCE(230);
      if (lookahead == 'u') ADVANCE(226);
      if (lookahead == 'x') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(438);
      if (lookahead != 0) ADVANCE(435);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_character_literal_token1);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '/') ADVANCE(440);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_character_literal_token1);
      if (lookahead == '\\') ADVANCE(10);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_boolean_literal);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\\') ADVANCE(10);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(435);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(437);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(440);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(440);
      if (lookahead == '\\') ADVANCE(232);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 237},
  [2] = {.lex_state = 237},
  [3] = {.lex_state = 237},
  [4] = {.lex_state = 237},
  [5] = {.lex_state = 237},
  [6] = {.lex_state = 237},
  [7] = {.lex_state = 237},
  [8] = {.lex_state = 237},
  [9] = {.lex_state = 237},
  [10] = {.lex_state = 237},
  [11] = {.lex_state = 237},
  [12] = {.lex_state = 237},
  [13] = {.lex_state = 237},
  [14] = {.lex_state = 237},
  [15] = {.lex_state = 237},
  [16] = {.lex_state = 237},
  [17] = {.lex_state = 237},
  [18] = {.lex_state = 237},
  [19] = {.lex_state = 237},
  [20] = {.lex_state = 237},
  [21] = {.lex_state = 237},
  [22] = {.lex_state = 15},
  [23] = {.lex_state = 15},
  [24] = {.lex_state = 15},
  [25] = {.lex_state = 237},
  [26] = {.lex_state = 237},
  [27] = {.lex_state = 237},
  [28] = {.lex_state = 237},
  [29] = {.lex_state = 237},
  [30] = {.lex_state = 237},
  [31] = {.lex_state = 237},
  [32] = {.lex_state = 237},
  [33] = {.lex_state = 237},
  [34] = {.lex_state = 237},
  [35] = {.lex_state = 237},
  [36] = {.lex_state = 237},
  [37] = {.lex_state = 237},
  [38] = {.lex_state = 237},
  [39] = {.lex_state = 237},
  [40] = {.lex_state = 237},
  [41] = {.lex_state = 15},
  [42] = {.lex_state = 15},
  [43] = {.lex_state = 15},
  [44] = {.lex_state = 15},
  [45] = {.lex_state = 15},
  [46] = {.lex_state = 237},
  [47] = {.lex_state = 237},
  [48] = {.lex_state = 237},
  [49] = {.lex_state = 237},
  [50] = {.lex_state = 237},
  [51] = {.lex_state = 14},
  [52] = {.lex_state = 14},
  [53] = {.lex_state = 14},
  [54] = {.lex_state = 14},
  [55] = {.lex_state = 14},
  [56] = {.lex_state = 14},
  [57] = {.lex_state = 14},
  [58] = {.lex_state = 14},
  [59] = {.lex_state = 14},
  [60] = {.lex_state = 14},
  [61] = {.lex_state = 22},
  [62] = {.lex_state = 14},
  [63] = {.lex_state = 14},
  [64] = {.lex_state = 14},
  [65] = {.lex_state = 14},
  [66] = {.lex_state = 14},
  [67] = {.lex_state = 14},
  [68] = {.lex_state = 14},
  [69] = {.lex_state = 14},
  [70] = {.lex_state = 22},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 17},
  [76] = {.lex_state = 17},
  [77] = {.lex_state = 17},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 17},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 17},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 9},
  [90] = {.lex_state = 15},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 17},
  [93] = {.lex_state = 17},
  [94] = {.lex_state = 11},
  [95] = {.lex_state = 17},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 17},
  [99] = {.lex_state = 17},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 17},
  [106] = {.lex_state = 17},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 237},
  [109] = {.lex_state = 15},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 248},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 23},
  [115] = {.lex_state = 15},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 15},
  [118] = {.lex_state = 15},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 237},
  [122] = {.lex_state = 15},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 237},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 17},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 15},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 15},
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
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
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
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_boolean_literal] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(112),
    [sym__definition] = STATE(21),
    [sym__preproc_directive] = STATE(21),
    [sym_include] = STATE(21),
    [sym_define] = STATE(21),
    [sym_pragma] = STATE(21),
    [sym_struct_definition] = STATE(21),
    [sym_union_definition] = STATE(21),
    [sym__definition_statement] = STATE(21),
    [sym_variable_definition] = STATE(21),
    [sym_variable_placement] = STATE(21),
    [sym_assignation_statement] = STATE(21),
    [sym_array_definition] = STATE(21),
    [sym__type] = STATE(76),
    [sym__primitive_type] = STATE(105),
    [sym_endian_indicator] = STATE(61),
    [sym_primitive_type] = STATE(105),
    [sym__identifier] = STATE(109),
    [sym__type_identifier] = STATE(76),
    [aux_sym_source_file_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_POUNDinclude] = ACTIONS(7),
    [anon_sym_POUNDdefine] = ACTIONS(9),
    [anon_sym_POUNDpragma] = ACTIONS(11),
    [anon_sym_struct] = ACTIONS(13),
    [anon_sym_union] = ACTIONS(15),
    [anon_sym_be] = ACTIONS(17),
    [anon_sym_le] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_s8] = ACTIONS(19),
    [anon_sym_s16] = ACTIONS(19),
    [anon_sym_s32] = ACTIONS(19),
    [anon_sym_s64] = ACTIONS(19),
    [anon_sym_s128] = ACTIONS(19),
    [anon_sym_float] = ACTIONS(19),
    [anon_sym_double] = ACTIONS(19),
    [anon_sym_char] = ACTIONS(19),
    [anon_sym_char16] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_str] = ACTIONS(19),
    [anon_sym_auto] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_dollar] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 23,
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
    ACTIONS(27), 28,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_struct,
      anon_sym_union,
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
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
  [59] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_SLASH,
    ACTIONS(43), 1,
      anon_sym_AMP,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(37), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(41), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(45), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(29), 13,
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
    ACTIONS(33), 24,
      anon_sym_struct,
      anon_sym_union,
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
      sym_identifier,
      anon_sym_PIPE,
      anon_sym_CARET,
  [132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 23,
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
    ACTIONS(49), 28,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_struct,
      anon_sym_union,
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
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
  [191] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 23,
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
    ACTIONS(53), 28,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_struct,
      anon_sym_union,
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
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
  [250] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_SLASH,
    ACTIONS(43), 1,
      anon_sym_AMP,
    ACTIONS(59), 1,
      anon_sym_PIPE,
    ACTIONS(61), 1,
      anon_sym_CARET,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(65), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(67), 1,
      anon_sym_CARET_CARET,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(37), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(41), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(45), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(55), 10,
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
    ACTIONS(57), 22,
      anon_sym_struct,
      anon_sym_union,
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
      sym_identifier,
  [333] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_SLASH,
    ACTIONS(43), 1,
      anon_sym_AMP,
    ACTIONS(59), 1,
      anon_sym_PIPE,
    ACTIONS(61), 1,
      anon_sym_CARET,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(65), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(67), 1,
      anon_sym_CARET_CARET,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(37), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(41), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(45), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(69), 10,
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
    ACTIONS(71), 22,
      anon_sym_struct,
      anon_sym_union,
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
      sym_identifier,
  [416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 23,
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
    ACTIONS(75), 28,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_struct,
      anon_sym_union,
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
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
  [475] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 23,
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
    ACTIONS(79), 28,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_struct,
      anon_sym_union,
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
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
  [534] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_SLASH,
    ACTIONS(43), 1,
      anon_sym_AMP,
    ACTIONS(59), 1,
      anon_sym_PIPE,
    ACTIONS(61), 1,
      anon_sym_CARET,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(37), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(41), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(45), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(29), 13,
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
    ACTIONS(33), 22,
      anon_sym_struct,
      anon_sym_union,
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
      sym_identifier,
  [611] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_SLASH,
    ACTIONS(43), 1,
      anon_sym_AMP,
    ACTIONS(59), 1,
      anon_sym_PIPE,
    ACTIONS(61), 1,
      anon_sym_CARET,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(67), 1,
      anon_sym_CARET_CARET,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(37), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(41), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(45), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(29), 11,
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
    ACTIONS(33), 22,
      anon_sym_struct,
      anon_sym_union,
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
      sym_identifier,
  [692] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_SLASH,
    ACTIONS(43), 1,
      anon_sym_AMP,
    ACTIONS(59), 1,
      anon_sym_PIPE,
    ACTIONS(61), 1,
      anon_sym_CARET,
    ACTIONS(67), 1,
      anon_sym_CARET_CARET,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(37), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(41), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(45), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(29), 12,
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
    ACTIONS(33), 22,
      anon_sym_struct,
      anon_sym_union,
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
      sym_identifier,
  [771] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_SLASH,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(37), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(41), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(29), 17,
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
    ACTIONS(33), 27,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_struct,
      anon_sym_union,
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
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
  [838] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_SLASH,
    ACTIONS(43), 1,
      anon_sym_AMP,
    ACTIONS(61), 1,
      anon_sym_CARET,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(37), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(41), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(45), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(29), 13,
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
    ACTIONS(33), 23,
      anon_sym_struct,
      anon_sym_union,
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
      sym_identifier,
      anon_sym_PIPE,
  [913] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_SLASH,
    ACTIONS(37), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(29), 21,
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
    ACTIONS(33), 27,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_struct,
      anon_sym_union,
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
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
  [976] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_SLASH,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(37), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(41), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(45), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(29), 13,
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
    ACTIONS(33), 25,
      anon_sym_struct,
      anon_sym_union,
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
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
  [1047] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_SLASH,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(37), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(29), 19,
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
    ACTIONS(33), 27,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_struct,
      anon_sym_union,
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
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
  [1112] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 23,
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
    ACTIONS(33), 28,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_struct,
      anon_sym_union,
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
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
  [1171] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_SLASH,
    ACTIONS(43), 1,
      anon_sym_AMP,
    ACTIONS(59), 1,
      anon_sym_PIPE,
    ACTIONS(61), 1,
      anon_sym_CARET,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(65), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(67), 1,
      anon_sym_CARET_CARET,
    ACTIONS(85), 1,
      anon_sym_QMARK,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(37), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(41), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(45), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(81), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(83), 22,
      anon_sym_struct,
      anon_sym_union,
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
      sym_identifier,
  [1252] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 1,
      anon_sym_POUNDinclude,
    ACTIONS(92), 1,
      anon_sym_POUNDdefine,
    ACTIONS(95), 1,
      anon_sym_POUNDpragma,
    ACTIONS(98), 1,
      anon_sym_struct,
    ACTIONS(101), 1,
      anon_sym_union,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(113), 1,
      sym_dollar,
    STATE(61), 1,
      sym_endian_indicator,
    STATE(109), 1,
      sym__identifier,
    ACTIONS(104), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(76), 2,
      sym__type,
      sym__type_identifier,
    STATE(105), 2,
      sym__primitive_type,
      sym_primitive_type,
    STATE(20), 13,
      sym__definition,
      sym__preproc_directive,
      sym_include,
      sym_define,
      sym_pragma,
      sym_struct_definition,
      sym_union_definition,
      sym__definition_statement,
      sym_variable_definition,
      sym_variable_placement,
      sym_assignation_statement,
      sym_array_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(107), 17,
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
  [1332] = 16,
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
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      sym_dollar,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    STATE(61), 1,
      sym_endian_indicator,
    STATE(109), 1,
      sym__identifier,
    ACTIONS(17), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(76), 2,
      sym__type,
      sym__type_identifier,
    STATE(105), 2,
      sym__primitive_type,
      sym_primitive_type,
    STATE(20), 13,
      sym__definition,
      sym__preproc_directive,
      sym_include,
      sym_define,
      sym_pragma,
      sym_struct_definition,
      sym_union_definition,
      sym__definition_statement,
      sym_variable_definition,
      sym_variable_placement,
      sym_assignation_statement,
      sym_array_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(19), 17,
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
  [1412] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_padding,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
    ACTIONS(122), 1,
      sym_dollar,
    STATE(61), 1,
      sym_endian_indicator,
    STATE(130), 1,
      sym__identifier,
    ACTIONS(17), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(77), 2,
      sym__type,
      sym__type_identifier,
    STATE(105), 2,
      sym__primitive_type,
      sym_primitive_type,
    STATE(23), 6,
      sym__definition_statement,
      sym_variable_definition,
      sym_assignation_statement,
      sym_array_definition,
      sym_padding,
      aux_sym_field_list_repeat1,
    ACTIONS(19), 17,
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
  [1473] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_padding,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    ACTIONS(135), 1,
      sym_identifier,
    ACTIONS(138), 1,
      sym_dollar,
    STATE(61), 1,
      sym_endian_indicator,
    STATE(130), 1,
      sym__identifier,
    ACTIONS(129), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(77), 2,
      sym__type,
      sym__type_identifier,
    STATE(105), 2,
      sym__primitive_type,
      sym_primitive_type,
    STATE(23), 6,
      sym__definition_statement,
      sym_variable_definition,
      sym_assignation_statement,
      sym_array_definition,
      sym_padding,
      aux_sym_field_list_repeat1,
    ACTIONS(132), 17,
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
  [1534] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_padding,
    ACTIONS(122), 1,
      sym_dollar,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      sym_endian_indicator,
    STATE(130), 1,
      sym__identifier,
    ACTIONS(17), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(77), 2,
      sym__type,
      sym__type_identifier,
    STATE(105), 2,
      sym__primitive_type,
      sym_primitive_type,
    STATE(22), 6,
      sym__definition_statement,
      sym_variable_definition,
      sym_assignation_statement,
      sym_array_definition,
      sym_padding,
      aux_sym_field_list_repeat1,
    ACTIONS(19), 17,
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
  [1595] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(145), 22,
      anon_sym_struct,
      anon_sym_union,
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
      sym_identifier,
  [1630] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(149), 22,
      anon_sym_struct,
      anon_sym_union,
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
      sym_identifier,
  [1665] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(153), 22,
      anon_sym_struct,
      anon_sym_union,
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
      sym_identifier,
  [1700] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(157), 22,
      anon_sym_struct,
      anon_sym_union,
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
      sym_identifier,
  [1735] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(161), 22,
      anon_sym_struct,
      anon_sym_union,
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
      sym_identifier,
  [1770] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(165), 22,
      anon_sym_struct,
      anon_sym_union,
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
      sym_identifier,
  [1805] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(169), 22,
      anon_sym_struct,
      anon_sym_union,
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
      sym_identifier,
  [1840] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(173), 22,
      anon_sym_struct,
      anon_sym_union,
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
      sym_identifier,
  [1875] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(177), 22,
      anon_sym_struct,
      anon_sym_union,
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
      sym_identifier,
  [1910] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(181), 22,
      anon_sym_struct,
      anon_sym_union,
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
      sym_identifier,
  [1945] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(185), 22,
      anon_sym_struct,
      anon_sym_union,
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
      sym_identifier,
  [1980] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(189), 22,
      anon_sym_struct,
      anon_sym_union,
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
      sym_identifier,
  [2015] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(193), 22,
      anon_sym_struct,
      anon_sym_union,
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
      sym_identifier,
  [2050] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(197), 22,
      anon_sym_struct,
      anon_sym_union,
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
      sym_identifier,
  [2085] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(201), 22,
      anon_sym_struct,
      anon_sym_union,
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
      sym_identifier,
  [2120] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(205), 22,
      anon_sym_struct,
      anon_sym_union,
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
      sym_identifier,
  [2155] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(181), 21,
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
      sym_identifier,
  [2186] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(185), 21,
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
      sym_identifier,
  [2217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(207), 21,
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
      sym_identifier,
  [2248] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(197), 21,
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
      sym_identifier,
  [2279] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(193), 21,
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
      sym_identifier,
  [2310] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_SLASH,
    ACTIONS(43), 1,
      anon_sym_AMP,
    ACTIONS(59), 1,
      anon_sym_PIPE,
    ACTIONS(61), 1,
      anon_sym_CARET,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(65), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(67), 1,
      anon_sym_CARET_CARET,
    ACTIONS(85), 1,
      anon_sym_QMARK,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(37), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(41), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(211), 2,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(45), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2364] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_SLASH,
    ACTIONS(43), 1,
      anon_sym_AMP,
    ACTIONS(59), 1,
      anon_sym_PIPE,
    ACTIONS(61), 1,
      anon_sym_CARET,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(65), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(67), 1,
      anon_sym_CARET_CARET,
    ACTIONS(85), 1,
      anon_sym_QMARK,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(37), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(41), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(45), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2417] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_SLASH,
    ACTIONS(43), 1,
      anon_sym_AMP,
    ACTIONS(59), 1,
      anon_sym_PIPE,
    ACTIONS(61), 1,
      anon_sym_CARET,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(65), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(67), 1,
      anon_sym_CARET_CARET,
    ACTIONS(85), 1,
      anon_sym_QMARK,
    ACTIONS(215), 1,
      anon_sym_SEMI,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(37), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(41), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(45), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2470] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_SLASH,
    ACTIONS(43), 1,
      anon_sym_AMP,
    ACTIONS(59), 1,
      anon_sym_PIPE,
    ACTIONS(61), 1,
      anon_sym_CARET,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(65), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(67), 1,
      anon_sym_CARET_CARET,
    ACTIONS(85), 1,
      anon_sym_QMARK,
    ACTIONS(217), 1,
      anon_sym_SEMI,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(37), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(41), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(45), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2523] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_SLASH,
    ACTIONS(43), 1,
      anon_sym_AMP,
    ACTIONS(59), 1,
      anon_sym_PIPE,
    ACTIONS(61), 1,
      anon_sym_CARET,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(65), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(67), 1,
      anon_sym_CARET_CARET,
    ACTIONS(85), 1,
      anon_sym_QMARK,
    ACTIONS(219), 1,
      anon_sym_COLON,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(37), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(41), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(45), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2576] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      sym_identifier,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    STATE(87), 1,
      sym__offset,
    ACTIONS(227), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(225), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(46), 9,
      sym__expression,
      sym__identifier,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [2615] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(233), 1,
      sym_identifier,
    ACTIONS(227), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(235), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(15), 9,
      sym__expression,
      sym__identifier,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [2651] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(227), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(239), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(19), 9,
      sym__expression,
      sym__identifier,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [2687] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(227), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(243), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(12), 9,
      sym__expression,
      sym__identifier,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [2723] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(245), 1,
      sym_identifier,
    ACTIONS(227), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(247), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(3), 9,
      sym__expression,
      sym__identifier,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [2759] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      sym_identifier,
    ACTIONS(227), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(251), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(14), 9,
      sym__expression,
      sym__identifier,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [2795] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      sym_identifier,
    ACTIONS(227), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(255), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(16), 9,
      sym__expression,
      sym__identifier,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [2831] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(257), 1,
      sym_identifier,
    ACTIONS(227), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(259), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(6), 9,
      sym__expression,
      sym__identifier,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [2867] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(227), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(263), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(17), 9,
      sym__expression,
      sym__identifier,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [2903] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      sym_identifier,
    ACTIONS(227), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(267), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(47), 9,
      sym__expression,
      sym__identifier,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [2939] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_char,
    STATE(106), 1,
      sym_primitive_type,
    ACTIONS(269), 16,
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
  [2967] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(227), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(273), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(7), 9,
      sym__expression,
      sym__identifier,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [3003] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(275), 1,
      sym_identifier,
    ACTIONS(227), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(277), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(48), 9,
      sym__expression,
      sym__identifier,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [3039] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(279), 1,
      sym_identifier,
    ACTIONS(227), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(281), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(10), 9,
      sym__expression,
      sym__identifier,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [3075] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(283), 1,
      sym_identifier,
    ACTIONS(227), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(285), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(50), 9,
      sym__expression,
      sym__identifier,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [3111] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(227), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(289), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(49), 9,
      sym__expression,
      sym__identifier,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [3147] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      sym_identifier,
    ACTIONS(227), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(293), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(18), 9,
      sym__expression,
      sym__identifier,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [3183] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(295), 1,
      sym_identifier,
    ACTIONS(227), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(297), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(13), 9,
      sym__expression,
      sym__identifier,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [3219] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(299), 1,
      sym_identifier,
    ACTIONS(227), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(301), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(11), 9,
      sym__expression,
      sym__identifier,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [3255] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_char,
    ACTIONS(303), 16,
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
  [3280] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_endian,
    ACTIONS(309), 1,
      anon_sym_MIME,
    ACTIONS(311), 1,
      anon_sym_base_address,
    ACTIONS(313), 1,
      anon_sym_eval_depth,
    ACTIONS(315), 1,
      anon_sym_array_limit,
    ACTIONS(317), 1,
      anon_sym_pattern_limit,
    ACTIONS(319), 1,
      sym_pragma_once,
    STATE(26), 6,
      sym_pragma_endian,
      sym_pragma_mime,
      sym_pragma_base_address,
      sym_pragma_eval_depth,
      sym_pragma_array_limit,
      sym_pragma_pattern_limit,
  [3313] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(124), 1,
      sym__variable_attribute,
    ACTIONS(323), 4,
      anon_sym_hidden,
      anon_sym_inline,
      anon_sym_no_unique_address,
      anon_sym_static,
    ACTIONS(321), 6,
      anon_sym_color,
      anon_sym_name,
      anon_sym_comment,
      anon_sym_format,
      anon_sym_transform,
      anon_sym_pointer_base,
  [3334] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_AT,
    ACTIONS(327), 1,
      anon_sym_SEMI,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_LBRACK_LBRACK,
    STATE(38), 1,
      sym__declaration_finish,
    STATE(88), 1,
      sym__array_size_wrapper,
    STATE(120), 1,
      sym_attribute,
  [3359] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(333), 1,
      anon_sym_SEMI,
    STATE(44), 1,
      sym__declaration_finish,
    STATE(80), 1,
      sym__array_size_wrapper,
    STATE(127), 1,
      sym_attribute,
  [3381] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_RBRACK,
    STATE(128), 2,
      sym__array_size,
      sym__identifier,
    ACTIONS(337), 3,
      sym_identifier,
      sym_dollar,
      sym_number_literal,
  [3397] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(73), 1,
      sym__identifier_definition,
    STATE(78), 1,
      sym__identifier,
    STATE(86), 1,
      aux_sym__identifier_definition_repeat1,
    ACTIONS(339), 2,
      sym_identifier,
      sym_dollar,
  [3414] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(74), 1,
      sym__identifier_definition,
    STATE(78), 1,
      sym__identifier,
    STATE(86), 1,
      aux_sym__identifier_definition_repeat1,
    ACTIONS(339), 2,
      sym_identifier,
      sym_dollar,
  [3431] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_LBRACK,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    ACTIONS(341), 3,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
  [3446] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    ACTIONS(349), 1,
      anon_sym_LBRACK,
    ACTIONS(347), 3,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
  [3461] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(351), 1,
      anon_sym_SEMI,
    STATE(42), 1,
      sym__declaration_finish,
    STATE(127), 1,
      sym_attribute,
  [3477] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(353), 1,
      anon_sym_SEMI,
    STATE(36), 1,
      sym__declaration_finish,
    STATE(120), 1,
      sym_attribute,
  [3493] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(355), 1,
      anon_sym_SEMI,
    STATE(29), 1,
      sym__declaration_finish,
    STATE(120), 1,
      sym_attribute,
  [3509] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(83), 1,
      aux_sym__identifier_definition_repeat1,
    STATE(123), 1,
      sym__identifier,
    ACTIONS(357), 2,
      sym_identifier,
      sym_dollar,
  [3523] = 5,
    ACTIONS(360), 1,
      anon_sym_DQUOTE,
    ACTIONS(362), 1,
      aux_sym_string_literal_token1,
    ACTIONS(364), 1,
      sym_escape_sequence,
    ACTIONS(366), 1,
      sym_comment,
    STATE(85), 1,
      aux_sym_string_literal_repeat1,
  [3539] = 5,
    ACTIONS(366), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_DQUOTE,
    ACTIONS(370), 1,
      aux_sym_string_literal_token1,
    ACTIONS(373), 1,
      sym_escape_sequence,
    STATE(85), 1,
      aux_sym_string_literal_repeat1,
  [3555] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(79), 1,
      sym__identifier,
    STATE(83), 1,
      aux_sym__identifier_definition_repeat1,
    ACTIONS(376), 2,
      sym_identifier,
      sym_dollar,
  [3569] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(378), 1,
      anon_sym_SEMI,
    STATE(25), 1,
      sym__declaration_finish,
    STATE(120), 1,
      sym_attribute,
  [3585] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(380), 1,
      anon_sym_SEMI,
    STATE(35), 1,
      sym__declaration_finish,
    STATE(120), 1,
      sym_attribute,
  [3601] = 5,
    ACTIONS(366), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_DQUOTE,
    ACTIONS(384), 1,
      aux_sym_string_literal_token1,
    ACTIONS(386), 1,
      sym_escape_sequence,
    STATE(84), 1,
      aux_sym_string_literal_repeat1,
  [3617] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(388), 1,
      anon_sym_LT,
    STATE(33), 2,
      sym_system_lib_string,
      sym_string_literal,
  [3631] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(390), 1,
      anon_sym_SEMI,
    STATE(43), 1,
      sym__declaration_finish,
    STATE(127), 1,
      sym_attribute,
  [3647] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(103), 1,
      sym__identifier,
    ACTIONS(392), 2,
      sym_identifier,
      sym_dollar,
  [3658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_EQ,
    ACTIONS(396), 2,
      sym_identifier,
      sym_dollar,
  [3669] = 3,
    ACTIONS(366), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_SQUOTE,
    ACTIONS(400), 2,
      aux_sym_character_literal_token1,
      sym_escape_sequence,
  [3680] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(96), 1,
      sym__identifier,
    ACTIONS(402), 2,
      sym_identifier,
      sym_dollar,
  [3691] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LBRACE,
    STATE(81), 1,
      sym_field_list,
  [3701] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    STATE(91), 1,
      sym__array_size_wrapper,
  [3711] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 2,
      sym_identifier,
      sym_dollar,
  [3719] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 2,
      sym_identifier,
      sym_dollar,
  [3727] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    STATE(119), 1,
      sym_string_literal,
  [3737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 2,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
  [3745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 2,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
  [3753] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LBRACE,
    STATE(82), 1,
      sym_field_list,
  [3763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 2,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
  [3771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 2,
      sym_identifier,
      sym_dollar,
  [3779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 2,
      sym_identifier,
      sym_dollar,
  [3787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 2,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
  [3795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_RBRACK_RBRACK,
  [3802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_EQ,
  [3809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_GT,
  [3816] = 2,
    ACTIONS(366), 1,
      sym_comment,
    ACTIONS(430), 1,
      aux_sym_system_lib_string_token1,
  [3823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      ts_builtin_sym_end,
  [3830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      sym_endian_val,
  [3837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      sym_mime_type,
  [3844] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      sym_number_literal,
  [3851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_SEMI,
  [3858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      sym_number_literal,
  [3865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      sym_number_literal,
  [3872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_RPAREN,
  [3879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_SEMI,
  [3886] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_RBRACK_RBRACK,
  [3893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      sym_number_literal,
  [3900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_COMMA,
  [3907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_RBRACK_RBRACK,
  [3914] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_LPAREN,
  [3921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      sym_identifier,
  [3928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_SEMI,
  [3935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_RBRACK,
  [3942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_SQUOTE,
  [3949] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 59,
  [SMALL_STATE(4)] = 132,
  [SMALL_STATE(5)] = 191,
  [SMALL_STATE(6)] = 250,
  [SMALL_STATE(7)] = 333,
  [SMALL_STATE(8)] = 416,
  [SMALL_STATE(9)] = 475,
  [SMALL_STATE(10)] = 534,
  [SMALL_STATE(11)] = 611,
  [SMALL_STATE(12)] = 692,
  [SMALL_STATE(13)] = 771,
  [SMALL_STATE(14)] = 838,
  [SMALL_STATE(15)] = 913,
  [SMALL_STATE(16)] = 976,
  [SMALL_STATE(17)] = 1047,
  [SMALL_STATE(18)] = 1112,
  [SMALL_STATE(19)] = 1171,
  [SMALL_STATE(20)] = 1252,
  [SMALL_STATE(21)] = 1332,
  [SMALL_STATE(22)] = 1412,
  [SMALL_STATE(23)] = 1473,
  [SMALL_STATE(24)] = 1534,
  [SMALL_STATE(25)] = 1595,
  [SMALL_STATE(26)] = 1630,
  [SMALL_STATE(27)] = 1665,
  [SMALL_STATE(28)] = 1700,
  [SMALL_STATE(29)] = 1735,
  [SMALL_STATE(30)] = 1770,
  [SMALL_STATE(31)] = 1805,
  [SMALL_STATE(32)] = 1840,
  [SMALL_STATE(33)] = 1875,
  [SMALL_STATE(34)] = 1910,
  [SMALL_STATE(35)] = 1945,
  [SMALL_STATE(36)] = 1980,
  [SMALL_STATE(37)] = 2015,
  [SMALL_STATE(38)] = 2050,
  [SMALL_STATE(39)] = 2085,
  [SMALL_STATE(40)] = 2120,
  [SMALL_STATE(41)] = 2155,
  [SMALL_STATE(42)] = 2186,
  [SMALL_STATE(43)] = 2217,
  [SMALL_STATE(44)] = 2248,
  [SMALL_STATE(45)] = 2279,
  [SMALL_STATE(46)] = 2310,
  [SMALL_STATE(47)] = 2364,
  [SMALL_STATE(48)] = 2417,
  [SMALL_STATE(49)] = 2470,
  [SMALL_STATE(50)] = 2523,
  [SMALL_STATE(51)] = 2576,
  [SMALL_STATE(52)] = 2615,
  [SMALL_STATE(53)] = 2651,
  [SMALL_STATE(54)] = 2687,
  [SMALL_STATE(55)] = 2723,
  [SMALL_STATE(56)] = 2759,
  [SMALL_STATE(57)] = 2795,
  [SMALL_STATE(58)] = 2831,
  [SMALL_STATE(59)] = 2867,
  [SMALL_STATE(60)] = 2903,
  [SMALL_STATE(61)] = 2939,
  [SMALL_STATE(62)] = 2967,
  [SMALL_STATE(63)] = 3003,
  [SMALL_STATE(64)] = 3039,
  [SMALL_STATE(65)] = 3075,
  [SMALL_STATE(66)] = 3111,
  [SMALL_STATE(67)] = 3147,
  [SMALL_STATE(68)] = 3183,
  [SMALL_STATE(69)] = 3219,
  [SMALL_STATE(70)] = 3255,
  [SMALL_STATE(71)] = 3280,
  [SMALL_STATE(72)] = 3313,
  [SMALL_STATE(73)] = 3334,
  [SMALL_STATE(74)] = 3359,
  [SMALL_STATE(75)] = 3381,
  [SMALL_STATE(76)] = 3397,
  [SMALL_STATE(77)] = 3414,
  [SMALL_STATE(78)] = 3431,
  [SMALL_STATE(79)] = 3446,
  [SMALL_STATE(80)] = 3461,
  [SMALL_STATE(81)] = 3477,
  [SMALL_STATE(82)] = 3493,
  [SMALL_STATE(83)] = 3509,
  [SMALL_STATE(84)] = 3523,
  [SMALL_STATE(85)] = 3539,
  [SMALL_STATE(86)] = 3555,
  [SMALL_STATE(87)] = 3569,
  [SMALL_STATE(88)] = 3585,
  [SMALL_STATE(89)] = 3601,
  [SMALL_STATE(90)] = 3617,
  [SMALL_STATE(91)] = 3631,
  [SMALL_STATE(92)] = 3647,
  [SMALL_STATE(93)] = 3658,
  [SMALL_STATE(94)] = 3669,
  [SMALL_STATE(95)] = 3680,
  [SMALL_STATE(96)] = 3691,
  [SMALL_STATE(97)] = 3701,
  [SMALL_STATE(98)] = 3711,
  [SMALL_STATE(99)] = 3719,
  [SMALL_STATE(100)] = 3727,
  [SMALL_STATE(101)] = 3737,
  [SMALL_STATE(102)] = 3745,
  [SMALL_STATE(103)] = 3753,
  [SMALL_STATE(104)] = 3763,
  [SMALL_STATE(105)] = 3771,
  [SMALL_STATE(106)] = 3779,
  [SMALL_STATE(107)] = 3787,
  [SMALL_STATE(108)] = 3795,
  [SMALL_STATE(109)] = 3802,
  [SMALL_STATE(110)] = 3809,
  [SMALL_STATE(111)] = 3816,
  [SMALL_STATE(112)] = 3823,
  [SMALL_STATE(113)] = 3830,
  [SMALL_STATE(114)] = 3837,
  [SMALL_STATE(115)] = 3844,
  [SMALL_STATE(116)] = 3851,
  [SMALL_STATE(117)] = 3858,
  [SMALL_STATE(118)] = 3865,
  [SMALL_STATE(119)] = 3872,
  [SMALL_STATE(120)] = 3879,
  [SMALL_STATE(121)] = 3886,
  [SMALL_STATE(122)] = 3893,
  [SMALL_STATE(123)] = 3900,
  [SMALL_STATE(124)] = 3907,
  [SMALL_STATE(125)] = 3914,
  [SMALL_STATE(126)] = 3921,
  [SMALL_STATE(127)] = 3928,
  [SMALL_STATE(128)] = 3935,
  [SMALL_STATE(129)] = 3942,
  [SMALL_STATE(130)] = 3949,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_literal, 3),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_literal, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_numeric_operator, 3, .production_id = 12),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_numeric_operator, 3, .production_id = 12),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_numeric_operator, 5, .production_id = 17),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ternary_numeric_operator, 5, .production_id = 17),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_numeric_operator, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_numeric_operator, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_literal, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_literal, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_numeric_operator, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_numeric_operator, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(90),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(126),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(95),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(92),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(70),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(98),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(93),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(109),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(97),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(70),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(98),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(93),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(130),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_placement, 5, .production_id = 13),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_placement, 5, .production_id = 13),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_array_limit, 2, .production_id = 5),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma_array_limit, 2, .production_id = 5),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_eval_depth, 2, .production_id = 5),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma_eval_depth, 2, .production_id = 5),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_definition, 4, .production_id = 9),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union_definition, 4, .production_id = 9),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_base_address, 2, .production_id = 5),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma_base_address, 2, .production_id = 5),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_mime, 2, .production_id = 5),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma_mime, 2, .production_id = 5),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_pattern_limit, 2, .production_id = 5),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma_pattern_limit, 2, .production_id = 5),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration_finish, 2, .production_id = 11),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declaration_finish, 2, .production_id = 11),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_definition, 4, .production_id = 10),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_definition, 4, .production_id = 10),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 4, .production_id = 9),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 4, .production_id = 9),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignation_statement, 4),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignation_statement, 4),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3, .production_id = 6),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 3, .production_id = 6),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_endian, 2, .production_id = 5),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma_endian, 2, .production_id = 5),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_lib_string, 3),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_lib_string, 3),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_padding, 3, .production_id = 16),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_padding, 3, .production_id = 16),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endian_indicator, 1),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endian_indicator, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier_definition, 1, .production_id = 3),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier_definition, 1, .production_id = 3),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier_definition, 2, .production_id = 7),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier_definition, 2, .production_id = 7),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_definition_repeat1, 2, .production_id = 8), SHIFT_REPEAT(123),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(85),
  [373] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(85),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 1),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 1),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_definition_repeat1, 2, .production_id = 3),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_size_wrapper, 3, .production_id = 14),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 3),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_size_wrapper, 2),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1, .production_id = 2),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive_type, 2, .production_id = 4),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 2),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_attribute, 1, .production_id = 3),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [432] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, .production_id = 15),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_attribute, 4, .production_id = 18),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
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
