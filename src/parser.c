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
#define STATE_COUNT 145
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 148
#define ALIAS_COUNT 2
#define TOKEN_COUNT 97
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 23

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
  anon_sym_DOT = 66,
  anon_sym_parent = 67,
  sym_number_literal = 68,
  anon_sym_TILDE = 69,
  anon_sym_BANG = 70,
  anon_sym_PLUS = 71,
  anon_sym_DASH = 72,
  anon_sym_STAR = 73,
  anon_sym_SLASH = 74,
  anon_sym_PERCENT = 75,
  anon_sym_GT_GT = 76,
  anon_sym_LT_LT = 77,
  anon_sym_AMP = 78,
  anon_sym_PIPE = 79,
  anon_sym_CARET = 80,
  anon_sym_EQ_EQ = 81,
  anon_sym_BANG_EQ = 82,
  anon_sym_GT_EQ = 83,
  anon_sym_LT_EQ = 84,
  anon_sym_AMP_AMP = 85,
  anon_sym_PIPE_PIPE = 86,
  anon_sym_CARET_CARET = 87,
  anon_sym_QMARK = 88,
  anon_sym_COLON = 89,
  anon_sym_DQUOTE = 90,
  aux_sym_string_literal_token1 = 91,
  anon_sym_SQUOTE = 92,
  aux_sym_character_literal_token1 = 93,
  sym_boolean_literal = 94,
  sym_escape_sequence = 95,
  sym_comment = 96,
  sym_source_file = 97,
  sym__top_level_statement = 98,
  sym__preproc_directive = 99,
  sym_include = 100,
  sym_system_lib_string = 101,
  sym_define = 102,
  sym_pragma = 103,
  sym_pragma_endian = 104,
  sym_pragma_mime = 105,
  sym_pragma_base_address = 106,
  sym_pragma_eval_depth = 107,
  sym_pragma_array_limit = 108,
  sym_pragma_pattern_limit = 109,
  sym_struct_definition = 110,
  sym_union_definition = 111,
  sym__definition_statement = 112,
  sym_using_definition = 113,
  sym_variable_definition = 114,
  sym_variable_placement = 115,
  sym__offset = 116,
  sym_assignation_statement = 117,
  sym_array_definition = 118,
  sym_padding = 119,
  sym__array_size_wrapper = 120,
  sym__array_size = 121,
  sym__identifier_definition = 122,
  sym_field_list = 123,
  sym__declaration_finish = 124,
  sym_attribute = 125,
  sym__variable_attribute = 126,
  sym__type = 127,
  sym__primitive_type = 128,
  sym_endian_indicator = 129,
  sym_primitive_type = 130,
  sym__expression = 131,
  sym__identifier = 132,
  sym__type_identifier = 133,
  sym__field_identifier = 134,
  sym_field_expression = 135,
  sym_parent_access = 136,
  sym__number = 137,
  sym__operator = 138,
  sym_unary_numeric_operator = 139,
  sym_binary_numeric_operator = 140,
  sym_ternary_numeric_operator = 141,
  sym_string_literal = 142,
  sym_character_literal = 143,
  aux_sym_source_file_repeat1 = 144,
  aux_sym__identifier_definition_repeat1 = 145,
  aux_sym_field_list_repeat1 = 146,
  aux_sym_string_literal_repeat1 = 147,
  alias_sym_field_identifier = 148,
  alias_sym_type_identifier = 149,
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
  [anon_sym_DOT] = ".",
  [anon_sym_parent] = "parent",
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
  [sym__field_identifier] = "_field_identifier",
  [sym_field_expression] = "field_expression",
  [sym_parent_access] = "parent_access",
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
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_parent] = anon_sym_parent,
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
  [sym__field_identifier] = sym__field_identifier,
  [sym_field_expression] = sym_field_expression,
  [sym_parent_access] = sym_parent_access,
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_parent] = {
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
  [sym__field_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_field_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_parent_access] = {
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
  field_endian = 4,
  field_field = 5,
  field_iffalse = 6,
  field_iftrue = 7,
  field_left = 8,
  field_name = 9,
  field_offset = 10,
  field_operator = 11,
  field_parent = 12,
  field_right = 13,
  field_size = 14,
  field_type = 15,
  field_value = 16,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_attribute] = "attribute",
  [field_body] = "body",
  [field_cond] = "cond",
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
  [8] = {.index = 7, .length = 2},
  [9] = {.index = 9, .length = 5},
  [10] = {.index = 14, .length = 2},
  [11] = {.index = 16, .length = 2},
  [12] = {.index = 18, .length = 3},
  [13] = {.index = 21, .length = 6},
  [14] = {.index = 27, .length = 1},
  [15] = {.index = 28, .length = 3},
  [16] = {.index = 31, .length = 3},
  [17] = {.index = 34, .length = 6},
  [18] = {.index = 40, .length = 1},
  [19] = {.index = 41, .length = 2},
  [20] = {.index = 43, .length = 2},
  [21] = {.index = 45, .length = 3},
  [22] = {.index = 48, .length = 2},
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
    {field_field, 2},
    {field_parent, 0},
  [9] =
    {field_attribute, 2, .inherited = true},
    {field_endian, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_type, 0},
    {field_type, 0, .inherited = true},
  [14] =
    {field_name, 0, .inherited = true},
    {field_name, 1},
  [16] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [18] =
    {field_attribute, 3, .inherited = true},
    {field_body, 2},
    {field_name, 1},
  [21] =
    {field_attribute, 3, .inherited = true},
    {field_endian, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_size, 2, .inherited = true},
    {field_type, 0},
    {field_type, 0, .inherited = true},
  [27] =
    {field_attribute, 0},
  [28] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [31] =
    {field_endian, 3, .inherited = true},
    {field_name, 1},
    {field_type, 3, .inherited = true},
  [34] =
    {field_attribute, 4, .inherited = true},
    {field_endian, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_offset, 3},
    {field_type, 0},
    {field_type, 0, .inherited = true},
  [40] =
    {field_size, 1},
  [41] =
    {field_name, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [43] =
    {field_attribute, 2, .inherited = true},
    {field_size, 1, .inherited = true},
  [45] =
    {field_cond, 0},
    {field_iffalse, 4},
    {field_iftrue, 2},
  [48] =
    {field_name, 0},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_type_identifier,
  },
  [7] = {
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
      if (eof) ADVANCE(251);
      if (lookahead == '!') ADVANCE(431);
      if (lookahead == '"') ADVANCE(453);
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '$') ADVANCE(414);
      if (lookahead == '%') ADVANCE(438);
      if (lookahead == '&') ADVANCE(441);
      if (lookahead == '\'') ADVANCE(459);
      if (lookahead == '(') ADVANCE(302);
      if (lookahead == ')') ADVANCE(303);
      if (lookahead == '*') ADVANCE(436);
      if (lookahead == '+') ADVANCE(433);
      if (lookahead == ',') ADVANCE(296);
      if (lookahead == '-') ADVANCE(435);
      if (lookahead == '.') ADVANCE(415);
      if (lookahead == '/') ADVANCE(437);
      if (lookahead == ':') ADVANCE(452);
      if (lookahead == ';') ADVANCE(287);
      if (lookahead == '<') ADVANCE(254);
      if (lookahead == '=') ADVANCE(286);
      if (lookahead == '>') ADVANCE(267);
      if (lookahead == '?') ADVANCE(451);
      if (lookahead == '@') ADVANCE(288);
      if (lookahead == 'M') ADVANCE(47);
      if (lookahead == '[') ADVANCE(293);
      if (lookahead == '\\') SKIP(244)
      if (lookahead == ']') ADVANCE(295);
      if (lookahead == '^') ADVANCE(443);
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == 'b') ADVANCE(57);
      if (lookahead == 'c') ADVANCE(121);
      if (lookahead == 'd') ADVANCE(174);
      if (lookahead == 'e') ADVANCE(156);
      if (lookahead == 'f') ADVANCE(58);
      if (lookahead == 'h') ADVANCE(125);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 'l') ADVANCE(92);
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead == 'o') ADVANCE(157);
      if (lookahead == 'p') ADVANCE(60);
      if (lookahead == 'r') ADVANCE(105);
      if (lookahead == 's') ADVANCE(30);
      if (lookahead == 't') ADVANCE(184);
      if (lookahead == 'u') ADVANCE(33);
      if (lookahead == '{') ADVANCE(297);
      if (lookahead == '|') ADVANCE(442);
      if (lookahead == '}') ADVANCE(298);
      if (lookahead == '~') ADVANCE(429);
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
      if (lookahead == '"') ADVANCE(453);
      if (lookahead == '/') ADVANCE(454);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(457);
      if (lookahead != 0) ADVANCE(458);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(466);
      if (lookahead == '\r') ADVANCE(465);
      if (lookahead == 'U') ADVANCE(240);
      if (lookahead == 'u') ADVANCE(236);
      if (lookahead == 'x') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(468);
      if (lookahead != 0) ADVANCE(465);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '\'') ADVANCE(459);
      if (lookahead == '/') ADVANCE(462);
      if (lookahead == '\\') ADVANCE(461);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(463);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(26)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '\r') SKIP(14)
      END_STATE();
    case 16:
      if (lookahead == '!') ADVANCE(430);
      if (lookahead == '"') ADVANCE(453);
      if (lookahead == '$') ADVANCE(414);
      if (lookahead == '\'') ADVANCE(459);
      if (lookahead == '(') ADVANCE(302);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '0') ADVANCE(425);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'f') ADVANCE(370);
      if (lookahead == 'p') ADVANCE(371);
      if (lookahead == 't') ADVANCE(403);
      if (lookahead == '~') ADVANCE(429);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(453);
      if (lookahead == '$') ADVANCE(414);
      if (lookahead == '+') ADVANCE(44);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '0') ADVANCE(425);
      if (lookahead == '<') ADVANCE(253);
      if (lookahead == '=') ADVANCE(285);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == ']') ADVANCE(49);
      if (lookahead == 'a') ADVANCE(410);
      if (lookahead == 'b') ADVANCE(377);
      if (lookahead == 'c') ADVANCE(383);
      if (lookahead == 'd') ADVANCE(396);
      if (lookahead == 'f') ADVANCE(390);
      if (lookahead == 'l') ADVANCE(378);
      if (lookahead == 'p') ADVANCE(367);
      if (lookahead == 's') ADVANCE(355);
      if (lookahead == 'u') ADVANCE(357);
      if (lookahead == '}') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(453);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      END_STATE();
    case 19:
      if (lookahead == '$') ADVANCE(414);
      if (lookahead == '+') ADVANCE(44);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(415);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '0') ADVANCE(425);
      if (lookahead == ';') ADVANCE(287);
      if (lookahead == '=') ADVANCE(285);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == ']') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 20:
      if (lookahead == '\'') ADVANCE(459);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '/') ADVANCE(470);
      END_STATE();
    case 22:
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '/') ADVANCE(469);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == '*') ADVANCE(22);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'a') ADVANCE(410);
      if (lookahead == 'b') ADVANCE(377);
      if (lookahead == 'c') ADVANCE(383);
      if (lookahead == 'd') ADVANCE(396);
      if (lookahead == 'f') ADVANCE(390);
      if (lookahead == 'l') ADVANCE(378);
      if (lookahead == 's') ADVANCE(355);
      if (lookahead == 'u') ADVANCE(357);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 25:
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'a') ADVANCE(221);
      if (lookahead == 'b') ADVANCE(176);
      if (lookahead == 'c') ADVANCE(120);
      if (lookahead == 'd') ADVANCE(174);
      if (lookahead == 'f') ADVANCE(139);
      if (lookahead == 's') ADVANCE(31);
      if (lookahead == 'u') ADVANCE(32);
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
      if (lookahead == '/') ADVANCE(241);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '0') ADVANCE(419);
      if (lookahead == '=') ADVANCE(290);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(420);
      END_STATE();
    case 29:
      if (lookahead == '0') ADVANCE(419);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(420);
      END_STATE();
    case 30:
      if (lookahead == '1') ADVANCE(34);
      if (lookahead == '3') ADVANCE(35);
      if (lookahead == '6') ADVANCE(38);
      if (lookahead == '8') ADVANCE(327);
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 31:
      if (lookahead == '1') ADVANCE(34);
      if (lookahead == '3') ADVANCE(35);
      if (lookahead == '6') ADVANCE(38);
      if (lookahead == '8') ADVANCE(327);
      if (lookahead == 't') ADVANCE(187);
      END_STATE();
    case 32:
      if (lookahead == '1') ADVANCE(37);
      if (lookahead == '3') ADVANCE(36);
      if (lookahead == '6') ADVANCE(39);
      if (lookahead == '8') ADVANCE(317);
      END_STATE();
    case 33:
      if (lookahead == '1') ADVANCE(37);
      if (lookahead == '3') ADVANCE(36);
      if (lookahead == '6') ADVANCE(39);
      if (lookahead == '8') ADVANCE(317);
      if (lookahead == 'n') ADVANCE(129);
      if (lookahead == 's') ADVANCE(130);
      END_STATE();
    case 34:
      if (lookahead == '2') ADVANCE(41);
      if (lookahead == '6') ADVANCE(329);
      END_STATE();
    case 35:
      if (lookahead == '2') ADVANCE(331);
      END_STATE();
    case 36:
      if (lookahead == '2') ADVANCE(321);
      END_STATE();
    case 37:
      if (lookahead == '2') ADVANCE(42);
      if (lookahead == '6') ADVANCE(319);
      END_STATE();
    case 38:
      if (lookahead == '4') ADVANCE(333);
      END_STATE();
    case 39:
      if (lookahead == '4') ADVANCE(323);
      END_STATE();
    case 40:
      if (lookahead == '6') ADVANCE(343);
      END_STATE();
    case 41:
      if (lookahead == '8') ADVANCE(335);
      END_STATE();
    case 42:
      if (lookahead == '8') ADVANCE(325);
      END_STATE();
    case 43:
      if (lookahead == '=') ADVANCE(445);
      END_STATE();
    case 44:
      if (lookahead == '=') ADVANCE(289);
      END_STATE();
    case 45:
      if (lookahead == '=') ADVANCE(444);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(272);
      END_STATE();
    case 47:
      if (lookahead == 'I') ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'M') ADVANCE(46);
      END_STATE();
    case 49:
      if (lookahead == ']') ADVANCE(300);
      END_STATE();
    case 50:
      if (lookahead == '_') ADVANCE(224);
      END_STATE();
    case 51:
      if (lookahead == '_') ADVANCE(75);
      END_STATE();
    case 52:
      if (lookahead == '_') ADVANCE(71);
      END_STATE();
    case 53:
      if (lookahead == '_') ADVANCE(143);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(86);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(148);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(73);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead == 'i') ADVANCE(116);
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(146);
      if (lookahead == 'l') ADVANCE(179);
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(150);
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(228);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(269);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(217);
      if (lookahead == 'r') ADVANCE(349);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(207);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 74:
      if (lookahead == 'b') ADVANCE(144);
      END_STATE();
    case 75:
      if (lookahead == 'b') ADVANCE(72);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(312);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(96);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(141);
      END_STATE();
    case 79:
      if (lookahead == 'c') ADVANCE(209);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(93);
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead == 'p') ADVANCE(189);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(131);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(85);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(108);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(195);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(102);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(89);
      if (lookahead == 'r') ADVANCE(110);
      if (lookahead == 't') ADVANCE(218);
      END_STATE();
    case 89:
      if (lookahead == 'd') ADVANCE(133);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(197);
      END_STATE();
    case 91:
      if (lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(315);
      if (lookahead == 'i') ADVANCE(216);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(464);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(310);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 114:
      if (lookahead == 'f') ADVANCE(180);
      END_STATE();
    case 115:
      if (lookahead == 'f') ADVANCE(136);
      END_STATE();
    case 116:
      if (lookahead == 'g') ADVANCE(271);
      END_STATE();
    case 117:
      if (lookahead == 'g') ADVANCE(283);
      END_STATE();
    case 118:
      if (lookahead == 'g') ADVANCE(291);
      END_STATE();
    case 119:
      if (lookahead == 'g') ADVANCE(151);
      END_STATE();
    case 120:
      if (lookahead == 'h') ADVANCE(64);
      END_STATE();
    case 121:
      if (lookahead == 'h') ADVANCE(64);
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 122:
      if (lookahead == 'h') ADVANCE(275);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(227);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(212);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(345);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(225);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(178);
      if (lookahead == 'm') ADVANCE(155);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(204);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 149:
      if (lookahead == 'm') ADVANCE(307);
      END_STATE();
    case 150:
      if (lookahead == 'm') ADVANCE(95);
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 151:
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 152:
      if (lookahead == 'm') ADVANCE(134);
      END_STATE();
    case 153:
      if (lookahead == 'm') ADVANCE(69);
      END_STATE();
    case 154:
      if (lookahead == 'm') ADVANCE(135);
      END_STATE();
    case 155:
      if (lookahead == 'm') ADVANCE(112);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(82);
      if (lookahead == 'v') ADVANCE(65);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(281);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(270);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(309);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(353);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(210);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(351);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(191);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 182:
      if (lookahead == 'p') ADVANCE(211);
      END_STATE();
    case 183:
      if (lookahead == 'q') ADVANCE(226);
      END_STATE();
    case 184:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(341);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(301);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(347);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 194:
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(190);
      if (lookahead == 'u') ADVANCE(215);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 198:
      if (lookahead == 's') ADVANCE(274);
      END_STATE();
    case 199:
      if (lookahead == 's') ADVANCE(311);
      END_STATE();
    case 200:
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 201:
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 202:
      if (lookahead == 's') ADVANCE(198);
      END_STATE();
    case 203:
      if (lookahead == 's') ADVANCE(199);
      END_STATE();
    case 204:
      if (lookahead == 's') ADVANCE(97);
      END_STATE();
    case 205:
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(337);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(306);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(416);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(279);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(305);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(276);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(277);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(223);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(220);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 221:
      if (lookahead == 'u') ADVANCE(215);
      END_STATE();
    case 222:
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 223:
      if (lookahead == 'u') ADVANCE(193);
      END_STATE();
    case 224:
      if (lookahead == 'u') ADVANCE(167);
      END_STATE();
    case 225:
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 226:
      if (lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 227:
      if (lookahead == 'v') ADVANCE(94);
      END_STATE();
    case 228:
      if (lookahead == 'y') ADVANCE(53);
      END_STATE();
    case 229:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(422);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(424);
      END_STATE();
    case 230:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(423);
      END_STATE();
    case 231:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(424);
      END_STATE();
    case 232:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(421);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(428);
      END_STATE();
    case 233:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(465);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      END_STATE();
    case 238:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      END_STATE();
    case 239:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      END_STATE();
    case 240:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      END_STATE();
    case 241:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 242:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(470);
      if (lookahead == '\r') ADVANCE(471);
      END_STATE();
    case 243:
      if (eof) ADVANCE(251);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 244:
      if (eof) ADVANCE(251);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(243)
      END_STATE();
    case 245:
      if (eof) ADVANCE(251);
      if (lookahead == '\n') SKIP(249)
      END_STATE();
    case 246:
      if (eof) ADVANCE(251);
      if (lookahead == '\n') SKIP(249)
      if (lookahead == '\r') SKIP(245)
      END_STATE();
    case 247:
      if (eof) ADVANCE(251);
      if (lookahead == '\n') SKIP(250)
      END_STATE();
    case 248:
      if (eof) ADVANCE(251);
      if (lookahead == '\n') SKIP(250)
      if (lookahead == '\r') SKIP(247)
      END_STATE();
    case 249:
      if (eof) ADVANCE(251);
      if (lookahead == '!') ADVANCE(43);
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '$') ADVANCE(414);
      if (lookahead == '%') ADVANCE(438);
      if (lookahead == '&') ADVANCE(441);
      if (lookahead == ')') ADVANCE(303);
      if (lookahead == '*') ADVANCE(436);
      if (lookahead == '+') ADVANCE(433);
      if (lookahead == ',') ADVANCE(296);
      if (lookahead == '-') ADVANCE(435);
      if (lookahead == '/') ADVANCE(437);
      if (lookahead == ':') ADVANCE(452);
      if (lookahead == ';') ADVANCE(287);
      if (lookahead == '<') ADVANCE(254);
      if (lookahead == '=') ADVANCE(286);
      if (lookahead == '>') ADVANCE(267);
      if (lookahead == '?') ADVANCE(451);
      if (lookahead == '@') ADVANCE(288);
      if (lookahead == '[') ADVANCE(293);
      if (lookahead == '\\') SKIP(246)
      if (lookahead == ']') ADVANCE(294);
      if (lookahead == '^') ADVANCE(443);
      if (lookahead == 'a') ADVANCE(410);
      if (lookahead == 'b') ADVANCE(377);
      if (lookahead == 'c') ADVANCE(383);
      if (lookahead == 'd') ADVANCE(396);
      if (lookahead == 'f') ADVANCE(390);
      if (lookahead == 'l') ADVANCE(378);
      if (lookahead == 's') ADVANCE(354);
      if (lookahead == 'u') ADVANCE(356);
      if (lookahead == '{') ADVANCE(297);
      if (lookahead == '|') ADVANCE(442);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(249)
      if (('A' <= lookahead && lookahead <= '_') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 250:
      if (eof) ADVANCE(251);
      if (lookahead == '!') ADVANCE(43);
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '$') ADVANCE(414);
      if (lookahead == '%') ADVANCE(438);
      if (lookahead == '&') ADVANCE(441);
      if (lookahead == ')') ADVANCE(303);
      if (lookahead == '*') ADVANCE(436);
      if (lookahead == '+') ADVANCE(432);
      if (lookahead == ',') ADVANCE(296);
      if (lookahead == '-') ADVANCE(434);
      if (lookahead == '.') ADVANCE(415);
      if (lookahead == '/') ADVANCE(437);
      if (lookahead == ':') ADVANCE(452);
      if (lookahead == ';') ADVANCE(287);
      if (lookahead == '<') ADVANCE(254);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '>') ADVANCE(267);
      if (lookahead == '?') ADVANCE(451);
      if (lookahead == '@') ADVANCE(288);
      if (lookahead == '[') ADVANCE(293);
      if (lookahead == '\\') SKIP(248)
      if (lookahead == ']') ADVANCE(294);
      if (lookahead == '^') ADVANCE(443);
      if (lookahead == 'a') ADVANCE(410);
      if (lookahead == 'b') ADVANCE(377);
      if (lookahead == 'c') ADVANCE(383);
      if (lookahead == 'd') ADVANCE(396);
      if (lookahead == 'f') ADVANCE(390);
      if (lookahead == 'l') ADVANCE(378);
      if (lookahead == 's') ADVANCE(354);
      if (lookahead == 'u') ADVANCE(356);
      if (lookahead == '{') ADVANCE(297);
      if (lookahead == '|') ADVANCE(442);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(250)
      if (('A' <= lookahead && lookahead <= '_') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_POUNDinclude);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(440);
      if (lookahead == '=') ADVANCE(447);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '*') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(260);
      if (lookahead == '\\') ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead == '\n') ADVANCE(470);
      if (lookahead == '\r') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(262);
      if (lookahead == '\\') ADVANCE(266);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead == '\r') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(263);
      if (lookahead == '\\') ADVANCE(265);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead == '*') ADVANCE(260);
      if (lookahead == '/') ADVANCE(262);
      if (lookahead == '\\') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '>') ADVANCE(263);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead == '*') ADVANCE(259);
      if (lookahead == '/') ADVANCE(263);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '\n' ||
          lookahead == '>') ADVANCE(23);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead == '*') ADVANCE(259);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '\n' ||
          lookahead == '>') ADVANCE(23);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead == '/') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(257);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '>') ADVANCE(263);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead == '>') ADVANCE(470);
      if (lookahead == '\\') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead == '\\') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '>') ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead == '\n' ||
          lookahead == '>') ADVANCE(470);
      if (lookahead == '\\') ADVANCE(256);
      if (lookahead != 0) ADVANCE(262);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(263);
      if (lookahead == '\\') ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(262);
      if (lookahead == '\\') ADVANCE(256);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(446);
      if (lookahead == '>') ADVANCE(439);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_POUNDdefine);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_POUNDpragma);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_endian);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_endian_val);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_MIME);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_mime_type);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_base_address);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_eval_depth);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_array_limit);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_pattern_limit);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_pragma_once);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_union);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_using);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(444);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_padding);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_padding);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[') ADVANCE(299);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']') ADVANCE(300);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_comment);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_transform);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_pointer_base);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_hidden);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_no_unique_address);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_be);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_be);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_le);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_le);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_u16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_u32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_u64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_u128);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_u128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_s8);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_s8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_s16);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_s16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_s32);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_s32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_s64);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_s64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_s128);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_s128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_char);
      if (lookahead == '1') ADVANCE(40);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_char);
      if (lookahead == '1') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_char16);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_char16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_str);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_str);
      if (lookahead == 'u') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_str);
      if (lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_str);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_auto);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_auto);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(358);
      if (lookahead == '3') ADVANCE(359);
      if (lookahead == '6') ADVANCE(362);
      if (lookahead == '8') ADVANCE(328);
      if (lookahead == 't') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(358);
      if (lookahead == '3') ADVANCE(359);
      if (lookahead == '6') ADVANCE(362);
      if (lookahead == '8') ADVANCE(328);
      if (lookahead == 't') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(361);
      if (lookahead == '3') ADVANCE(360);
      if (lookahead == '6') ADVANCE(363);
      if (lookahead == '8') ADVANCE(318);
      if (lookahead == 'n') ADVANCE(385);
      if (lookahead == 's') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(361);
      if (lookahead == '3') ADVANCE(360);
      if (lookahead == '6') ADVANCE(363);
      if (lookahead == '8') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(365);
      if (lookahead == '6') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(366);
      if (lookahead == '6') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(314);
      if (lookahead == 'o') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_dollar);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_parent);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_parent);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_number_literal);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'b') ADVANCE(229);
      if (lookahead == 'o') ADVANCE(230);
      if (lookahead == 'x') ADVANCE(232);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(231);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(231);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(428);
      if (('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(421);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(418);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(422);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(424);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(418);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(423);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(424);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'U') ADVANCE(427);
      if (lookahead == 'b') ADVANCE(229);
      if (lookahead == 'o') ADVANCE(230);
      if (lookahead == 'x') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(231);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'U') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(231);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(424);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(428);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(445);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(289);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(290);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '/') ADVANCE(470);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(448);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(449);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '^') ADVANCE(450);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_CARET_CARET);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(456);
      if (lookahead == '/') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(458);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(455);
      if (lookahead == '/') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(456);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(456);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(454);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(458);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(458);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_character_literal_token1);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_character_literal_token1);
      if (lookahead == '\n') ADVANCE(466);
      if (lookahead == '\r') ADVANCE(465);
      if (lookahead == 'U') ADVANCE(240);
      if (lookahead == 'u') ADVANCE(236);
      if (lookahead == 'x') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(468);
      if (lookahead != 0) ADVANCE(465);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_character_literal_token1);
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '/') ADVANCE(470);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_character_literal_token1);
      if (lookahead == '\\') ADVANCE(12);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_boolean_literal);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\\') ADVANCE(12);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(465);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(467);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(470);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(470);
      if (lookahead == '\\') ADVANCE(242);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 249},
  [2] = {.lex_state = 249},
  [3] = {.lex_state = 249},
  [4] = {.lex_state = 250},
  [5] = {.lex_state = 250},
  [6] = {.lex_state = 250},
  [7] = {.lex_state = 250},
  [8] = {.lex_state = 250},
  [9] = {.lex_state = 250},
  [10] = {.lex_state = 250},
  [11] = {.lex_state = 250},
  [12] = {.lex_state = 250},
  [13] = {.lex_state = 250},
  [14] = {.lex_state = 250},
  [15] = {.lex_state = 250},
  [16] = {.lex_state = 250},
  [17] = {.lex_state = 250},
  [18] = {.lex_state = 250},
  [19] = {.lex_state = 250},
  [20] = {.lex_state = 250},
  [21] = {.lex_state = 250},
  [22] = {.lex_state = 250},
  [23] = {.lex_state = 249},
  [24] = {.lex_state = 249},
  [25] = {.lex_state = 250},
  [26] = {.lex_state = 17},
  [27] = {.lex_state = 17},
  [28] = {.lex_state = 17},
  [29] = {.lex_state = 249},
  [30] = {.lex_state = 249},
  [31] = {.lex_state = 249},
  [32] = {.lex_state = 249},
  [33] = {.lex_state = 249},
  [34] = {.lex_state = 249},
  [35] = {.lex_state = 249},
  [36] = {.lex_state = 249},
  [37] = {.lex_state = 249},
  [38] = {.lex_state = 249},
  [39] = {.lex_state = 249},
  [40] = {.lex_state = 249},
  [41] = {.lex_state = 249},
  [42] = {.lex_state = 249},
  [43] = {.lex_state = 249},
  [44] = {.lex_state = 249},
  [45] = {.lex_state = 249},
  [46] = {.lex_state = 24},
  [47] = {.lex_state = 17},
  [48] = {.lex_state = 17},
  [49] = {.lex_state = 17},
  [50] = {.lex_state = 17},
  [51] = {.lex_state = 17},
  [52] = {.lex_state = 16},
  [53] = {.lex_state = 250},
  [54] = {.lex_state = 250},
  [55] = {.lex_state = 16},
  [56] = {.lex_state = 16},
  [57] = {.lex_state = 16},
  [58] = {.lex_state = 250},
  [59] = {.lex_state = 16},
  [60] = {.lex_state = 16},
  [61] = {.lex_state = 16},
  [62] = {.lex_state = 16},
  [63] = {.lex_state = 16},
  [64] = {.lex_state = 16},
  [65] = {.lex_state = 16},
  [66] = {.lex_state = 16},
  [67] = {.lex_state = 250},
  [68] = {.lex_state = 16},
  [69] = {.lex_state = 16},
  [70] = {.lex_state = 250},
  [71] = {.lex_state = 16},
  [72] = {.lex_state = 16},
  [73] = {.lex_state = 16},
  [74] = {.lex_state = 16},
  [75] = {.lex_state = 25},
  [76] = {.lex_state = 25},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 19},
  [81] = {.lex_state = 19},
  [82] = {.lex_state = 19},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 19},
  [85] = {.lex_state = 19},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 19},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 19},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 11},
  [92] = {.lex_state = 19},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 11},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 17},
  [100] = {.lex_state = 11},
  [101] = {.lex_state = 13},
  [102] = {.lex_state = 19},
  [103] = {.lex_state = 17},
  [104] = {.lex_state = 19},
  [105] = {.lex_state = 19},
  [106] = {.lex_state = 19},
  [107] = {.lex_state = 17},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 19},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 19},
  [117] = {.lex_state = 19},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 249},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 17},
  [123] = {.lex_state = 17},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 17},
  [128] = {.lex_state = 17},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 17},
  [132] = {.lex_state = 261},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 19},
  [135] = {.lex_state = 17},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 26},
  [138] = {.lex_state = 17},
  [139] = {.lex_state = 17},
  [140] = {.lex_state = 19},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
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
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_parent] = ACTIONS(1),
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
    [sym_source_file] = STATE(125),
    [sym__top_level_statement] = STATE(24),
    [sym__preproc_directive] = STATE(24),
    [sym_include] = STATE(24),
    [sym_define] = STATE(24),
    [sym_pragma] = STATE(24),
    [sym_struct_definition] = STATE(24),
    [sym_union_definition] = STATE(24),
    [sym__definition_statement] = STATE(24),
    [sym_using_definition] = STATE(24),
    [sym_variable_definition] = STATE(24),
    [sym_variable_placement] = STATE(24),
    [sym_assignation_statement] = STATE(24),
    [sym_array_definition] = STATE(24),
    [sym__type] = STATE(82),
    [sym__primitive_type] = STATE(105),
    [sym_endian_indicator] = STATE(75),
    [sym_primitive_type] = STATE(106),
    [sym__identifier] = STATE(107),
    [sym__type_identifier] = STATE(82),
    [sym_field_expression] = STATE(107),
    [aux_sym_source_file_repeat1] = STATE(24),
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
    ACTIONS(27), 27,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RPAREN,
      sym_dollar,
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
    ACTIONS(29), 33,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_EQ,
      anon_sym_LBRACK,
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
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
  [68] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 27,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RPAREN,
      sym_dollar,
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
    ACTIONS(33), 33,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_EQ,
      anon_sym_LBRACK,
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
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
  [136] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(35), 27,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
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
    ACTIONS(37), 30,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_using,
      anon_sym_LBRACK,
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
  [204] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
    ACTIONS(43), 29,
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
  [264] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_SLASH,
    ACTIONS(59), 1,
      anon_sym_AMP,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_CARET,
    ACTIONS(67), 1,
      anon_sym_AMP_AMP,
    ACTIONS(69), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(71), 1,
      anon_sym_CARET_CARET,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(57), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(65), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(45), 10,
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
    ACTIONS(49), 23,
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
  [348] = 3,
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
    ACTIONS(75), 29,
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
  [408] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_SLASH,
    ACTIONS(59), 1,
      anon_sym_AMP,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_CARET,
    ACTIONS(67), 1,
      anon_sym_AMP_AMP,
    ACTIONS(69), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(71), 1,
      anon_sym_CARET_CARET,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(57), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(65), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(77), 10,
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
    ACTIONS(79), 23,
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
  [492] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 23,
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
    ACTIONS(83), 29,
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
  [552] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 23,
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
    ACTIONS(87), 29,
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
  [612] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_SLASH,
    ACTIONS(59), 1,
      anon_sym_AMP,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_CARET,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(57), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(65), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(89), 13,
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
    ACTIONS(91), 23,
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
    ACTIONS(55), 1,
      anon_sym_SLASH,
    ACTIONS(59), 1,
      anon_sym_AMP,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_CARET,
    ACTIONS(67), 1,
      anon_sym_AMP_AMP,
    ACTIONS(71), 1,
      anon_sym_CARET_CARET,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(57), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(65), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(89), 11,
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
    ACTIONS(91), 23,
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
    ACTIONS(55), 1,
      anon_sym_SLASH,
    ACTIONS(59), 1,
      anon_sym_AMP,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_CARET,
    ACTIONS(71), 1,
      anon_sym_CARET_CARET,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(57), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(65), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(89), 12,
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
    ACTIONS(91), 23,
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
    ACTIONS(55), 1,
      anon_sym_SLASH,
    ACTIONS(59), 1,
      anon_sym_AMP,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(57), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(65), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(89), 13,
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
    ACTIONS(91), 25,
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
  [926] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_SLASH,
    ACTIONS(59), 1,
      anon_sym_AMP,
    ACTIONS(63), 1,
      anon_sym_CARET,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(57), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(65), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(89), 13,
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
    ACTIONS(91), 24,
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
  [1002] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_SLASH,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(57), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(65), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(89), 13,
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
    ACTIONS(91), 26,
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
  [1074] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 23,
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
    ACTIONS(95), 29,
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
  [1134] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_SLASH,
    ACTIONS(51), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(89), 19,
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
    ACTIONS(91), 28,
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
  [1200] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 23,
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
    ACTIONS(91), 29,
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
  [1260] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 23,
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
    ACTIONS(99), 29,
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
  [1320] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_SLASH,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(89), 21,
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
    ACTIONS(91), 28,
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
  [1384] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_SLASH,
    ACTIONS(51), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(57), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(89), 17,
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
    ACTIONS(91), 28,
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
  [1452] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      anon_sym_POUNDinclude,
    ACTIONS(106), 1,
      anon_sym_POUNDdefine,
    ACTIONS(109), 1,
      anon_sym_POUNDpragma,
    ACTIONS(112), 1,
      anon_sym_struct,
    ACTIONS(115), 1,
      anon_sym_union,
    ACTIONS(118), 1,
      anon_sym_using,
    ACTIONS(127), 1,
      sym_identifier,
    ACTIONS(130), 1,
      sym_dollar,
    STATE(75), 1,
      sym_endian_indicator,
    STATE(105), 1,
      sym__primitive_type,
    STATE(106), 1,
      sym_primitive_type,
    ACTIONS(121), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(82), 2,
      sym__type,
      sym__type_identifier,
    STATE(107), 2,
      sym__identifier,
      sym_field_expression,
    STATE(23), 14,
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
    ACTIONS(124), 17,
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
  [1539] = 18,
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
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    STATE(75), 1,
      sym_endian_indicator,
    STATE(105), 1,
      sym__primitive_type,
    STATE(106), 1,
      sym_primitive_type,
    ACTIONS(19), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(82), 2,
      sym__type,
      sym__type_identifier,
    STATE(107), 2,
      sym__identifier,
      sym_field_expression,
    STATE(23), 14,
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
  [1626] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_SLASH,
    ACTIONS(59), 1,
      anon_sym_AMP,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_CARET,
    ACTIONS(67), 1,
      anon_sym_AMP_AMP,
    ACTIONS(69), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(71), 1,
      anon_sym_CARET_CARET,
    ACTIONS(139), 1,
      anon_sym_QMARK,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(57), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(65), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(135), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(137), 23,
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
  [1708] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(141), 1,
      anon_sym_padding,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    ACTIONS(145), 1,
      sym_dollar,
    STATE(75), 1,
      sym_endian_indicator,
    STATE(105), 1,
      sym__primitive_type,
    STATE(106), 1,
      sym_primitive_type,
    ACTIONS(19), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(81), 2,
      sym__type,
      sym__type_identifier,
    STATE(103), 2,
      sym__identifier,
      sym_field_expression,
    STATE(27), 6,
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
  [1772] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_padding,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    ACTIONS(158), 1,
      sym_identifier,
    ACTIONS(161), 1,
      sym_dollar,
    STATE(75), 1,
      sym_endian_indicator,
    STATE(105), 1,
      sym__primitive_type,
    STATE(106), 1,
      sym_primitive_type,
    ACTIONS(152), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(81), 2,
      sym__type,
      sym__type_identifier,
    STATE(103), 2,
      sym__identifier,
      sym_field_expression,
    STATE(27), 6,
      sym__definition_statement,
      sym_variable_definition,
      sym_assignation_statement,
      sym_array_definition,
      sym_padding,
      aux_sym_field_list_repeat1,
    ACTIONS(155), 17,
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
  [1836] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(141), 1,
      anon_sym_padding,
    ACTIONS(145), 1,
      sym_dollar,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      sym_endian_indicator,
    STATE(105), 1,
      sym__primitive_type,
    STATE(106), 1,
      sym_primitive_type,
    ACTIONS(19), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(81), 2,
      sym__type,
      sym__type_identifier,
    STATE(103), 2,
      sym__identifier,
      sym_field_expression,
    STATE(26), 6,
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
  [1900] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(168), 23,
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
  [1936] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(172), 23,
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
  [1972] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(176), 23,
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
  [2008] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(180), 23,
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
  [2044] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(184), 23,
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
  [2080] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(188), 23,
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
  [2116] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(192), 23,
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
  [2152] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(196), 23,
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
  [2188] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(200), 23,
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
  [2224] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(204), 23,
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
  [2260] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(208), 23,
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
  [2296] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(212), 23,
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
  [2332] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(216), 23,
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
  [2368] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(220), 23,
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
  [2404] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(224), 23,
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
  [2440] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(228), 23,
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
  [2476] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(232), 23,
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
  [2512] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      sym_identifier,
    STATE(75), 1,
      sym_endian_indicator,
    STATE(105), 1,
      sym__primitive_type,
    STATE(106), 1,
      sym_primitive_type,
    ACTIONS(19), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(120), 2,
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
  [2555] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(172), 21,
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
  [2586] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(168), 21,
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
  [2617] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(180), 21,
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
  [2648] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(220), 21,
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
  [2679] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(236), 21,
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
  [2710] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_parent,
    ACTIONS(250), 1,
      anon_sym_DQUOTE,
    ACTIONS(252), 1,
      anon_sym_SQUOTE,
    STATE(96), 1,
      sym__offset,
    ACTIONS(248), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(244), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(53), 11,
      sym__expression,
      sym__identifier,
      sym_field_expression,
      sym_parent_access,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [2754] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_SLASH,
    ACTIONS(59), 1,
      anon_sym_AMP,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_CARET,
    ACTIONS(67), 1,
      anon_sym_AMP_AMP,
    ACTIONS(69), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(71), 1,
      anon_sym_CARET_CARET,
    ACTIONS(139), 1,
      anon_sym_QMARK,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(57), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(254), 2,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(65), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2808] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_SLASH,
    ACTIONS(59), 1,
      anon_sym_AMP,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_CARET,
    ACTIONS(67), 1,
      anon_sym_AMP_AMP,
    ACTIONS(69), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(71), 1,
      anon_sym_CARET_CARET,
    ACTIONS(139), 1,
      anon_sym_QMARK,
    ACTIONS(256), 1,
      anon_sym_RPAREN,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(57), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(65), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2861] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_parent,
    ACTIONS(250), 1,
      anon_sym_DQUOTE,
    ACTIONS(252), 1,
      anon_sym_SQUOTE,
    ACTIONS(248), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(258), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(67), 11,
      sym__expression,
      sym__identifier,
      sym_field_expression,
      sym_parent_access,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [2902] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_parent,
    ACTIONS(250), 1,
      anon_sym_DQUOTE,
    ACTIONS(252), 1,
      anon_sym_SQUOTE,
    ACTIONS(248), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(260), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(58), 11,
      sym__expression,
      sym__identifier,
      sym_field_expression,
      sym_parent_access,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [2943] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_parent,
    ACTIONS(250), 1,
      anon_sym_DQUOTE,
    ACTIONS(252), 1,
      anon_sym_SQUOTE,
    ACTIONS(248), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(262), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(54), 11,
      sym__expression,
      sym__identifier,
      sym_field_expression,
      sym_parent_access,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [2984] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_SLASH,
    ACTIONS(59), 1,
      anon_sym_AMP,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_CARET,
    ACTIONS(67), 1,
      anon_sym_AMP_AMP,
    ACTIONS(69), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(71), 1,
      anon_sym_CARET_CARET,
    ACTIONS(139), 1,
      anon_sym_QMARK,
    ACTIONS(264), 1,
      anon_sym_SEMI,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(57), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(65), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3037] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_parent,
    ACTIONS(250), 1,
      anon_sym_DQUOTE,
    ACTIONS(252), 1,
      anon_sym_SQUOTE,
    ACTIONS(248), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(266), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(8), 11,
      sym__expression,
      sym__identifier,
      sym_field_expression,
      sym_parent_access,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [3078] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_parent,
    ACTIONS(250), 1,
      anon_sym_DQUOTE,
    ACTIONS(252), 1,
      anon_sym_SQUOTE,
    ACTIONS(248), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(268), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(14), 11,
      sym__expression,
      sym__identifier,
      sym_field_expression,
      sym_parent_access,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [3119] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_parent,
    ACTIONS(250), 1,
      anon_sym_DQUOTE,
    ACTIONS(252), 1,
      anon_sym_SQUOTE,
    ACTIONS(248), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(270), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(15), 11,
      sym__expression,
      sym__identifier,
      sym_field_expression,
      sym_parent_access,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [3160] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_parent,
    ACTIONS(250), 1,
      anon_sym_DQUOTE,
    ACTIONS(252), 1,
      anon_sym_SQUOTE,
    ACTIONS(248), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(272), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(6), 11,
      sym__expression,
      sym__identifier,
      sym_field_expression,
      sym_parent_access,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [3201] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_parent,
    ACTIONS(250), 1,
      anon_sym_DQUOTE,
    ACTIONS(252), 1,
      anon_sym_SQUOTE,
    ACTIONS(248), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(274), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(16), 11,
      sym__expression,
      sym__identifier,
      sym_field_expression,
      sym_parent_access,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [3242] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_parent,
    ACTIONS(250), 1,
      anon_sym_DQUOTE,
    ACTIONS(252), 1,
      anon_sym_SQUOTE,
    ACTIONS(248), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(276), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(18), 11,
      sym__expression,
      sym__identifier,
      sym_field_expression,
      sym_parent_access,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [3283] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_parent,
    ACTIONS(250), 1,
      anon_sym_DQUOTE,
    ACTIONS(252), 1,
      anon_sym_SQUOTE,
    ACTIONS(248), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(278), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(19), 11,
      sym__expression,
      sym__identifier,
      sym_field_expression,
      sym_parent_access,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [3324] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_parent,
    ACTIONS(250), 1,
      anon_sym_DQUOTE,
    ACTIONS(252), 1,
      anon_sym_SQUOTE,
    ACTIONS(248), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(280), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(21), 11,
      sym__expression,
      sym__identifier,
      sym_field_expression,
      sym_parent_access,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [3365] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_SLASH,
    ACTIONS(59), 1,
      anon_sym_AMP,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_CARET,
    ACTIONS(67), 1,
      anon_sym_AMP_AMP,
    ACTIONS(69), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(71), 1,
      anon_sym_CARET_CARET,
    ACTIONS(139), 1,
      anon_sym_QMARK,
    ACTIONS(282), 1,
      anon_sym_COLON,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(57), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(65), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3418] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_parent,
    ACTIONS(250), 1,
      anon_sym_DQUOTE,
    ACTIONS(252), 1,
      anon_sym_SQUOTE,
    ACTIONS(248), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(284), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(22), 11,
      sym__expression,
      sym__identifier,
      sym_field_expression,
      sym_parent_access,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [3459] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_parent,
    ACTIONS(250), 1,
      anon_sym_DQUOTE,
    ACTIONS(252), 1,
      anon_sym_SQUOTE,
    ACTIONS(248), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(286), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(13), 11,
      sym__expression,
      sym__identifier,
      sym_field_expression,
      sym_parent_access,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [3500] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_SLASH,
    ACTIONS(59), 1,
      anon_sym_AMP,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_CARET,
    ACTIONS(67), 1,
      anon_sym_AMP_AMP,
    ACTIONS(69), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(71), 1,
      anon_sym_CARET_CARET,
    ACTIONS(139), 1,
      anon_sym_QMARK,
    ACTIONS(288), 1,
      anon_sym_SEMI,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(57), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(65), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3553] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_parent,
    ACTIONS(250), 1,
      anon_sym_DQUOTE,
    ACTIONS(252), 1,
      anon_sym_SQUOTE,
    ACTIONS(248), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(290), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(25), 11,
      sym__expression,
      sym__identifier,
      sym_field_expression,
      sym_parent_access,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [3594] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_parent,
    ACTIONS(250), 1,
      anon_sym_DQUOTE,
    ACTIONS(252), 1,
      anon_sym_SQUOTE,
    ACTIONS(248), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(292), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(12), 11,
      sym__expression,
      sym__identifier,
      sym_field_expression,
      sym_parent_access,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [3635] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_parent,
    ACTIONS(250), 1,
      anon_sym_DQUOTE,
    ACTIONS(252), 1,
      anon_sym_SQUOTE,
    ACTIONS(248), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(294), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(70), 11,
      sym__expression,
      sym__identifier,
      sym_field_expression,
      sym_parent_access,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [3676] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_parent,
    ACTIONS(250), 1,
      anon_sym_DQUOTE,
    ACTIONS(252), 1,
      anon_sym_SQUOTE,
    ACTIONS(248), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(296), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(11), 11,
      sym__expression,
      sym__identifier,
      sym_field_expression,
      sym_parent_access,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [3717] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_char,
    STATE(104), 1,
      sym_primitive_type,
    ACTIONS(298), 16,
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
  [3745] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_char,
    ACTIONS(300), 16,
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
  [3770] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_endian,
    ACTIONS(306), 1,
      anon_sym_MIME,
    ACTIONS(308), 1,
      anon_sym_base_address,
    ACTIONS(310), 1,
      anon_sym_eval_depth,
    ACTIONS(312), 1,
      anon_sym_array_limit,
    ACTIONS(314), 1,
      anon_sym_pattern_limit,
    ACTIONS(316), 1,
      sym_pragma_once,
    STATE(31), 6,
      sym_pragma_endian,
      sym_pragma_mime,
      sym_pragma_base_address,
      sym_pragma_eval_depth,
      sym_pragma_array_limit,
      sym_pragma_pattern_limit,
  [3803] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(122), 1,
      sym__variable_attribute,
    ACTIONS(320), 4,
      anon_sym_hidden,
      anon_sym_inline,
      anon_sym_no_unique_address,
      anon_sym_static,
    ACTIONS(318), 6,
      anon_sym_color,
      anon_sym_name,
      anon_sym_comment,
      anon_sym_format,
      anon_sym_transform,
      anon_sym_pointer_base,
  [3824] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_SEMI,
    ACTIONS(324), 1,
      anon_sym_AT,
    ACTIONS(326), 1,
      anon_sym_LBRACK,
    ACTIONS(328), 1,
      anon_sym_LBRACK_LBRACK,
    STATE(42), 1,
      sym__declaration_finish,
    STATE(95), 1,
      sym__array_size_wrapper,
    STATE(126), 1,
      sym_attribute,
  [3849] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_RBRACK,
    ACTIONS(332), 1,
      sym_identifier,
    ACTIONS(334), 2,
      sym_dollar,
      sym_number_literal,
    STATE(119), 3,
      sym__array_size,
      sym__identifier,
      sym_field_expression,
  [3868] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      sym_identifier,
    ACTIONS(336), 1,
      sym_dollar,
    STATE(83), 1,
      sym__identifier_definition,
    STATE(85), 1,
      aux_sym__identifier_definition_repeat1,
    STATE(86), 2,
      sym__identifier,
      sym_field_expression,
  [3888] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      sym_identifier,
    ACTIONS(336), 1,
      sym_dollar,
    STATE(79), 1,
      sym__identifier_definition,
    STATE(85), 1,
      aux_sym__identifier_definition_repeat1,
    STATE(86), 2,
      sym__identifier,
      sym_field_expression,
  [3908] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_LBRACK,
    ACTIONS(328), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(338), 1,
      anon_sym_SEMI,
    STATE(50), 1,
      sym__declaration_finish,
    STATE(93), 1,
      sym__array_size_wrapper,
    STATE(141), 1,
      sym_attribute,
  [3930] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(340), 2,
      sym_identifier,
      sym_dollar,
    ACTIONS(35), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [3946] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      sym_identifier,
    ACTIONS(342), 1,
      sym_dollar,
    STATE(87), 1,
      aux_sym__identifier_definition_repeat1,
    STATE(88), 2,
      sym__identifier,
      sym_field_expression,
  [3963] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_COMMA,
    ACTIONS(344), 3,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_LBRACK_LBRACK,
  [3978] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      sym_identifier,
    ACTIONS(353), 1,
      sym_dollar,
    STATE(87), 1,
      aux_sym__identifier_definition_repeat1,
    STATE(121), 2,
      sym__identifier,
      sym_field_expression,
  [3995] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_COMMA,
    ACTIONS(358), 1,
      anon_sym_LBRACK,
    ACTIONS(356), 3,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_LBRACK_LBRACK,
  [4010] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      sym_identifier,
    ACTIONS(360), 1,
      sym_dollar,
    STATE(118), 2,
      sym__identifier,
      sym_field_expression,
  [4024] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(362), 1,
      anon_sym_SEMI,
    STATE(35), 1,
      sym__declaration_finish,
    STATE(126), 1,
      sym_attribute,
  [4040] = 5,
    ACTIONS(364), 1,
      anon_sym_DQUOTE,
    ACTIONS(366), 1,
      aux_sym_string_literal_token1,
    ACTIONS(368), 1,
      sym_escape_sequence,
    ACTIONS(370), 1,
      sym_comment,
    STATE(100), 1,
      aux_sym_string_literal_repeat1,
  [4056] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      sym_identifier,
    ACTIONS(372), 1,
      sym_dollar,
    STATE(109), 2,
      sym__identifier,
      sym_field_expression,
  [4070] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(374), 1,
      anon_sym_SEMI,
    STATE(49), 1,
      sym__declaration_finish,
    STATE(141), 1,
      sym_attribute,
  [4086] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(376), 1,
      anon_sym_SEMI,
    STATE(34), 1,
      sym__declaration_finish,
    STATE(126), 1,
      sym_attribute,
  [4102] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(378), 1,
      anon_sym_SEMI,
    STATE(32), 1,
      sym__declaration_finish,
    STATE(126), 1,
      sym_attribute,
  [4118] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(380), 1,
      anon_sym_SEMI,
    STATE(38), 1,
      sym__declaration_finish,
    STATE(126), 1,
      sym_attribute,
  [4134] = 5,
    ACTIONS(370), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_DQUOTE,
    ACTIONS(384), 1,
      aux_sym_string_literal_token1,
    ACTIONS(387), 1,
      sym_escape_sequence,
    STATE(97), 1,
      aux_sym_string_literal_repeat1,
  [4150] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(390), 1,
      anon_sym_SEMI,
    STATE(51), 1,
      sym__declaration_finish,
    STATE(141), 1,
      sym_attribute,
  [4166] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_DQUOTE,
    ACTIONS(392), 1,
      anon_sym_LT,
    STATE(43), 2,
      sym_system_lib_string,
      sym_string_literal,
  [4180] = 5,
    ACTIONS(370), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_DQUOTE,
    ACTIONS(396), 1,
      aux_sym_string_literal_token1,
    ACTIONS(398), 1,
      sym_escape_sequence,
    STATE(97), 1,
      aux_sym_string_literal_repeat1,
  [4196] = 3,
    ACTIONS(370), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_SQUOTE,
    ACTIONS(402), 2,
      aux_sym_character_literal_token1,
      sym_escape_sequence,
  [4207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 3,
      anon_sym_SEMI,
      sym_identifier,
      sym_dollar,
  [4216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [4225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 3,
      anon_sym_SEMI,
      sym_identifier,
      sym_dollar,
  [4234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 3,
      anon_sym_SEMI,
      sym_identifier,
      sym_dollar,
  [4243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 3,
      anon_sym_SEMI,
      sym_identifier,
      sym_dollar,
  [4252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [4261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 2,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
  [4269] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_LBRACE,
    STATE(94), 1,
      sym_field_list,
  [4279] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_LBRACK,
    STATE(98), 1,
      sym__array_size_wrapper,
  [4289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 2,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
  [4297] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      sym_identifier,
    STATE(2), 1,
      sym__field_identifier,
  [4307] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_DQUOTE,
    STATE(133), 1,
      sym_string_literal,
  [4317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 2,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
  [4325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 2,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
  [4333] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      sym_identifier,
    STATE(20), 1,
      sym__field_identifier,
  [4343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 2,
      sym_identifier,
      sym_dollar,
  [4351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_LBRACE,
    STATE(90), 1,
      sym_field_list,
  [4361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_RBRACK,
  [4368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_SEMI,
  [4375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_COMMA,
  [4382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_RBRACK_RBRACK,
  [4389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_RBRACK_RBRACK,
  [4396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_LPAREN,
  [4403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      ts_builtin_sym_end,
  [4410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_SEMI,
  [4417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      sym_number_literal,
  [4424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      sym_number_literal,
  [4431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      sym_endian_val,
  [4438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_SEMI,
  [4445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_EQ,
  [4452] = 2,
    ACTIONS(370), 1,
      sym_comment,
    ACTIONS(456), 1,
      aux_sym_system_lib_string_token1,
  [4459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_RPAREN,
  [4466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      sym_identifier,
  [4473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_RBRACK_RBRACK,
  [4480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_SEMI,
  [4487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      sym_mime_type,
  [4494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      sym_number_literal,
  [4501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      sym_number_literal,
  [4508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      sym_identifier,
  [4515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_SEMI,
  [4522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_SQUOTE,
  [4529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_DOT,
  [4536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 68,
  [SMALL_STATE(4)] = 136,
  [SMALL_STATE(5)] = 204,
  [SMALL_STATE(6)] = 264,
  [SMALL_STATE(7)] = 348,
  [SMALL_STATE(8)] = 408,
  [SMALL_STATE(9)] = 492,
  [SMALL_STATE(10)] = 552,
  [SMALL_STATE(11)] = 612,
  [SMALL_STATE(12)] = 690,
  [SMALL_STATE(13)] = 772,
  [SMALL_STATE(14)] = 852,
  [SMALL_STATE(15)] = 926,
  [SMALL_STATE(16)] = 1002,
  [SMALL_STATE(17)] = 1074,
  [SMALL_STATE(18)] = 1134,
  [SMALL_STATE(19)] = 1200,
  [SMALL_STATE(20)] = 1260,
  [SMALL_STATE(21)] = 1320,
  [SMALL_STATE(22)] = 1384,
  [SMALL_STATE(23)] = 1452,
  [SMALL_STATE(24)] = 1539,
  [SMALL_STATE(25)] = 1626,
  [SMALL_STATE(26)] = 1708,
  [SMALL_STATE(27)] = 1772,
  [SMALL_STATE(28)] = 1836,
  [SMALL_STATE(29)] = 1900,
  [SMALL_STATE(30)] = 1936,
  [SMALL_STATE(31)] = 1972,
  [SMALL_STATE(32)] = 2008,
  [SMALL_STATE(33)] = 2044,
  [SMALL_STATE(34)] = 2080,
  [SMALL_STATE(35)] = 2116,
  [SMALL_STATE(36)] = 2152,
  [SMALL_STATE(37)] = 2188,
  [SMALL_STATE(38)] = 2224,
  [SMALL_STATE(39)] = 2260,
  [SMALL_STATE(40)] = 2296,
  [SMALL_STATE(41)] = 2332,
  [SMALL_STATE(42)] = 2368,
  [SMALL_STATE(43)] = 2404,
  [SMALL_STATE(44)] = 2440,
  [SMALL_STATE(45)] = 2476,
  [SMALL_STATE(46)] = 2512,
  [SMALL_STATE(47)] = 2555,
  [SMALL_STATE(48)] = 2586,
  [SMALL_STATE(49)] = 2617,
  [SMALL_STATE(50)] = 2648,
  [SMALL_STATE(51)] = 2679,
  [SMALL_STATE(52)] = 2710,
  [SMALL_STATE(53)] = 2754,
  [SMALL_STATE(54)] = 2808,
  [SMALL_STATE(55)] = 2861,
  [SMALL_STATE(56)] = 2902,
  [SMALL_STATE(57)] = 2943,
  [SMALL_STATE(58)] = 2984,
  [SMALL_STATE(59)] = 3037,
  [SMALL_STATE(60)] = 3078,
  [SMALL_STATE(61)] = 3119,
  [SMALL_STATE(62)] = 3160,
  [SMALL_STATE(63)] = 3201,
  [SMALL_STATE(64)] = 3242,
  [SMALL_STATE(65)] = 3283,
  [SMALL_STATE(66)] = 3324,
  [SMALL_STATE(67)] = 3365,
  [SMALL_STATE(68)] = 3418,
  [SMALL_STATE(69)] = 3459,
  [SMALL_STATE(70)] = 3500,
  [SMALL_STATE(71)] = 3553,
  [SMALL_STATE(72)] = 3594,
  [SMALL_STATE(73)] = 3635,
  [SMALL_STATE(74)] = 3676,
  [SMALL_STATE(75)] = 3717,
  [SMALL_STATE(76)] = 3745,
  [SMALL_STATE(77)] = 3770,
  [SMALL_STATE(78)] = 3803,
  [SMALL_STATE(79)] = 3824,
  [SMALL_STATE(80)] = 3849,
  [SMALL_STATE(81)] = 3868,
  [SMALL_STATE(82)] = 3888,
  [SMALL_STATE(83)] = 3908,
  [SMALL_STATE(84)] = 3930,
  [SMALL_STATE(85)] = 3946,
  [SMALL_STATE(86)] = 3963,
  [SMALL_STATE(87)] = 3978,
  [SMALL_STATE(88)] = 3995,
  [SMALL_STATE(89)] = 4010,
  [SMALL_STATE(90)] = 4024,
  [SMALL_STATE(91)] = 4040,
  [SMALL_STATE(92)] = 4056,
  [SMALL_STATE(93)] = 4070,
  [SMALL_STATE(94)] = 4086,
  [SMALL_STATE(95)] = 4102,
  [SMALL_STATE(96)] = 4118,
  [SMALL_STATE(97)] = 4134,
  [SMALL_STATE(98)] = 4150,
  [SMALL_STATE(99)] = 4166,
  [SMALL_STATE(100)] = 4180,
  [SMALL_STATE(101)] = 4196,
  [SMALL_STATE(102)] = 4207,
  [SMALL_STATE(103)] = 4216,
  [SMALL_STATE(104)] = 4225,
  [SMALL_STATE(105)] = 4234,
  [SMALL_STATE(106)] = 4243,
  [SMALL_STATE(107)] = 4252,
  [SMALL_STATE(108)] = 4261,
  [SMALL_STATE(109)] = 4269,
  [SMALL_STATE(110)] = 4279,
  [SMALL_STATE(111)] = 4289,
  [SMALL_STATE(112)] = 4297,
  [SMALL_STATE(113)] = 4307,
  [SMALL_STATE(114)] = 4317,
  [SMALL_STATE(115)] = 4325,
  [SMALL_STATE(116)] = 4333,
  [SMALL_STATE(117)] = 4343,
  [SMALL_STATE(118)] = 4351,
  [SMALL_STATE(119)] = 4361,
  [SMALL_STATE(120)] = 4368,
  [SMALL_STATE(121)] = 4375,
  [SMALL_STATE(122)] = 4382,
  [SMALL_STATE(123)] = 4389,
  [SMALL_STATE(124)] = 4396,
  [SMALL_STATE(125)] = 4403,
  [SMALL_STATE(126)] = 4410,
  [SMALL_STATE(127)] = 4417,
  [SMALL_STATE(128)] = 4424,
  [SMALL_STATE(129)] = 4431,
  [SMALL_STATE(130)] = 4438,
  [SMALL_STATE(131)] = 4445,
  [SMALL_STATE(132)] = 4452,
  [SMALL_STATE(133)] = 4459,
  [SMALL_STATE(134)] = 4466,
  [SMALL_STATE(135)] = 4473,
  [SMALL_STATE(136)] = 4480,
  [SMALL_STATE(137)] = 4487,
  [SMALL_STATE(138)] = 4494,
  [SMALL_STATE(139)] = 4501,
  [SMALL_STATE(140)] = 4508,
  [SMALL_STATE(141)] = 4515,
  [SMALL_STATE(142)] = 4522,
  [SMALL_STATE(143)] = 4529,
  [SMALL_STATE(144)] = 4536,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_expression, 3, .production_id = 8),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_expression, 3, .production_id = 8),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_identifier, 1, .production_id = 7),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_identifier, 1, .production_id = 7),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_numeric_operator, 5, .production_id = 21),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ternary_numeric_operator, 5, .production_id = 21),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_numeric_operator, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_numeric_operator, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_literal, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_literal, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_literal, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_literal, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_numeric_operator, 3, .production_id = 15),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_numeric_operator, 3, .production_id = 15),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_numeric_operator, 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_numeric_operator, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parent_access, 3, .production_id = 8),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parent_access, 3, .production_id = 8),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(99),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(140),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(89),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(92),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(134),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(102),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(84),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(107),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(110),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(76),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(102),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(84),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(103),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignation_statement, 4, .production_id = 15),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignation_statement, 4, .production_id = 15),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration_finish, 2, .production_id = 14),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declaration_finish, 2, .production_id = 14),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_definition, 4, .production_id = 13),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_definition, 4, .production_id = 13),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_pattern_limit, 2, .production_id = 6),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma_pattern_limit, 2, .production_id = 6),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_definition, 4, .production_id = 12),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union_definition, 4, .production_id = 12),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 4, .production_id = 12),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 4, .production_id = 12),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_base_address, 2, .production_id = 6),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma_base_address, 2, .production_id = 6),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_definition, 5, .production_id = 16),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using_definition, 5, .production_id = 16),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_placement, 5, .production_id = 17),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_placement, 5, .production_id = 17),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_array_limit, 2, .production_id = 6),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma_array_limit, 2, .production_id = 6),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_lib_string, 3),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_lib_string, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_eval_depth, 2, .production_id = 6),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma_eval_depth, 2, .production_id = 6),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3, .production_id = 9),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 3, .production_id = 9),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_endian, 2, .production_id = 6),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma_endian, 2, .production_id = 6),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_mime, 2, .production_id = 6),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma_mime, 2, .production_id = 6),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_padding, 3, .production_id = 20),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_padding, 3, .production_id = 20),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endian_indicator, 1),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endian_indicator, 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier_definition, 1, .production_id = 4),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier_definition, 1, .production_id = 4),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_definition_repeat1, 2, .production_id = 11), SHIFT_REPEAT(4),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_definition_repeat1, 2, .production_id = 11), SHIFT_REPEAT(121),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier_definition, 2, .production_id = 10),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier_definition, 2, .production_id = 10),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(97),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(97),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive_type, 2, .production_id = 5),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1, .production_id = 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive_type, 1, .production_id = 3),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_size_wrapper, 3, .production_id = 18),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 2),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_size_wrapper, 2),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 3),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_definition_repeat1, 2, .production_id = 4),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_attribute, 1, .production_id = 4),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [442] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, .production_id = 19),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_attribute, 4, .production_id = 22),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
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
