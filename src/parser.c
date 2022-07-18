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
#define STATE_COUNT 138
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 141
#define ALIAS_COUNT 1
#define TOKEN_COUNT 93
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 21

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
  anon_sym_padding = 22,
  anon_sym_LBRACK = 23,
  anon_sym_RBRACK = 24,
  anon_sym_COMMA = 25,
  anon_sym_LBRACE = 26,
  anon_sym_RBRACE = 27,
  anon_sym_LBRACK_LBRACK = 28,
  anon_sym_RBRACK_RBRACK = 29,
  anon_sym_color = 30,
  anon_sym_LPAREN = 31,
  anon_sym_RPAREN = 32,
  anon_sym_name = 33,
  anon_sym_comment = 34,
  anon_sym_format = 35,
  anon_sym_transform = 36,
  anon_sym_pointer_base = 37,
  anon_sym_hidden = 38,
  anon_sym_inline = 39,
  anon_sym_no_unique_address = 40,
  anon_sym_static = 41,
  anon_sym_be = 42,
  anon_sym_le = 43,
  anon_sym_u8 = 44,
  anon_sym_u16 = 45,
  anon_sym_u32 = 46,
  anon_sym_u64 = 47,
  anon_sym_u128 = 48,
  anon_sym_s8 = 49,
  anon_sym_s16 = 50,
  anon_sym_s32 = 51,
  anon_sym_s64 = 52,
  anon_sym_s128 = 53,
  anon_sym_float = 54,
  anon_sym_double = 55,
  anon_sym_char = 56,
  anon_sym_char16 = 57,
  anon_sym_bool = 58,
  anon_sym_str = 59,
  anon_sym_auto = 60,
  anon_sym_return = 61,
  sym_identifier = 62,
  sym_dollar = 63,
  sym_number_literal = 64,
  anon_sym_TILDE = 65,
  anon_sym_BANG = 66,
  anon_sym_PLUS = 67,
  anon_sym_DASH = 68,
  anon_sym_STAR = 69,
  anon_sym_SLASH = 70,
  anon_sym_PERCENT = 71,
  anon_sym_GT_GT = 72,
  anon_sym_LT_LT = 73,
  anon_sym_AMP = 74,
  anon_sym_PIPE = 75,
  anon_sym_CARET = 76,
  anon_sym_EQ_EQ = 77,
  anon_sym_BANG_EQ = 78,
  anon_sym_GT_EQ = 79,
  anon_sym_LT_EQ = 80,
  anon_sym_AMP_AMP = 81,
  anon_sym_PIPE_PIPE = 82,
  anon_sym_CARET_CARET = 83,
  anon_sym_QMARK = 84,
  anon_sym_COLON = 85,
  anon_sym_DQUOTE = 86,
  aux_sym_string_literal_token1 = 87,
  anon_sym_SQUOTE = 88,
  aux_sym_character_literal_token1 = 89,
  sym_boolean_literal = 90,
  sym_escape_sequence = 91,
  sym_comment = 92,
  sym_source_file = 93,
  sym__top_level_statement = 94,
  sym__preproc_directive = 95,
  sym_include = 96,
  sym_system_lib_string = 97,
  sym_define = 98,
  sym_pragma = 99,
  sym_pragma_endian = 100,
  sym_pragma_mime = 101,
  sym_pragma_base_address = 102,
  sym_pragma_eval_depth = 103,
  sym_pragma_array_limit = 104,
  sym_pragma_pattern_limit = 105,
  sym_struct_definition = 106,
  sym_union_definition = 107,
  sym__definition_statement = 108,
  sym_using_definition = 109,
  sym_variable_definition = 110,
  sym_variable_placement = 111,
  sym__offset = 112,
  sym_assignation_statement = 113,
  sym_array_definition = 114,
  sym_padding = 115,
  sym__array_size_wrapper = 116,
  sym__array_size = 117,
  sym__identifier_definition = 118,
  sym_field_list = 119,
  sym__declaration_finish = 120,
  sym_attribute = 121,
  sym__variable_attribute = 122,
  sym__type = 123,
  sym__primitive_type = 124,
  sym_endian_indicator = 125,
  sym_primitive_type = 126,
  sym__expression = 127,
  sym__identifier = 128,
  sym__type_identifier = 129,
  sym__number = 130,
  sym__operator = 131,
  sym_unary_numeric_operator = 132,
  sym_binary_numeric_operator = 133,
  sym_ternary_numeric_operator = 134,
  sym_string_literal = 135,
  sym_character_literal = 136,
  aux_sym_source_file_repeat1 = 137,
  aux_sym__identifier_definition_repeat1 = 138,
  aux_sym_field_list_repeat1 = 139,
  aux_sym_string_literal_repeat1 = 140,
  alias_sym_type_identifier = 141,
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
  [anon_sym_using] = anon_sym_using,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_AT] = anon_sym_AT,
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
  [2] = {.index = 0, .length = 2},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 5},
  [8] = {.index = 12, .length = 2},
  [9] = {.index = 14, .length = 2},
  [10] = {.index = 16, .length = 3},
  [11] = {.index = 19, .length = 6},
  [12] = {.index = 25, .length = 1},
  [13] = {.index = 26, .length = 3},
  [14] = {.index = 29, .length = 3},
  [15] = {.index = 32, .length = 6},
  [16] = {.index = 38, .length = 1},
  [17] = {.index = 39, .length = 2},
  [18] = {.index = 41, .length = 2},
  [19] = {.index = 43, .length = 3},
  [20] = {.index = 46, .length = 2},
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
    {field_attribute, 2, .inherited = true},
    {field_endian, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_type, 0},
    {field_type, 0, .inherited = true},
  [12] =
    {field_name, 0, .inherited = true},
    {field_name, 1},
  [14] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [16] =
    {field_attribute, 3, .inherited = true},
    {field_body, 2},
    {field_name, 1},
  [19] =
    {field_attribute, 3, .inherited = true},
    {field_endian, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_size, 2, .inherited = true},
    {field_type, 0},
    {field_type, 0, .inherited = true},
  [25] =
    {field_attribute, 0},
  [26] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [29] =
    {field_endian, 3, .inherited = true},
    {field_name, 1},
    {field_type, 3, .inherited = true},
  [32] =
    {field_attribute, 4, .inherited = true},
    {field_endian, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_offset, 3},
    {field_type, 0},
    {field_type, 0, .inherited = true},
  [38] =
    {field_size, 1},
  [39] =
    {field_name, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [41] =
    {field_attribute, 2, .inherited = true},
    {field_size, 1, .inherited = true},
  [43] =
    {field_cond, 0},
    {field_iffalse, 4},
    {field_iftrue, 2},
  [46] =
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
      if (eof) ADVANCE(244);
      if (lookahead == '!') ADVANCE(414);
      if (lookahead == '"') ADVANCE(434);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '$') ADVANCE(400);
      if (lookahead == '%') ADVANCE(419);
      if (lookahead == '&') ADVANCE(422);
      if (lookahead == '\'') ADVANCE(440);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == ')') ADVANCE(294);
      if (lookahead == '*') ADVANCE(417);
      if (lookahead == '+') ADVANCE(415);
      if (lookahead == ',') ADVANCE(287);
      if (lookahead == '-') ADVANCE(416);
      if (lookahead == '/') ADVANCE(418);
      if (lookahead == ':') ADVANCE(433);
      if (lookahead == ';') ADVANCE(280);
      if (lookahead == '<') ADVANCE(247);
      if (lookahead == '=') ADVANCE(279);
      if (lookahead == '>') ADVANCE(260);
      if (lookahead == '?') ADVANCE(432);
      if (lookahead == '@') ADVANCE(281);
      if (lookahead == 'M') ADVANCE(45);
      if (lookahead == '[') ADVANCE(284);
      if (lookahead == '\\') SKIP(240)
      if (lookahead == ']') ADVANCE(286);
      if (lookahead == '^') ADVANCE(424);
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'b') ADVANCE(56);
      if (lookahead == 'c') ADVANCE(119);
      if (lookahead == 'd') ADVANCE(171);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == 'f') ADVANCE(57);
      if (lookahead == 'h') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(161);
      if (lookahead == 'l') ADVANCE(91);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(155);
      if (lookahead == 'p') ADVANCE(59);
      if (lookahead == 'r') ADVANCE(104);
      if (lookahead == 's') ADVANCE(29);
      if (lookahead == 't') ADVANCE(181);
      if (lookahead == 'u') ADVANCE(32);
      if (lookahead == '{') ADVANCE(288);
      if (lookahead == '|') ADVANCE(423);
      if (lookahead == '}') ADVANCE(289);
      if (lookahead == '~') ADVANCE(412);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(17)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(24)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(16)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(25)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(25)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(19)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '"') ADVANCE(434);
      if (lookahead == '/') ADVANCE(435);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(438);
      if (lookahead != 0) ADVANCE(439);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(447);
      if (lookahead == '\r') ADVANCE(446);
      if (lookahead == 'U') ADVANCE(236);
      if (lookahead == 'u') ADVANCE(232);
      if (lookahead == 'x') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (lookahead != 0) ADVANCE(446);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '\'') ADVANCE(440);
      if (lookahead == '/') ADVANCE(443);
      if (lookahead == '\\') ADVANCE(442);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(444);
      if (lookahead != 0) ADVANCE(441);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(26)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '\r') SKIP(14)
      END_STATE();
    case 16:
      if (lookahead == '!') ADVANCE(413);
      if (lookahead == '"') ADVANCE(434);
      if (lookahead == '$') ADVANCE(400);
      if (lookahead == '\'') ADVANCE(440);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '0') ADVANCE(408);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'f') ADVANCE(361);
      if (lookahead == 't') ADVANCE(391);
      if (lookahead == '~') ADVANCE(412);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(434);
      if (lookahead == '$') ADVANCE(400);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '0') ADVANCE(408);
      if (lookahead == '<') ADVANCE(246);
      if (lookahead == '=') ADVANCE(278);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == ']') ADVANCE(285);
      if (lookahead == 'a') ADVANCE(396);
      if (lookahead == 'b') ADVANCE(367);
      if (lookahead == 'c') ADVANCE(372);
      if (lookahead == 'd') ADVANCE(384);
      if (lookahead == 'f') ADVANCE(379);
      if (lookahead == 'l') ADVANCE(368);
      if (lookahead == 'p') ADVANCE(358);
      if (lookahead == 's') ADVANCE(346);
      if (lookahead == 'u') ADVANCE(348);
      if (lookahead == '}') ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(434);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      END_STATE();
    case 19:
      if (lookahead == '$') ADVANCE(400);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '0') ADVANCE(408);
      if (lookahead == ';') ADVANCE(280);
      if (lookahead == '=') ADVANCE(278);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == ']') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 20:
      if (lookahead == '\'') ADVANCE(440);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '/') ADVANCE(451);
      END_STATE();
    case 22:
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '/') ADVANCE(450);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == '*') ADVANCE(22);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'a') ADVANCE(396);
      if (lookahead == 'b') ADVANCE(367);
      if (lookahead == 'c') ADVANCE(372);
      if (lookahead == 'd') ADVANCE(384);
      if (lookahead == 'f') ADVANCE(379);
      if (lookahead == 'l') ADVANCE(368);
      if (lookahead == 's') ADVANCE(346);
      if (lookahead == 'u') ADVANCE(348);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 25:
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'a') ADVANCE(217);
      if (lookahead == 'b') ADVANCE(173);
      if (lookahead == 'c') ADVANCE(118);
      if (lookahead == 'd') ADVANCE(171);
      if (lookahead == 'f') ADVANCE(137);
      if (lookahead == 's') ADVANCE(30);
      if (lookahead == 'u') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      END_STATE();
    case 26:
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '\\') SKIP(15)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == '/') ADVANCE(237);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '0') ADVANCE(402);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(403);
      END_STATE();
    case 29:
      if (lookahead == '1') ADVANCE(33);
      if (lookahead == '3') ADVANCE(34);
      if (lookahead == '6') ADVANCE(37);
      if (lookahead == '8') ADVANCE(318);
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 30:
      if (lookahead == '1') ADVANCE(33);
      if (lookahead == '3') ADVANCE(34);
      if (lookahead == '6') ADVANCE(37);
      if (lookahead == '8') ADVANCE(318);
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 31:
      if (lookahead == '1') ADVANCE(36);
      if (lookahead == '3') ADVANCE(35);
      if (lookahead == '6') ADVANCE(38);
      if (lookahead == '8') ADVANCE(308);
      END_STATE();
    case 32:
      if (lookahead == '1') ADVANCE(36);
      if (lookahead == '3') ADVANCE(35);
      if (lookahead == '6') ADVANCE(38);
      if (lookahead == '8') ADVANCE(308);
      if (lookahead == 'n') ADVANCE(127);
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 33:
      if (lookahead == '2') ADVANCE(40);
      if (lookahead == '6') ADVANCE(320);
      END_STATE();
    case 34:
      if (lookahead == '2') ADVANCE(322);
      END_STATE();
    case 35:
      if (lookahead == '2') ADVANCE(312);
      END_STATE();
    case 36:
      if (lookahead == '2') ADVANCE(41);
      if (lookahead == '6') ADVANCE(310);
      END_STATE();
    case 37:
      if (lookahead == '4') ADVANCE(324);
      END_STATE();
    case 38:
      if (lookahead == '4') ADVANCE(314);
      END_STATE();
    case 39:
      if (lookahead == '6') ADVANCE(334);
      END_STATE();
    case 40:
      if (lookahead == '8') ADVANCE(326);
      END_STATE();
    case 41:
      if (lookahead == '8') ADVANCE(316);
      END_STATE();
    case 42:
      if (lookahead == '=') ADVANCE(426);
      END_STATE();
    case 43:
      if (lookahead == '=') ADVANCE(425);
      END_STATE();
    case 44:
      if (lookahead == 'E') ADVANCE(265);
      END_STATE();
    case 45:
      if (lookahead == 'I') ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'M') ADVANCE(44);
      END_STATE();
    case 47:
      if (lookahead == '[') ADVANCE(290);
      END_STATE();
    case 48:
      if (lookahead == ']') ADVANCE(291);
      END_STATE();
    case 49:
      if (lookahead == '_') ADVANCE(220);
      END_STATE();
    case 50:
      if (lookahead == '_') ADVANCE(74);
      END_STATE();
    case 51:
      if (lookahead == '_') ADVANCE(70);
      END_STATE();
    case 52:
      if (lookahead == '_') ADVANCE(141);
      END_STATE();
    case 53:
      if (lookahead == '_') ADVANCE(85);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(146);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(72);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(198);
      if (lookahead == 'e') ADVANCE(304);
      if (lookahead == 'i') ADVANCE(114);
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(176);
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(87);
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(224);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(262);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(160);
      if (lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'r') ADVANCE(340);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(203);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(202);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 73:
      if (lookahead == 'b') ADVANCE(142);
      END_STATE();
    case 74:
      if (lookahead == 'b') ADVANCE(71);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(303);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(139);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(205);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(162);
      if (lookahead == 'p') ADVANCE(186);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(83);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(129);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(107);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(192);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(88);
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(131);
      END_STATE();
    case 89:
      if (lookahead == 'd') ADVANCE(194);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(89);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(306);
      if (lookahead == 'i') ADVANCE(212);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(445);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 112:
      if (lookahead == 'f') ADVANCE(177);
      END_STATE();
    case 113:
      if (lookahead == 'f') ADVANCE(134);
      END_STATE();
    case 114:
      if (lookahead == 'g') ADVANCE(264);
      END_STATE();
    case 115:
      if (lookahead == 'g') ADVANCE(276);
      END_STATE();
    case 116:
      if (lookahead == 'g') ADVANCE(282);
      END_STATE();
    case 117:
      if (lookahead == 'g') ADVANCE(150);
      END_STATE();
    case 118:
      if (lookahead == 'h') ADVANCE(63);
      END_STATE();
    case 119:
      if (lookahead == 'h') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 120:
      if (lookahead == 'h') ADVANCE(268);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(223);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(208);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(336);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(176);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(221);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(175);
      if (lookahead == 'm') ADVANCE(149);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(201);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(135);
      END_STATE();
    case 147:
      if (lookahead == 'm') ADVANCE(298);
      END_STATE();
    case 148:
      if (lookahead == 'm') ADVANCE(94);
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 149:
      if (lookahead == 'm') ADVANCE(109);
      END_STATE();
    case 150:
      if (lookahead == 'm') ADVANCE(61);
      END_STATE();
    case 151:
      if (lookahead == 'm') ADVANCE(132);
      END_STATE();
    case 152:
      if (lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 153:
      if (lookahead == 'm') ADVANCE(133);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(81);
      if (lookahead == 'v') ADVANCE(64);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(274);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(263);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(300);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(344);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(342);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 179:
      if (lookahead == 'p') ADVANCE(207);
      END_STATE();
    case 180:
      if (lookahead == 'q') ADVANCE(222);
      END_STATE();
    case 181:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 182:
      if (lookahead == 'r') ADVANCE(332);
      END_STATE();
    case 183:
      if (lookahead == 'r') ADVANCE(292);
      END_STATE();
    case 184:
      if (lookahead == 'r') ADVANCE(338);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(187);
      if (lookahead == 'u') ADVANCE(211);
      END_STATE();
    case 194:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 195:
      if (lookahead == 's') ADVANCE(267);
      END_STATE();
    case 196:
      if (lookahead == 's') ADVANCE(302);
      END_STATE();
    case 197:
      if (lookahead == 's') ADVANCE(112);
      END_STATE();
    case 198:
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 199:
      if (lookahead == 's') ADVANCE(195);
      END_STATE();
    case 200:
      if (lookahead == 's') ADVANCE(196);
      END_STATE();
    case 201:
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 202:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(328);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(297);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(296);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(269);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 217:
      if (lookahead == 'u') ADVANCE(211);
      END_STATE();
    case 218:
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 219:
      if (lookahead == 'u') ADVANCE(190);
      END_STATE();
    case 220:
      if (lookahead == 'u') ADVANCE(165);
      END_STATE();
    case 221:
      if (lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 222:
      if (lookahead == 'u') ADVANCE(111);
      END_STATE();
    case 223:
      if (lookahead == 'v') ADVANCE(93);
      END_STATE();
    case 224:
      if (lookahead == 'y') ADVANCE(52);
      END_STATE();
    case 225:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(405);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(407);
      END_STATE();
    case 226:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(406);
      END_STATE();
    case 227:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      END_STATE();
    case 228:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(404);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(411);
      END_STATE();
    case 229:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(446);
      END_STATE();
    case 230:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(229);
      END_STATE();
    case 231:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(230);
      END_STATE();
    case 232:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(231);
      END_STATE();
    case 233:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(232);
      END_STATE();
    case 234:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      END_STATE();
    case 235:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(234);
      END_STATE();
    case 236:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      END_STATE();
    case 237:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 238:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(451);
      if (lookahead == '\r') ADVANCE(452);
      END_STATE();
    case 239:
      if (eof) ADVANCE(244);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 240:
      if (eof) ADVANCE(244);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(239)
      END_STATE();
    case 241:
      if (eof) ADVANCE(244);
      if (lookahead == '\n') SKIP(243)
      END_STATE();
    case 242:
      if (eof) ADVANCE(244);
      if (lookahead == '\n') SKIP(243)
      if (lookahead == '\r') SKIP(241)
      END_STATE();
    case 243:
      if (eof) ADVANCE(244);
      if (lookahead == '!') ADVANCE(42);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '$') ADVANCE(400);
      if (lookahead == '%') ADVANCE(419);
      if (lookahead == '&') ADVANCE(422);
      if (lookahead == ')') ADVANCE(294);
      if (lookahead == '*') ADVANCE(417);
      if (lookahead == '+') ADVANCE(415);
      if (lookahead == '-') ADVANCE(416);
      if (lookahead == '/') ADVANCE(418);
      if (lookahead == ':') ADVANCE(433);
      if (lookahead == ';') ADVANCE(280);
      if (lookahead == '<') ADVANCE(247);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '>') ADVANCE(260);
      if (lookahead == '?') ADVANCE(432);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == '\\') SKIP(242)
      if (lookahead == ']') ADVANCE(48);
      if (lookahead == '^') ADVANCE(424);
      if (lookahead == 'a') ADVANCE(396);
      if (lookahead == 'b') ADVANCE(367);
      if (lookahead == 'c') ADVANCE(372);
      if (lookahead == 'd') ADVANCE(384);
      if (lookahead == 'f') ADVANCE(379);
      if (lookahead == 'l') ADVANCE(368);
      if (lookahead == 's') ADVANCE(345);
      if (lookahead == 'u') ADVANCE(347);
      if (lookahead == '|') ADVANCE(423);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(243)
      if (('A' <= lookahead && lookahead <= '_') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_POUNDinclude);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(421);
      if (lookahead == '=') ADVANCE(428);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '*') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(253);
      if (lookahead == '\\') ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead == '\n') ADVANCE(451);
      if (lookahead == '\r') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(255);
      if (lookahead == '\\') ADVANCE(259);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead == '\r') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(256);
      if (lookahead == '\\') ADVANCE(258);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead == '*') ADVANCE(253);
      if (lookahead == '/') ADVANCE(255);
      if (lookahead == '\\') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '>') ADVANCE(256);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead == '*') ADVANCE(252);
      if (lookahead == '/') ADVANCE(256);
      if (lookahead == '\\') ADVANCE(248);
      if (lookahead == '\n' ||
          lookahead == '>') ADVANCE(23);
      if (lookahead != 0) ADVANCE(253);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead == '*') ADVANCE(252);
      if (lookahead == '\\') ADVANCE(248);
      if (lookahead == '\n' ||
          lookahead == '>') ADVANCE(23);
      if (lookahead != 0) ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead == '/') ADVANCE(251);
      if (lookahead == '\\') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '>') ADVANCE(256);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead == '>') ADVANCE(451);
      if (lookahead == '\\') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead == '\\') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '>') ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead == '\n' ||
          lookahead == '>') ADVANCE(451);
      if (lookahead == '\\') ADVANCE(249);
      if (lookahead != 0) ADVANCE(255);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(256);
      if (lookahead == '\\') ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(255);
      if (lookahead == '\\') ADVANCE(249);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(427);
      if (lookahead == '>') ADVANCE(420);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_POUNDdefine);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_POUNDpragma);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_endian);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_endian_val);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_MIME);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_mime_type);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_base_address);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_eval_depth);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_array_limit);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_pattern_limit);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_pragma_once);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_union);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_using);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(425);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_padding);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_padding);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[') ADVANCE(290);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']') ADVANCE(291);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_comment);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_transform);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_pointer_base);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_hidden);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_no_unique_address);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_be);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_be);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_le);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_le);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_u16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_u32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_u64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_u128);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_u128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_s8);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_s8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_s16);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_s16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_s32);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_s32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_s64);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_s64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_s128);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_s128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_char);
      if (lookahead == '1') ADVANCE(39);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_char);
      if (lookahead == '1') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_char16);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_char16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_str);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_str);
      if (lookahead == 'u') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_str);
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_str);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_auto);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_auto);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(349);
      if (lookahead == '3') ADVANCE(350);
      if (lookahead == '6') ADVANCE(353);
      if (lookahead == '8') ADVANCE(319);
      if (lookahead == 't') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(349);
      if (lookahead == '3') ADVANCE(350);
      if (lookahead == '6') ADVANCE(353);
      if (lookahead == '8') ADVANCE(319);
      if (lookahead == 't') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(352);
      if (lookahead == '3') ADVANCE(351);
      if (lookahead == '6') ADVANCE(354);
      if (lookahead == '8') ADVANCE(309);
      if (lookahead == 'n') ADVANCE(374);
      if (lookahead == 's') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(352);
      if (lookahead == '3') ADVANCE(351);
      if (lookahead == '6') ADVANCE(354);
      if (lookahead == '8') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(356);
      if (lookahead == '6') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(357);
      if (lookahead == '6') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(305);
      if (lookahead == 'o') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_dollar);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_number_literal);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'b') ADVANCE(225);
      if (lookahead == 'o') ADVANCE(226);
      if (lookahead == 'x') ADVANCE(228);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(227);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(227);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(411);
      if (('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(404);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(401);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(405);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(407);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(401);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(406);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'U') ADVANCE(410);
      if (lookahead == 'b') ADVANCE(225);
      if (lookahead == 'o') ADVANCE(226);
      if (lookahead == 'x') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(227);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'U') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(227);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(411);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(426);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '/') ADVANCE(451);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(429);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(430);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '^') ADVANCE(431);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_CARET_CARET);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(437);
      if (lookahead == '/') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(439);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(436);
      if (lookahead == '/') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(437);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(437);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(435);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(439);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(439);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_character_literal_token1);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_character_literal_token1);
      if (lookahead == '\n') ADVANCE(447);
      if (lookahead == '\r') ADVANCE(446);
      if (lookahead == 'U') ADVANCE(236);
      if (lookahead == 'u') ADVANCE(232);
      if (lookahead == 'x') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (lookahead != 0) ADVANCE(446);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_character_literal_token1);
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '/') ADVANCE(451);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_character_literal_token1);
      if (lookahead == '\\') ADVANCE(12);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_boolean_literal);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\\') ADVANCE(12);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(451);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(451);
      if (lookahead == '\\') ADVANCE(238);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 243},
  [2] = {.lex_state = 243},
  [3] = {.lex_state = 243},
  [4] = {.lex_state = 243},
  [5] = {.lex_state = 243},
  [6] = {.lex_state = 243},
  [7] = {.lex_state = 243},
  [8] = {.lex_state = 243},
  [9] = {.lex_state = 243},
  [10] = {.lex_state = 243},
  [11] = {.lex_state = 243},
  [12] = {.lex_state = 243},
  [13] = {.lex_state = 243},
  [14] = {.lex_state = 243},
  [15] = {.lex_state = 243},
  [16] = {.lex_state = 243},
  [17] = {.lex_state = 243},
  [18] = {.lex_state = 243},
  [19] = {.lex_state = 243},
  [20] = {.lex_state = 243},
  [21] = {.lex_state = 243},
  [22] = {.lex_state = 17},
  [23] = {.lex_state = 17},
  [24] = {.lex_state = 17},
  [25] = {.lex_state = 243},
  [26] = {.lex_state = 243},
  [27] = {.lex_state = 243},
  [28] = {.lex_state = 243},
  [29] = {.lex_state = 243},
  [30] = {.lex_state = 243},
  [31] = {.lex_state = 243},
  [32] = {.lex_state = 243},
  [33] = {.lex_state = 243},
  [34] = {.lex_state = 243},
  [35] = {.lex_state = 243},
  [36] = {.lex_state = 243},
  [37] = {.lex_state = 243},
  [38] = {.lex_state = 243},
  [39] = {.lex_state = 243},
  [40] = {.lex_state = 243},
  [41] = {.lex_state = 243},
  [42] = {.lex_state = 24},
  [43] = {.lex_state = 17},
  [44] = {.lex_state = 17},
  [45] = {.lex_state = 17},
  [46] = {.lex_state = 17},
  [47] = {.lex_state = 17},
  [48] = {.lex_state = 243},
  [49] = {.lex_state = 243},
  [50] = {.lex_state = 243},
  [51] = {.lex_state = 243},
  [52] = {.lex_state = 243},
  [53] = {.lex_state = 16},
  [54] = {.lex_state = 16},
  [55] = {.lex_state = 16},
  [56] = {.lex_state = 25},
  [57] = {.lex_state = 16},
  [58] = {.lex_state = 16},
  [59] = {.lex_state = 16},
  [60] = {.lex_state = 16},
  [61] = {.lex_state = 16},
  [62] = {.lex_state = 16},
  [63] = {.lex_state = 16},
  [64] = {.lex_state = 16},
  [65] = {.lex_state = 16},
  [66] = {.lex_state = 16},
  [67] = {.lex_state = 16},
  [68] = {.lex_state = 16},
  [69] = {.lex_state = 16},
  [70] = {.lex_state = 16},
  [71] = {.lex_state = 16},
  [72] = {.lex_state = 25},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 19},
  [78] = {.lex_state = 19},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 19},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 19},
  [85] = {.lex_state = 11},
  [86] = {.lex_state = 11},
  [87] = {.lex_state = 11},
  [88] = {.lex_state = 19},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 17},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 19},
  [95] = {.lex_state = 19},
  [96] = {.lex_state = 19},
  [97] = {.lex_state = 19},
  [98] = {.lex_state = 19},
  [99] = {.lex_state = 13},
  [100] = {.lex_state = 19},
  [101] = {.lex_state = 19},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 19},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 243},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 17},
  [114] = {.lex_state = 254},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 26},
  [120] = {.lex_state = 17},
  [121] = {.lex_state = 17},
  [122] = {.lex_state = 17},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 17},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 19},
  [128] = {.lex_state = 243},
  [129] = {.lex_state = 243},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 17},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 19},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 17},
  [137] = {.lex_state = 17},
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
    [sym_source_file] = STATE(118),
    [sym__top_level_statement] = STATE(21),
    [sym__preproc_directive] = STATE(21),
    [sym_include] = STATE(21),
    [sym_define] = STATE(21),
    [sym_pragma] = STATE(21),
    [sym_struct_definition] = STATE(21),
    [sym_union_definition] = STATE(21),
    [sym__definition_statement] = STATE(21),
    [sym_using_definition] = STATE(21),
    [sym_variable_definition] = STATE(21),
    [sym_variable_placement] = STATE(21),
    [sym_assignation_statement] = STATE(21),
    [sym_array_definition] = STATE(21),
    [sym__type] = STATE(81),
    [sym__primitive_type] = STATE(100),
    [sym_endian_indicator] = STATE(56),
    [sym_primitive_type] = STATE(101),
    [sym__identifier] = STATE(113),
    [sym__type_identifier] = STATE(81),
    [aux_sym_source_file_repeat1] = STATE(21),
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
    [sym_identifier] = ACTIONS(23),
    [sym_dollar] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 23,
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
    ACTIONS(29), 29,
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
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
  [60] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_AMP,
    ACTIONS(47), 1,
      anon_sym_CARET,
    ACTIONS(33), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(43), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(49), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(31), 13,
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
    ACTIONS(35), 24,
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
      sym_identifier,
      anon_sym_PIPE,
  [136] = 3,
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
    ACTIONS(53), 29,
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
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
  [196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 23,
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
    ACTIONS(57), 29,
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
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
  [256] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_AMP,
    ACTIONS(47), 1,
      anon_sym_CARET,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      anon_sym_AMP_AMP,
    ACTIONS(67), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(69), 1,
      anon_sym_CARET_CARET,
    ACTIONS(33), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(43), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(49), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(59), 10,
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
    ACTIONS(61), 23,
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
      sym_identifier,
  [340] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_AMP,
    ACTIONS(47), 1,
      anon_sym_CARET,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      anon_sym_AMP_AMP,
    ACTIONS(67), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(69), 1,
      anon_sym_CARET_CARET,
    ACTIONS(33), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(43), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(49), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(71), 10,
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
    ACTIONS(73), 23,
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
      sym_identifier,
  [424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 23,
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
    ACTIONS(77), 29,
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
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
  [484] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 23,
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
    ACTIONS(81), 29,
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
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
  [544] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_SLASH,
    ACTIONS(37), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(43), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(31), 17,
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
    ACTIONS(35), 28,
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
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
  [612] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_AMP,
    ACTIONS(47), 1,
      anon_sym_CARET,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(33), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(43), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(49), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(31), 13,
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
    ACTIONS(35), 23,
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
      sym_identifier,
  [690] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_AMP,
    ACTIONS(47), 1,
      anon_sym_CARET,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      anon_sym_AMP_AMP,
    ACTIONS(69), 1,
      anon_sym_CARET_CARET,
    ACTIONS(33), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(43), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(49), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(31), 11,
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
    ACTIONS(35), 23,
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
      sym_identifier,
  [772] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_AMP,
    ACTIONS(47), 1,
      anon_sym_CARET,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(69), 1,
      anon_sym_CARET_CARET,
    ACTIONS(33), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(43), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(49), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(31), 12,
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
    ACTIONS(35), 23,
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
      sym_identifier,
  [852] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_AMP,
    ACTIONS(33), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(43), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(49), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(31), 13,
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
    ACTIONS(35), 25,
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
      sym_identifier,
      anon_sym_PIPE,
      anon_sym_CARET,
  [926] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_SLASH,
    ACTIONS(39), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(31), 21,
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
    ACTIONS(35), 28,
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
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
  [990] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_SLASH,
    ACTIONS(33), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(43), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(49), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(31), 13,
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
    ACTIONS(35), 26,
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
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
  [1062] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
    ACTIONS(35), 29,
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
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
  [1122] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_SLASH,
    ACTIONS(37), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(31), 19,
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
    ACTIONS(35), 28,
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
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
  [1188] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 1,
      anon_sym_POUNDinclude,
    ACTIONS(88), 1,
      anon_sym_POUNDdefine,
    ACTIONS(91), 1,
      anon_sym_POUNDpragma,
    ACTIONS(94), 1,
      anon_sym_struct,
    ACTIONS(97), 1,
      anon_sym_union,
    ACTIONS(100), 1,
      anon_sym_using,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(112), 1,
      sym_dollar,
    STATE(56), 1,
      sym_endian_indicator,
    STATE(100), 1,
      sym__primitive_type,
    STATE(101), 1,
      sym_primitive_type,
    STATE(113), 1,
      sym__identifier,
    ACTIONS(103), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(81), 2,
      sym__type,
      sym__type_identifier,
    STATE(19), 14,
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
      aux_sym_source_file_repeat1,
    ACTIONS(106), 17,
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
  [1274] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_AMP,
    ACTIONS(47), 1,
      anon_sym_CARET,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      anon_sym_AMP_AMP,
    ACTIONS(67), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(69), 1,
      anon_sym_CARET_CARET,
    ACTIONS(119), 1,
      anon_sym_QMARK,
    ACTIONS(33), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(43), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(49), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(115), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(117), 23,
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
      sym_identifier,
  [1356] = 18,
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
      sym_identifier,
    ACTIONS(25), 1,
      sym_dollar,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    STATE(56), 1,
      sym_endian_indicator,
    STATE(100), 1,
      sym__primitive_type,
    STATE(101), 1,
      sym_primitive_type,
    STATE(113), 1,
      sym__identifier,
    ACTIONS(19), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(81), 2,
      sym__type,
      sym__type_identifier,
    STATE(19), 14,
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
      aux_sym_source_file_repeat1,
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
  [1442] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(123), 1,
      anon_sym_padding,
    ACTIONS(125), 1,
      anon_sym_RBRACE,
    ACTIONS(127), 1,
      sym_dollar,
    STATE(56), 1,
      sym_endian_indicator,
    STATE(100), 1,
      sym__primitive_type,
    STATE(101), 1,
      sym_primitive_type,
    STATE(137), 1,
      sym__identifier,
    ACTIONS(19), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(78), 2,
      sym__type,
      sym__type_identifier,
    STATE(23), 6,
      sym__definition_statement,
      sym_variable_definition,
      sym_assignation_statement,
      sym_array_definition,
      sym_padding,
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
  [1505] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_padding,
    ACTIONS(132), 1,
      anon_sym_RBRACE,
    ACTIONS(140), 1,
      sym_identifier,
    ACTIONS(143), 1,
      sym_dollar,
    STATE(56), 1,
      sym_endian_indicator,
    STATE(100), 1,
      sym__primitive_type,
    STATE(101), 1,
      sym_primitive_type,
    STATE(137), 1,
      sym__identifier,
    ACTIONS(134), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(78), 2,
      sym__type,
      sym__type_identifier,
    STATE(23), 6,
      sym__definition_statement,
      sym_variable_definition,
      sym_assignation_statement,
      sym_array_definition,
      sym_padding,
      aux_sym_field_list_repeat1,
    ACTIONS(137), 17,
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
  [1568] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(123), 1,
      anon_sym_padding,
    ACTIONS(127), 1,
      sym_dollar,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym_endian_indicator,
    STATE(100), 1,
      sym__primitive_type,
    STATE(101), 1,
      sym_primitive_type,
    STATE(137), 1,
      sym__identifier,
    ACTIONS(19), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(78), 2,
      sym__type,
      sym__type_identifier,
    STATE(22), 6,
      sym__definition_statement,
      sym_variable_definition,
      sym_assignation_statement,
      sym_array_definition,
      sym_padding,
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
  [1631] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(150), 23,
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
      sym_identifier,
  [1667] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(154), 23,
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
      sym_identifier,
  [1703] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(158), 23,
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
      sym_identifier,
  [1739] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(162), 23,
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
      sym_identifier,
  [1775] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(166), 23,
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
      sym_identifier,
  [1811] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(170), 23,
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
      sym_identifier,
  [1847] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(174), 23,
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
      sym_identifier,
  [1883] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(178), 23,
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
      sym_identifier,
  [1919] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(182), 23,
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
      sym_identifier,
  [1955] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(186), 23,
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
      sym_identifier,
  [1991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(190), 23,
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
      sym_identifier,
  [2027] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(194), 23,
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
      sym_identifier,
  [2063] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(198), 23,
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
      sym_identifier,
  [2099] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(202), 23,
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
      sym_identifier,
  [2135] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(206), 23,
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
      sym_identifier,
  [2171] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(210), 23,
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
      sym_identifier,
  [2207] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(214), 23,
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
      sym_identifier,
  [2243] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym_identifier,
    STATE(56), 1,
      sym_endian_indicator,
    STATE(100), 1,
      sym__primitive_type,
    STATE(101), 1,
      sym_primitive_type,
    ACTIONS(19), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(132), 2,
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
  [2286] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(218), 21,
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
  [2317] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(158), 21,
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
  [2348] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(150), 21,
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
  [2379] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(198), 21,
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
  [2410] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(182), 21,
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
  [2441] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_AMP,
    ACTIONS(47), 1,
      anon_sym_CARET,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      anon_sym_AMP_AMP,
    ACTIONS(67), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(69), 1,
      anon_sym_CARET_CARET,
    ACTIONS(119), 1,
      anon_sym_QMARK,
    ACTIONS(33), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(43), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(222), 2,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(49), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2495] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_AMP,
    ACTIONS(47), 1,
      anon_sym_CARET,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      anon_sym_AMP_AMP,
    ACTIONS(67), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(69), 1,
      anon_sym_CARET_CARET,
    ACTIONS(119), 1,
      anon_sym_QMARK,
    ACTIONS(224), 1,
      anon_sym_RPAREN,
    ACTIONS(33), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(43), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(49), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2548] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_AMP,
    ACTIONS(47), 1,
      anon_sym_CARET,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      anon_sym_AMP_AMP,
    ACTIONS(67), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(69), 1,
      anon_sym_CARET_CARET,
    ACTIONS(119), 1,
      anon_sym_QMARK,
    ACTIONS(226), 1,
      anon_sym_COLON,
    ACTIONS(33), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(43), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(49), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2601] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_AMP,
    ACTIONS(47), 1,
      anon_sym_CARET,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      anon_sym_AMP_AMP,
    ACTIONS(67), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(69), 1,
      anon_sym_CARET_CARET,
    ACTIONS(119), 1,
      anon_sym_QMARK,
    ACTIONS(228), 1,
      anon_sym_SEMI,
    ACTIONS(33), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(43), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(49), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2654] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_AMP,
    ACTIONS(47), 1,
      anon_sym_CARET,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      anon_sym_AMP_AMP,
    ACTIONS(67), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(69), 1,
      anon_sym_CARET_CARET,
    ACTIONS(119), 1,
      anon_sym_QMARK,
    ACTIONS(230), 1,
      anon_sym_SEMI,
    ACTIONS(33), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(43), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(49), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2707] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      anon_sym_SQUOTE,
    STATE(91), 1,
      sym__offset,
    ACTIONS(238), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(236), 3,
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
  [2746] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      anon_sym_SQUOTE,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(238), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(246), 3,
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
  [2782] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      anon_sym_SQUOTE,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(238), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(250), 3,
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
  [2818] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_char,
    STATE(96), 1,
      sym_primitive_type,
    ACTIONS(252), 16,
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
  [2846] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      anon_sym_SQUOTE,
    ACTIONS(254), 1,
      sym_identifier,
    ACTIONS(238), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(256), 3,
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
  [2882] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      anon_sym_SQUOTE,
    ACTIONS(258), 1,
      sym_identifier,
    ACTIONS(238), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(260), 3,
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
  [2918] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      anon_sym_SQUOTE,
    ACTIONS(262), 1,
      sym_identifier,
    ACTIONS(238), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(264), 3,
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
  [2954] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      anon_sym_SQUOTE,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(238), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(268), 3,
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
  [2990] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      anon_sym_SQUOTE,
    ACTIONS(270), 1,
      sym_identifier,
    ACTIONS(238), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(272), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(51), 9,
      sym__expression,
      sym__identifier,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [3026] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      anon_sym_SQUOTE,
    ACTIONS(274), 1,
      sym_identifier,
    ACTIONS(238), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(276), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(52), 9,
      sym__expression,
      sym__identifier,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [3062] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      sym_identifier,
    ACTIONS(238), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(280), 3,
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
  [3098] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      anon_sym_SQUOTE,
    ACTIONS(282), 1,
      sym_identifier,
    ACTIONS(238), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(284), 3,
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
  [3134] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      anon_sym_SQUOTE,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(238), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(288), 3,
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
  [3170] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      anon_sym_SQUOTE,
    ACTIONS(290), 1,
      sym_identifier,
    ACTIONS(238), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(292), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(20), 9,
      sym__expression,
      sym__identifier,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [3206] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      anon_sym_SQUOTE,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(238), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(296), 3,
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
  [3242] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      anon_sym_SQUOTE,
    ACTIONS(298), 1,
      sym_identifier,
    ACTIONS(238), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(300), 3,
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
  [3278] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      sym_identifier,
    ACTIONS(238), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(304), 3,
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
  [3314] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      anon_sym_SQUOTE,
    ACTIONS(306), 1,
      sym_identifier,
    ACTIONS(238), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(308), 3,
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
  [3350] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      anon_sym_SQUOTE,
    ACTIONS(310), 1,
      sym_identifier,
    ACTIONS(238), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(312), 3,
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
  [3386] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_char,
    ACTIONS(314), 16,
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
  [3411] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_endian,
    ACTIONS(320), 1,
      anon_sym_MIME,
    ACTIONS(322), 1,
      anon_sym_base_address,
    ACTIONS(324), 1,
      anon_sym_eval_depth,
    ACTIONS(326), 1,
      anon_sym_array_limit,
    ACTIONS(328), 1,
      anon_sym_pattern_limit,
    ACTIONS(330), 1,
      sym_pragma_once,
    STATE(28), 6,
      sym_pragma_endian,
      sym_pragma_mime,
      sym_pragma_base_address,
      sym_pragma_eval_depth,
      sym_pragma_array_limit,
      sym_pragma_pattern_limit,
  [3444] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(129), 1,
      sym__variable_attribute,
    ACTIONS(334), 4,
      anon_sym_hidden,
      anon_sym_inline,
      anon_sym_no_unique_address,
      anon_sym_static,
    ACTIONS(332), 6,
      anon_sym_color,
      anon_sym_name,
      anon_sym_comment,
      anon_sym_format,
      anon_sym_transform,
      anon_sym_pointer_base,
  [3465] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_SEMI,
    ACTIONS(338), 1,
      anon_sym_AT,
    ACTIONS(340), 1,
      anon_sym_LBRACK,
    ACTIONS(342), 1,
      anon_sym_LBRACK_LBRACK,
    STATE(25), 1,
      sym__declaration_finish,
    STATE(92), 1,
      sym__array_size_wrapper,
    STATE(116), 1,
      sym_attribute,
  [3490] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_LBRACK,
    ACTIONS(342), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    STATE(45), 1,
      sym__declaration_finish,
    STATE(83), 1,
      sym__array_size_wrapper,
    STATE(134), 1,
      sym_attribute,
  [3512] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_RBRACK,
    STATE(131), 2,
      sym__array_size,
      sym__identifier,
    ACTIONS(348), 3,
      sym_identifier,
      sym_dollar,
      sym_number_literal,
  [3528] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(76), 1,
      sym__identifier_definition,
    STATE(79), 1,
      sym__identifier,
    STATE(84), 1,
      aux_sym__identifier_definition_repeat1,
    ACTIONS(350), 2,
      sym_identifier,
      sym_dollar,
  [3545] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_LBRACK,
    ACTIONS(356), 1,
      anon_sym_COMMA,
    ACTIONS(352), 3,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_LBRACK_LBRACK,
  [3560] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_COMMA,
    ACTIONS(360), 1,
      anon_sym_LBRACK,
    ACTIONS(358), 3,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_LBRACK_LBRACK,
  [3575] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(75), 1,
      sym__identifier_definition,
    STATE(79), 1,
      sym__identifier,
    STATE(84), 1,
      aux_sym__identifier_definition_repeat1,
    ACTIONS(350), 2,
      sym_identifier,
      sym_dollar,
  [3592] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(362), 1,
      anon_sym_SEMI,
    STATE(43), 1,
      sym__declaration_finish,
    STATE(134), 1,
      sym_attribute,
  [3608] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(364), 1,
      anon_sym_SEMI,
    STATE(44), 1,
      sym__declaration_finish,
    STATE(134), 1,
      sym_attribute,
  [3624] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(80), 1,
      sym__identifier,
    STATE(88), 1,
      aux_sym__identifier_definition_repeat1,
    ACTIONS(366), 2,
      sym_identifier,
      sym_dollar,
  [3638] = 5,
    ACTIONS(368), 1,
      anon_sym_DQUOTE,
    ACTIONS(370), 1,
      aux_sym_string_literal_token1,
    ACTIONS(372), 1,
      sym_escape_sequence,
    ACTIONS(374), 1,
      sym_comment,
    STATE(86), 1,
      aux_sym_string_literal_repeat1,
  [3654] = 5,
    ACTIONS(374), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_DQUOTE,
    ACTIONS(378), 1,
      aux_sym_string_literal_token1,
    ACTIONS(381), 1,
      sym_escape_sequence,
    STATE(86), 1,
      aux_sym_string_literal_repeat1,
  [3670] = 5,
    ACTIONS(374), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_DQUOTE,
    ACTIONS(386), 1,
      aux_sym_string_literal_token1,
    ACTIONS(388), 1,
      sym_escape_sequence,
    STATE(85), 1,
      aux_sym_string_literal_repeat1,
  [3686] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(88), 1,
      aux_sym__identifier_definition_repeat1,
    STATE(124), 1,
      sym__identifier,
    ACTIONS(390), 2,
      sym_identifier,
      sym_dollar,
  [3700] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(393), 1,
      anon_sym_SEMI,
    STATE(34), 1,
      sym__declaration_finish,
    STATE(116), 1,
      sym_attribute,
  [3716] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(395), 1,
      anon_sym_LT,
    STATE(31), 2,
      sym_system_lib_string,
      sym_string_literal,
  [3730] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(397), 1,
      anon_sym_SEMI,
    STATE(29), 1,
      sym__declaration_finish,
    STATE(116), 1,
      sym_attribute,
  [3746] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(399), 1,
      anon_sym_SEMI,
    STATE(27), 1,
      sym__declaration_finish,
    STATE(116), 1,
      sym_attribute,
  [3762] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(401), 1,
      anon_sym_SEMI,
    STATE(30), 1,
      sym__declaration_finish,
    STATE(116), 1,
      sym_attribute,
  [3778] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(103), 1,
      sym__identifier,
    ACTIONS(403), 2,
      sym_identifier,
      sym_dollar,
  [3789] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(109), 1,
      sym__identifier,
    ACTIONS(405), 2,
      sym_identifier,
      sym_dollar,
  [3800] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 3,
      anon_sym_SEMI,
      sym_identifier,
      sym_dollar,
  [3809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 3,
      anon_sym_SEMI,
      sym_identifier,
      sym_dollar,
  [3818] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_EQ,
    ACTIONS(413), 2,
      sym_identifier,
      sym_dollar,
  [3829] = 3,
    ACTIONS(374), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_SQUOTE,
    ACTIONS(417), 2,
      aux_sym_character_literal_token1,
      sym_escape_sequence,
  [3840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 3,
      anon_sym_SEMI,
      sym_identifier,
      sym_dollar,
  [3849] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 3,
      anon_sym_SEMI,
      sym_identifier,
      sym_dollar,
  [3858] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_LBRACK,
    STATE(82), 1,
      sym__array_size_wrapper,
  [3868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_LBRACE,
    STATE(89), 1,
      sym_field_list,
  [3878] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 2,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
  [3886] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    STATE(126), 1,
      sym_string_literal,
  [3896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 2,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
  [3904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 2,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
  [3912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 2,
      sym_identifier,
      sym_dollar,
  [3920] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_LBRACE,
    STATE(93), 1,
      sym_field_list,
  [3930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 2,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
  [3938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_RBRACK_RBRACK,
  [3945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_SQUOTE,
  [3952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_EQ,
  [3959] = 2,
    ACTIONS(374), 1,
      sym_comment,
    ACTIONS(443), 1,
      aux_sym_system_lib_string_token1,
  [3966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_GT,
  [3973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_SEMI,
  [3980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      sym_endian_val,
  [3987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      ts_builtin_sym_end,
  [3994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      sym_mime_type,
  [4001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      sym_number_literal,
  [4008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym_number_literal,
  [4015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      sym_number_literal,
  [4022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_SEMI,
  [4029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_COMMA,
  [4036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      sym_number_literal,
  [4043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_RPAREN,
  [4050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      sym_identifier,
  [4057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_RBRACK_RBRACK,
  [4064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_RBRACK_RBRACK,
  [4071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_LPAREN,
  [4078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_RBRACK,
  [4085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_SEMI,
  [4092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      sym_identifier,
  [4099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_SEMI,
  [4106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_SEMI,
  [4113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_EQ,
  [4120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 60,
  [SMALL_STATE(4)] = 136,
  [SMALL_STATE(5)] = 196,
  [SMALL_STATE(6)] = 256,
  [SMALL_STATE(7)] = 340,
  [SMALL_STATE(8)] = 424,
  [SMALL_STATE(9)] = 484,
  [SMALL_STATE(10)] = 544,
  [SMALL_STATE(11)] = 612,
  [SMALL_STATE(12)] = 690,
  [SMALL_STATE(13)] = 772,
  [SMALL_STATE(14)] = 852,
  [SMALL_STATE(15)] = 926,
  [SMALL_STATE(16)] = 990,
  [SMALL_STATE(17)] = 1062,
  [SMALL_STATE(18)] = 1122,
  [SMALL_STATE(19)] = 1188,
  [SMALL_STATE(20)] = 1274,
  [SMALL_STATE(21)] = 1356,
  [SMALL_STATE(22)] = 1442,
  [SMALL_STATE(23)] = 1505,
  [SMALL_STATE(24)] = 1568,
  [SMALL_STATE(25)] = 1631,
  [SMALL_STATE(26)] = 1667,
  [SMALL_STATE(27)] = 1703,
  [SMALL_STATE(28)] = 1739,
  [SMALL_STATE(29)] = 1775,
  [SMALL_STATE(30)] = 1811,
  [SMALL_STATE(31)] = 1847,
  [SMALL_STATE(32)] = 1883,
  [SMALL_STATE(33)] = 1919,
  [SMALL_STATE(34)] = 1955,
  [SMALL_STATE(35)] = 1991,
  [SMALL_STATE(36)] = 2027,
  [SMALL_STATE(37)] = 2063,
  [SMALL_STATE(38)] = 2099,
  [SMALL_STATE(39)] = 2135,
  [SMALL_STATE(40)] = 2171,
  [SMALL_STATE(41)] = 2207,
  [SMALL_STATE(42)] = 2243,
  [SMALL_STATE(43)] = 2286,
  [SMALL_STATE(44)] = 2317,
  [SMALL_STATE(45)] = 2348,
  [SMALL_STATE(46)] = 2379,
  [SMALL_STATE(47)] = 2410,
  [SMALL_STATE(48)] = 2441,
  [SMALL_STATE(49)] = 2495,
  [SMALL_STATE(50)] = 2548,
  [SMALL_STATE(51)] = 2601,
  [SMALL_STATE(52)] = 2654,
  [SMALL_STATE(53)] = 2707,
  [SMALL_STATE(54)] = 2746,
  [SMALL_STATE(55)] = 2782,
  [SMALL_STATE(56)] = 2818,
  [SMALL_STATE(57)] = 2846,
  [SMALL_STATE(58)] = 2882,
  [SMALL_STATE(59)] = 2918,
  [SMALL_STATE(60)] = 2954,
  [SMALL_STATE(61)] = 2990,
  [SMALL_STATE(62)] = 3026,
  [SMALL_STATE(63)] = 3062,
  [SMALL_STATE(64)] = 3098,
  [SMALL_STATE(65)] = 3134,
  [SMALL_STATE(66)] = 3170,
  [SMALL_STATE(67)] = 3206,
  [SMALL_STATE(68)] = 3242,
  [SMALL_STATE(69)] = 3278,
  [SMALL_STATE(70)] = 3314,
  [SMALL_STATE(71)] = 3350,
  [SMALL_STATE(72)] = 3386,
  [SMALL_STATE(73)] = 3411,
  [SMALL_STATE(74)] = 3444,
  [SMALL_STATE(75)] = 3465,
  [SMALL_STATE(76)] = 3490,
  [SMALL_STATE(77)] = 3512,
  [SMALL_STATE(78)] = 3528,
  [SMALL_STATE(79)] = 3545,
  [SMALL_STATE(80)] = 3560,
  [SMALL_STATE(81)] = 3575,
  [SMALL_STATE(82)] = 3592,
  [SMALL_STATE(83)] = 3608,
  [SMALL_STATE(84)] = 3624,
  [SMALL_STATE(85)] = 3638,
  [SMALL_STATE(86)] = 3654,
  [SMALL_STATE(87)] = 3670,
  [SMALL_STATE(88)] = 3686,
  [SMALL_STATE(89)] = 3700,
  [SMALL_STATE(90)] = 3716,
  [SMALL_STATE(91)] = 3730,
  [SMALL_STATE(92)] = 3746,
  [SMALL_STATE(93)] = 3762,
  [SMALL_STATE(94)] = 3778,
  [SMALL_STATE(95)] = 3789,
  [SMALL_STATE(96)] = 3800,
  [SMALL_STATE(97)] = 3809,
  [SMALL_STATE(98)] = 3818,
  [SMALL_STATE(99)] = 3829,
  [SMALL_STATE(100)] = 3840,
  [SMALL_STATE(101)] = 3849,
  [SMALL_STATE(102)] = 3858,
  [SMALL_STATE(103)] = 3868,
  [SMALL_STATE(104)] = 3878,
  [SMALL_STATE(105)] = 3886,
  [SMALL_STATE(106)] = 3896,
  [SMALL_STATE(107)] = 3904,
  [SMALL_STATE(108)] = 3912,
  [SMALL_STATE(109)] = 3920,
  [SMALL_STATE(110)] = 3930,
  [SMALL_STATE(111)] = 3938,
  [SMALL_STATE(112)] = 3945,
  [SMALL_STATE(113)] = 3952,
  [SMALL_STATE(114)] = 3959,
  [SMALL_STATE(115)] = 3966,
  [SMALL_STATE(116)] = 3973,
  [SMALL_STATE(117)] = 3980,
  [SMALL_STATE(118)] = 3987,
  [SMALL_STATE(119)] = 3994,
  [SMALL_STATE(120)] = 4001,
  [SMALL_STATE(121)] = 4008,
  [SMALL_STATE(122)] = 4015,
  [SMALL_STATE(123)] = 4022,
  [SMALL_STATE(124)] = 4029,
  [SMALL_STATE(125)] = 4036,
  [SMALL_STATE(126)] = 4043,
  [SMALL_STATE(127)] = 4050,
  [SMALL_STATE(128)] = 4057,
  [SMALL_STATE(129)] = 4064,
  [SMALL_STATE(130)] = 4071,
  [SMALL_STATE(131)] = 4078,
  [SMALL_STATE(132)] = 4085,
  [SMALL_STATE(133)] = 4092,
  [SMALL_STATE(134)] = 4099,
  [SMALL_STATE(135)] = 4106,
  [SMALL_STATE(136)] = 4113,
  [SMALL_STATE(137)] = 4120,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_numeric_operator, 3),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_numeric_operator, 3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_numeric_operator, 3, .production_id = 13),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_numeric_operator, 3, .production_id = 13),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_numeric_operator, 5, .production_id = 19),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ternary_numeric_operator, 5, .production_id = 19),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_numeric_operator, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_numeric_operator, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_literal, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_literal, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_literal, 3),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_literal, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(90),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(133),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(94),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(95),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(127),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(72),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(97),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(98),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(113),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(102),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(72),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(97),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(98),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(137),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3, .production_id = 7),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 3, .production_id = 7),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_definition, 5, .production_id = 14),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using_definition, 5, .production_id = 14),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_definition, 4, .production_id = 11),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_definition, 4, .production_id = 11),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 2),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_placement, 5, .production_id = 15),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_placement, 5, .production_id = 15),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_definition, 4, .production_id = 10),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union_definition, 4, .production_id = 10),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_eval_depth, 2, .production_id = 6),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma_eval_depth, 2, .production_id = 6),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignation_statement, 4),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignation_statement, 4),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 4, .production_id = 10),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 4, .production_id = 10),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_base_address, 2, .production_id = 6),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma_base_address, 2, .production_id = 6),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_pattern_limit, 2, .production_id = 6),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma_pattern_limit, 2, .production_id = 6),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration_finish, 2, .production_id = 12),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declaration_finish, 2, .production_id = 12),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_mime, 2, .production_id = 6),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma_mime, 2, .production_id = 6),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_endian, 2, .production_id = 6),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma_endian, 2, .production_id = 6),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_lib_string, 3),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_lib_string, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_array_limit, 2, .production_id = 6),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma_array_limit, 2, .production_id = 6),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_padding, 3, .production_id = 18),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_padding, 3, .production_id = 18),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endian_indicator, 1),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endian_indicator, 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier_definition, 1, .production_id = 4),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier_definition, 1, .production_id = 4),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier_definition, 2, .production_id = 8),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier_definition, 2, .production_id = 8),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(86),
  [381] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(86),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_definition_repeat1, 2, .production_id = 9), SHIFT_REPEAT(124),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive_type, 2, .production_id = 5),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 1),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 1),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1, .production_id = 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive_type, 1, .production_id = 3),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_size_wrapper, 2),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_size_wrapper, 3, .production_id = 16),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 3),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_definition_repeat1, 2, .production_id = 4),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 2),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_attribute, 1, .production_id = 4),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [451] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, .production_id = 17),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_attribute, 4, .production_id = 20),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
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
