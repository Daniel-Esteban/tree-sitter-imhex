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
#define STATE_COUNT 146
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 149
#define ALIAS_COUNT 2
#define TOKEN_COUNT 98
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 25

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
  anon_sym_DQUOTE = 91,
  aux_sym_string_literal_token1 = 92,
  anon_sym_SQUOTE = 93,
  aux_sym_character_literal_token1 = 94,
  sym_boolean_literal = 95,
  sym_escape_sequence = 96,
  sym_comment = 97,
  sym_source_file = 98,
  sym__top_level_statement = 99,
  sym__preproc_directive = 100,
  sym_include = 101,
  sym_system_lib_string = 102,
  sym_define = 103,
  sym_pragma = 104,
  sym_pragma_endian = 105,
  sym_pragma_mime = 106,
  sym_pragma_base_address = 107,
  sym_pragma_eval_depth = 108,
  sym_pragma_array_limit = 109,
  sym_pragma_pattern_limit = 110,
  sym_struct_definition = 111,
  sym_union_definition = 112,
  sym__definition_statement = 113,
  sym_using_definition = 114,
  sym_variable_definition = 115,
  sym_variable_placement = 116,
  sym__offset = 117,
  sym_assignation_statement = 118,
  sym_array_definition = 119,
  sym_padding = 120,
  sym__array_size_wrapper = 121,
  sym__array_size = 122,
  sym__identifier_definition = 123,
  sym_field_list = 124,
  sym__declaration_finish = 125,
  sym_attribute = 126,
  sym__variable_attribute = 127,
  sym__type = 128,
  sym__primitive_type = 129,
  sym_endian_indicator = 130,
  sym_primitive_type = 131,
  sym__expression = 132,
  sym__identifier = 133,
  sym__type_identifier = 134,
  sym__field_identifier = 135,
  sym_field_expression = 136,
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
  aux_sym_field_expression_repeat1 = 147,
  aux_sym_string_literal_repeat1 = 148,
  alias_sym_field_identifier = 149,
  alias_sym_type_identifier = 150,
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
  [7] = {.index = 7, .length = 5},
  [8] = {.index = 12, .length = 2},
  [9] = {.index = 14, .length = 2},
  [10] = {.index = 16, .length = 2},
  [11] = {.index = 18, .length = 3},
  [12] = {.index = 21, .length = 6},
  [13] = {.index = 27, .length = 1},
  [14] = {.index = 28, .length = 3},
  [16] = {.index = 31, .length = 1},
  [17] = {.index = 32, .length = 2},
  [18] = {.index = 34, .length = 3},
  [19] = {.index = 37, .length = 6},
  [20] = {.index = 43, .length = 1},
  [21] = {.index = 44, .length = 2},
  [22] = {.index = 46, .length = 2},
  [23] = {.index = 48, .length = 3},
  [24] = {.index = 51, .length = 2},
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
    {field_field, 1, .inherited = true},
    {field_parent, 0},
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
    {field_field, 1},
  [32] =
    {field_field, 0, .inherited = true},
    {field_field, 1, .inherited = true},
  [34] =
    {field_endian, 3, .inherited = true},
    {field_name, 1},
    {field_type, 3, .inherited = true},
  [37] =
    {field_attribute, 4, .inherited = true},
    {field_endian, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_offset, 3},
    {field_type, 0},
    {field_type, 0, .inherited = true},
  [43] =
    {field_size, 1},
  [44] =
    {field_name, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [46] =
    {field_attribute, 2, .inherited = true},
    {field_size, 1, .inherited = true},
  [48] =
    {field_cond, 0},
    {field_iffalse, 4},
    {field_iftrue, 2},
  [51] =
    {field_name, 0},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_type_identifier,
  },
  [15] = {
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
      if (lookahead == '!') ADVANCE(435);
      if (lookahead == '"') ADVANCE(457);
      if (lookahead == '#') ADVANCE(81);
      if (lookahead == '$') ADVANCE(416);
      if (lookahead == '%') ADVANCE(442);
      if (lookahead == '&') ADVANCE(445);
      if (lookahead == '\'') ADVANCE(463);
      if (lookahead == '(') ADVANCE(302);
      if (lookahead == ')') ADVANCE(303);
      if (lookahead == '*') ADVANCE(440);
      if (lookahead == '+') ADVANCE(437);
      if (lookahead == ',') ADVANCE(296);
      if (lookahead == '-') ADVANCE(439);
      if (lookahead == '.') ADVANCE(421);
      if (lookahead == '/') ADVANCE(441);
      if (lookahead == ':') ADVANCE(456);
      if (lookahead == ';') ADVANCE(287);
      if (lookahead == '<') ADVANCE(254);
      if (lookahead == '=') ADVANCE(286);
      if (lookahead == '>') ADVANCE(267);
      if (lookahead == '?') ADVANCE(455);
      if (lookahead == '@') ADVANCE(288);
      if (lookahead == 'M') ADVANCE(47);
      if (lookahead == '[') ADVANCE(293);
      if (lookahead == '\\') SKIP(247)
      if (lookahead == ']') ADVANCE(295);
      if (lookahead == '^') ADVANCE(447);
      if (lookahead == 'a') ADVANCE(198);
      if (lookahead == 'b') ADVANCE(58);
      if (lookahead == 'c') ADVANCE(122);
      if (lookahead == 'd') ADVANCE(177);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == 'f') ADVANCE(59);
      if (lookahead == 'h') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(165);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead == 'o') ADVANCE(160);
      if (lookahead == 'p') ADVANCE(61);
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead == 's') ADVANCE(30);
      if (lookahead == 't') ADVANCE(124);
      if (lookahead == 'u') ADVANCE(33);
      if (lookahead == '{') ADVANCE(297);
      if (lookahead == '|') ADVANCE(446);
      if (lookahead == '}') ADVANCE(298);
      if (lookahead == '~') ADVANCE(433);
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
      if (lookahead == '"') ADVANCE(457);
      if (lookahead == '/') ADVANCE(458);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(461);
      if (lookahead != 0) ADVANCE(462);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(470);
      if (lookahead == '\r') ADVANCE(469);
      if (lookahead == 'U') ADVANCE(243);
      if (lookahead == 'u') ADVANCE(239);
      if (lookahead == 'x') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(472);
      if (lookahead != 0) ADVANCE(469);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '\'') ADVANCE(463);
      if (lookahead == '/') ADVANCE(466);
      if (lookahead == '\\') ADVANCE(465);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(467);
      if (lookahead != 0) ADVANCE(464);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(26)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '\r') SKIP(14)
      END_STATE();
    case 16:
      if (lookahead == '!') ADVANCE(434);
      if (lookahead == '"') ADVANCE(457);
      if (lookahead == '$') ADVANCE(416);
      if (lookahead == '\'') ADVANCE(463);
      if (lookahead == '(') ADVANCE(302);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '0') ADVANCE(429);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'f') ADVANCE(370);
      if (lookahead == 'p') ADVANCE(371);
      if (lookahead == 't') ADVANCE(384);
      if (lookahead == '~') ADVANCE(433);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(430);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(457);
      if (lookahead == '$') ADVANCE(416);
      if (lookahead == '+') ADVANCE(44);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '0') ADVANCE(429);
      if (lookahead == '<') ADVANCE(253);
      if (lookahead == '=') ADVANCE(285);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == ']') ADVANCE(294);
      if (lookahead == 'a') ADVANCE(412);
      if (lookahead == 'b') ADVANCE(377);
      if (lookahead == 'c') ADVANCE(383);
      if (lookahead == 'd') ADVANCE(398);
      if (lookahead == 'f') ADVANCE(392);
      if (lookahead == 'l') ADVANCE(378);
      if (lookahead == 'p') ADVANCE(367);
      if (lookahead == 's') ADVANCE(355);
      if (lookahead == 'u') ADVANCE(357);
      if (lookahead == '}') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(430);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(457);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      END_STATE();
    case 19:
      if (lookahead == '$') ADVANCE(416);
      if (lookahead == '+') ADVANCE(44);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '0') ADVANCE(429);
      if (lookahead == ';') ADVANCE(287);
      if (lookahead == '=') ADVANCE(285);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == ']') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(430);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 20:
      if (lookahead == '\'') ADVANCE(463);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '/') ADVANCE(474);
      END_STATE();
    case 22:
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '/') ADVANCE(473);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == '*') ADVANCE(22);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'a') ADVANCE(412);
      if (lookahead == 'b') ADVANCE(377);
      if (lookahead == 'c') ADVANCE(383);
      if (lookahead == 'd') ADVANCE(398);
      if (lookahead == 'f') ADVANCE(392);
      if (lookahead == 'l') ADVANCE(378);
      if (lookahead == 's') ADVANCE(355);
      if (lookahead == 'u') ADVANCE(357);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 25:
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'a') ADVANCE(224);
      if (lookahead == 'b') ADVANCE(179);
      if (lookahead == 'c') ADVANCE(121);
      if (lookahead == 'd') ADVANCE(177);
      if (lookahead == 'f') ADVANCE(142);
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
      if (lookahead == '/') ADVANCE(244);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '0') ADVANCE(423);
      if (lookahead == '=') ADVANCE(290);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(424);
      END_STATE();
    case 29:
      if (lookahead == '0') ADVANCE(423);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(424);
      END_STATE();
    case 30:
      if (lookahead == '1') ADVANCE(34);
      if (lookahead == '3') ADVANCE(35);
      if (lookahead == '6') ADVANCE(38);
      if (lookahead == '8') ADVANCE(327);
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 31:
      if (lookahead == '1') ADVANCE(34);
      if (lookahead == '3') ADVANCE(35);
      if (lookahead == '6') ADVANCE(38);
      if (lookahead == '8') ADVANCE(327);
      if (lookahead == 't') ADVANCE(189);
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
      if (lookahead == 'n') ADVANCE(132);
      if (lookahead == 's') ADVANCE(133);
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
      if (lookahead == '=') ADVANCE(449);
      END_STATE();
    case 44:
      if (lookahead == '=') ADVANCE(289);
      END_STATE();
    case 45:
      if (lookahead == '=') ADVANCE(448);
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
      if (lookahead == '[') ADVANCE(299);
      END_STATE();
    case 50:
      if (lookahead == ']') ADVANCE(300);
      END_STATE();
    case 51:
      if (lookahead == '_') ADVANCE(227);
      END_STATE();
    case 52:
      if (lookahead == '_') ADVANCE(76);
      END_STATE();
    case 53:
      if (lookahead == '_') ADVANCE(72);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(146);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(87);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(151);
      END_STATE();
    case 57:
      if (lookahead == '_') ADVANCE(74);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(204);
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead == 'i') ADVANCE(117);
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(149);
      if (lookahead == 'l') ADVANCE(182);
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(231);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(269);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(167);
      if (lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(220);
      if (lookahead == 'r') ADVANCE(349);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 75:
      if (lookahead == 'b') ADVANCE(147);
      END_STATE();
    case 76:
      if (lookahead == 'b') ADVANCE(73);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(312);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(97);
      END_STATE();
    case 79:
      if (lookahead == 'c') ADVANCE(144);
      END_STATE();
    case 80:
      if (lookahead == 'c') ADVANCE(212);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(94);
      if (lookahead == 'i') ADVANCE(166);
      if (lookahead == 'p') ADVANCE(191);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(86);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(85);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(197);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(109);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(102);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(103);
      END_STATE();
    case 89:
      if (lookahead == 'd') ADVANCE(90);
      if (lookahead == 'r') ADVANCE(110);
      if (lookahead == 't') ADVANCE(221);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(136);
      END_STATE();
    case 91:
      if (lookahead == 'd') ADVANCE(199);
      END_STATE();
    case 92:
      if (lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(315);
      if (lookahead == 'i') ADVANCE(219);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(468);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(310);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 115:
      if (lookahead == 'f') ADVANCE(184);
      END_STATE();
    case 116:
      if (lookahead == 'f') ADVANCE(139);
      END_STATE();
    case 117:
      if (lookahead == 'g') ADVANCE(271);
      END_STATE();
    case 118:
      if (lookahead == 'g') ADVANCE(283);
      END_STATE();
    case 119:
      if (lookahead == 'g') ADVANCE(291);
      END_STATE();
    case 120:
      if (lookahead == 'g') ADVANCE(154);
      END_STATE();
    case 121:
      if (lookahead == 'h') ADVANCE(65);
      END_STATE();
    case 122:
      if (lookahead == 'h') ADVANCE(65);
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 123:
      if (lookahead == 'h') ADVANCE(275);
      END_STATE();
    case 124:
      if (lookahead == 'h') ADVANCE(127);
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(230);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(215);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(216);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(345);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(228);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(181);
      if (lookahead == 'm') ADVANCE(158);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(207);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(135);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 152:
      if (lookahead == 'm') ADVANCE(307);
      END_STATE();
    case 153:
      if (lookahead == 'm') ADVANCE(96);
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 154:
      if (lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 155:
      if (lookahead == 'm') ADVANCE(137);
      END_STATE();
    case 156:
      if (lookahead == 'm') ADVANCE(70);
      END_STATE();
    case 157:
      if (lookahead == 'm') ADVANCE(138);
      END_STATE();
    case 158:
      if (lookahead == 'm') ADVANCE(113);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(84);
      if (lookahead == 'v') ADVANCE(66);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(281);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(270);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(309);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(353);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(211);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(225);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(351);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 185:
      if (lookahead == 'p') ADVANCE(214);
      END_STATE();
    case 186:
      if (lookahead == 'q') ADVANCE(229);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(341);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(301);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(347);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 194:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(192);
      if (lookahead == 'u') ADVANCE(218);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 200:
      if (lookahead == 's') ADVANCE(417);
      END_STATE();
    case 201:
      if (lookahead == 's') ADVANCE(274);
      END_STATE();
    case 202:
      if (lookahead == 's') ADVANCE(311);
      END_STATE();
    case 203:
      if (lookahead == 's') ADVANCE(115);
      END_STATE();
    case 204:
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 205:
      if (lookahead == 's') ADVANCE(201);
      END_STATE();
    case 206:
      if (lookahead == 's') ADVANCE(202);
      END_STATE();
    case 207:
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 208:
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(337);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(306);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(419);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(279);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(305);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(276);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(277);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(223);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 224:
      if (lookahead == 'u') ADVANCE(218);
      END_STATE();
    case 225:
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 226:
      if (lookahead == 'u') ADVANCE(195);
      END_STATE();
    case 227:
      if (lookahead == 'u') ADVANCE(170);
      END_STATE();
    case 228:
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 229:
      if (lookahead == 'u') ADVANCE(114);
      END_STATE();
    case 230:
      if (lookahead == 'v') ADVANCE(95);
      END_STATE();
    case 231:
      if (lookahead == 'y') ADVANCE(54);
      END_STATE();
    case 232:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(426);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(428);
      END_STATE();
    case 233:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(427);
      END_STATE();
    case 234:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(428);
      END_STATE();
    case 235:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(432);
      END_STATE();
    case 236:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(469);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      END_STATE();
    case 242:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      END_STATE();
    case 243:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(242);
      END_STATE();
    case 244:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 245:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(474);
      if (lookahead == '\r') ADVANCE(475);
      END_STATE();
    case 246:
      if (eof) ADVANCE(251);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 247:
      if (eof) ADVANCE(251);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(246)
      END_STATE();
    case 248:
      if (eof) ADVANCE(251);
      if (lookahead == '\n') SKIP(250)
      END_STATE();
    case 249:
      if (eof) ADVANCE(251);
      if (lookahead == '\n') SKIP(250)
      if (lookahead == '\r') SKIP(248)
      END_STATE();
    case 250:
      if (eof) ADVANCE(251);
      if (lookahead == '!') ADVANCE(43);
      if (lookahead == '#') ADVANCE(81);
      if (lookahead == '$') ADVANCE(416);
      if (lookahead == '%') ADVANCE(442);
      if (lookahead == '&') ADVANCE(445);
      if (lookahead == ')') ADVANCE(303);
      if (lookahead == '*') ADVANCE(440);
      if (lookahead == '+') ADVANCE(436);
      if (lookahead == '-') ADVANCE(438);
      if (lookahead == '.') ADVANCE(421);
      if (lookahead == '/') ADVANCE(441);
      if (lookahead == ':') ADVANCE(456);
      if (lookahead == ';') ADVANCE(287);
      if (lookahead == '<') ADVANCE(254);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '>') ADVANCE(267);
      if (lookahead == '?') ADVANCE(455);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == '\\') SKIP(249)
      if (lookahead == ']') ADVANCE(50);
      if (lookahead == '^') ADVANCE(447);
      if (lookahead == 'a') ADVANCE(412);
      if (lookahead == 'b') ADVANCE(377);
      if (lookahead == 'c') ADVANCE(383);
      if (lookahead == 'd') ADVANCE(398);
      if (lookahead == 'f') ADVANCE(392);
      if (lookahead == 'l') ADVANCE(378);
      if (lookahead == 's') ADVANCE(354);
      if (lookahead == 'u') ADVANCE(356);
      if (lookahead == '|') ADVANCE(446);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(250)
      if (('A' <= lookahead && lookahead <= '_') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(415);
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
      if (lookahead == '<') ADVANCE(444);
      if (lookahead == '=') ADVANCE(451);
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
      if (lookahead == '\n') ADVANCE(474);
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
      if (lookahead == '>') ADVANCE(474);
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
          lookahead == '>') ADVANCE(474);
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
      if (lookahead == '=') ADVANCE(450);
      if (lookahead == '>') ADVANCE(443);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_union);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_using);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(448);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_le);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_le);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_u16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_u32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_u64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_u128);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_u128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_s8);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_s8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_s16);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_s16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_s32);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_s32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_s64);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_s64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_s128);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_s128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_char16);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_char16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_str);
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_str);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_auto);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_auto);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
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
      if (lookahead == 't') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(358);
      if (lookahead == '3') ADVANCE(359);
      if (lookahead == '6') ADVANCE(362);
      if (lookahead == '8') ADVANCE(328);
      if (lookahead == 't') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(361);
      if (lookahead == '3') ADVANCE(360);
      if (lookahead == '6') ADVANCE(363);
      if (lookahead == '8') ADVANCE(318);
      if (lookahead == 'n') ADVANCE(387);
      if (lookahead == 's') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(365);
      if (lookahead == '6') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(366);
      if (lookahead == '6') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(314);
      if (lookahead == 'o') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(386);
      if (lookahead == 'r') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_dollar);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_this);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_this);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_parent);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_parent);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_number_literal);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'b') ADVANCE(232);
      if (lookahead == 'o') ADVANCE(233);
      if (lookahead == 'x') ADVANCE(235);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(432);
      if (('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(425);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(422);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(426);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(428);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(422);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(427);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(428);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'U') ADVANCE(431);
      if (lookahead == 'b') ADVANCE(232);
      if (lookahead == 'o') ADVANCE(233);
      if (lookahead == 'x') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'U') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(428);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(432);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(449);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(289);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(290);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '/') ADVANCE(474);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(452);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(453);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '^') ADVANCE(454);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_CARET_CARET);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(460);
      if (lookahead == '/') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(462);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(459);
      if (lookahead == '/') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(460);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(460);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(458);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(462);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(462);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_character_literal_token1);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_character_literal_token1);
      if (lookahead == '\n') ADVANCE(470);
      if (lookahead == '\r') ADVANCE(469);
      if (lookahead == 'U') ADVANCE(243);
      if (lookahead == 'u') ADVANCE(239);
      if (lookahead == 'x') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(472);
      if (lookahead != 0) ADVANCE(469);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_character_literal_token1);
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '/') ADVANCE(474);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_character_literal_token1);
      if (lookahead == '\\') ADVANCE(12);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_boolean_literal);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\\') ADVANCE(12);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(469);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(471);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(474);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(474);
      if (lookahead == '\\') ADVANCE(245);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 250},
  [2] = {.lex_state = 250},
  [3] = {.lex_state = 250},
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
  [23] = {.lex_state = 250},
  [24] = {.lex_state = 250},
  [25] = {.lex_state = 250},
  [26] = {.lex_state = 250},
  [27] = {.lex_state = 250},
  [28] = {.lex_state = 17},
  [29] = {.lex_state = 17},
  [30] = {.lex_state = 17},
  [31] = {.lex_state = 250},
  [32] = {.lex_state = 250},
  [33] = {.lex_state = 250},
  [34] = {.lex_state = 250},
  [35] = {.lex_state = 250},
  [36] = {.lex_state = 250},
  [37] = {.lex_state = 250},
  [38] = {.lex_state = 250},
  [39] = {.lex_state = 250},
  [40] = {.lex_state = 250},
  [41] = {.lex_state = 250},
  [42] = {.lex_state = 250},
  [43] = {.lex_state = 250},
  [44] = {.lex_state = 250},
  [45] = {.lex_state = 250},
  [46] = {.lex_state = 250},
  [47] = {.lex_state = 250},
  [48] = {.lex_state = 24},
  [49] = {.lex_state = 17},
  [50] = {.lex_state = 17},
  [51] = {.lex_state = 17},
  [52] = {.lex_state = 17},
  [53] = {.lex_state = 17},
  [54] = {.lex_state = 16},
  [55] = {.lex_state = 250},
  [56] = {.lex_state = 16},
  [57] = {.lex_state = 16},
  [58] = {.lex_state = 16},
  [59] = {.lex_state = 16},
  [60] = {.lex_state = 16},
  [61] = {.lex_state = 250},
  [62] = {.lex_state = 16},
  [63] = {.lex_state = 16},
  [64] = {.lex_state = 16},
  [65] = {.lex_state = 16},
  [66] = {.lex_state = 250},
  [67] = {.lex_state = 16},
  [68] = {.lex_state = 250},
  [69] = {.lex_state = 16},
  [70] = {.lex_state = 250},
  [71] = {.lex_state = 16},
  [72] = {.lex_state = 16},
  [73] = {.lex_state = 16},
  [74] = {.lex_state = 16},
  [75] = {.lex_state = 16},
  [76] = {.lex_state = 16},
  [77] = {.lex_state = 25},
  [78] = {.lex_state = 25},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 19},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 19},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 19},
  [88] = {.lex_state = 19},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 11},
  [94] = {.lex_state = 17},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 11},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 19},
  [99] = {.lex_state = 19},
  [100] = {.lex_state = 11},
  [101] = {.lex_state = 19},
  [102] = {.lex_state = 19},
  [103] = {.lex_state = 19},
  [104] = {.lex_state = 19},
  [105] = {.lex_state = 17},
  [106] = {.lex_state = 17},
  [107] = {.lex_state = 19},
  [108] = {.lex_state = 13},
  [109] = {.lex_state = 19},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 19},
  [113] = {.lex_state = 19},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 17},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 17},
  [124] = {.lex_state = 250},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 26},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 250},
  [130] = {.lex_state = 19},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 261},
  [133] = {.lex_state = 17},
  [134] = {.lex_state = 17},
  [135] = {.lex_state = 17},
  [136] = {.lex_state = 250},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 17},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 19},
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
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_boolean_literal] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(140),
    [sym__top_level_statement] = STATE(27),
    [sym__preproc_directive] = STATE(27),
    [sym_include] = STATE(27),
    [sym_define] = STATE(27),
    [sym_pragma] = STATE(27),
    [sym_struct_definition] = STATE(27),
    [sym_union_definition] = STATE(27),
    [sym__definition_statement] = STATE(27),
    [sym_using_definition] = STATE(27),
    [sym_variable_definition] = STATE(27),
    [sym_variable_placement] = STATE(27),
    [sym_assignation_statement] = STATE(27),
    [sym_array_definition] = STATE(27),
    [sym__type] = STATE(87),
    [sym__primitive_type] = STATE(103),
    [sym_endian_indicator] = STATE(77),
    [sym_primitive_type] = STATE(104),
    [sym__identifier] = STATE(106),
    [sym__type_identifier] = STATE(87),
    [aux_sym_source_file_repeat1] = STATE(27),
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
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_DOT,
    STATE(5), 1,
      aux_sym_field_expression_repeat1,
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
  [66] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_DOT,
    STATE(3), 1,
      aux_sym_field_expression_repeat1,
    ACTIONS(33), 23,
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
  [132] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_DOT,
    STATE(3), 1,
      aux_sym_field_expression_repeat1,
    ACTIONS(40), 23,
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
    ACTIONS(42), 29,
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
  [198] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_DOT,
    STATE(3), 1,
      aux_sym_field_expression_repeat1,
    ACTIONS(40), 23,
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
    ACTIONS(42), 29,
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
  [264] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 24,
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
    ACTIONS(46), 29,
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
  [325] = 3,
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
    ACTIONS(50), 29,
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
  [386] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_SLASH,
    ACTIONS(66), 1,
      anon_sym_AMP,
    ACTIONS(68), 1,
      anon_sym_CARET,
    ACTIONS(54), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(58), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(60), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(64), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(70), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(52), 13,
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
    ACTIONS(56), 24,
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
  [462] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 23,
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
    ACTIONS(74), 29,
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
  [522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 23,
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
    ACTIONS(78), 29,
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
  [582] = 3,
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
    ACTIONS(82), 29,
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
  [642] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_SLASH,
    ACTIONS(66), 1,
      anon_sym_AMP,
    ACTIONS(68), 1,
      anon_sym_CARET,
    ACTIONS(88), 1,
      anon_sym_PIPE,
    ACTIONS(90), 1,
      anon_sym_AMP_AMP,
    ACTIONS(92), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(94), 1,
      anon_sym_CARET_CARET,
    ACTIONS(54), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(58), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(60), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(64), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(70), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(84), 10,
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
    ACTIONS(86), 23,
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
  [726] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_SLASH,
    ACTIONS(66), 1,
      anon_sym_AMP,
    ACTIONS(68), 1,
      anon_sym_CARET,
    ACTIONS(88), 1,
      anon_sym_PIPE,
    ACTIONS(90), 1,
      anon_sym_AMP_AMP,
    ACTIONS(92), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(94), 1,
      anon_sym_CARET_CARET,
    ACTIONS(54), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(58), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(60), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(64), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(70), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(96), 10,
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
    ACTIONS(98), 23,
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
  [810] = 3,
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
    ACTIONS(102), 29,
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
  [870] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_SLASH,
    ACTIONS(66), 1,
      anon_sym_AMP,
    ACTIONS(54), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(58), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(60), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(64), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(70), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(52), 13,
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
    ACTIONS(56), 25,
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
  [944] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_SLASH,
    ACTIONS(54), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(58), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(60), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(64), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(70), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(52), 13,
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
    ACTIONS(56), 26,
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
  [1016] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_SLASH,
    ACTIONS(58), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(60), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(52), 19,
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
    ACTIONS(56), 28,
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
  [1082] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 23,
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
    ACTIONS(56), 29,
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
  [1142] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_SLASH,
    ACTIONS(60), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(52), 21,
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
    ACTIONS(56), 28,
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
  [1206] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_SLASH,
    ACTIONS(58), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(60), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(64), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(52), 17,
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
    ACTIONS(56), 28,
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
  [1274] = 3,
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
    ACTIONS(106), 29,
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
  [1334] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_SLASH,
    ACTIONS(66), 1,
      anon_sym_AMP,
    ACTIONS(68), 1,
      anon_sym_CARET,
    ACTIONS(88), 1,
      anon_sym_PIPE,
    ACTIONS(54), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(58), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(60), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(64), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(70), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(52), 13,
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
    ACTIONS(56), 23,
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
  [1412] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_SLASH,
    ACTIONS(66), 1,
      anon_sym_AMP,
    ACTIONS(68), 1,
      anon_sym_CARET,
    ACTIONS(88), 1,
      anon_sym_PIPE,
    ACTIONS(90), 1,
      anon_sym_AMP_AMP,
    ACTIONS(94), 1,
      anon_sym_CARET_CARET,
    ACTIONS(54), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(58), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(60), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(64), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(70), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(52), 11,
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
    ACTIONS(56), 23,
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
  [1494] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_SLASH,
    ACTIONS(66), 1,
      anon_sym_AMP,
    ACTIONS(68), 1,
      anon_sym_CARET,
    ACTIONS(88), 1,
      anon_sym_PIPE,
    ACTIONS(94), 1,
      anon_sym_CARET_CARET,
    ACTIONS(54), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(58), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(60), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(64), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(70), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(52), 12,
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
    ACTIONS(56), 23,
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
  [1574] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_SLASH,
    ACTIONS(66), 1,
      anon_sym_AMP,
    ACTIONS(68), 1,
      anon_sym_CARET,
    ACTIONS(88), 1,
      anon_sym_PIPE,
    ACTIONS(90), 1,
      anon_sym_AMP_AMP,
    ACTIONS(92), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(94), 1,
      anon_sym_CARET_CARET,
    ACTIONS(112), 1,
      anon_sym_QMARK,
    ACTIONS(54), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(58), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(60), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(64), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(70), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(108), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(110), 23,
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
  [1656] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    ACTIONS(116), 1,
      anon_sym_POUNDinclude,
    ACTIONS(119), 1,
      anon_sym_POUNDdefine,
    ACTIONS(122), 1,
      anon_sym_POUNDpragma,
    ACTIONS(125), 1,
      anon_sym_struct,
    ACTIONS(128), 1,
      anon_sym_union,
    ACTIONS(131), 1,
      anon_sym_using,
    ACTIONS(140), 1,
      sym_identifier,
    ACTIONS(143), 1,
      sym_dollar,
    STATE(77), 1,
      sym_endian_indicator,
    STATE(103), 1,
      sym__primitive_type,
    STATE(104), 1,
      sym_primitive_type,
    STATE(106), 1,
      sym__identifier,
    ACTIONS(134), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(87), 2,
      sym__type,
      sym__type_identifier,
    STATE(26), 14,
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
  [1742] = 18,
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
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(77), 1,
      sym_endian_indicator,
    STATE(103), 1,
      sym__primitive_type,
    STATE(104), 1,
      sym_primitive_type,
    STATE(106), 1,
      sym__identifier,
    ACTIONS(19), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(87), 2,
      sym__type,
      sym__type_identifier,
    STATE(26), 14,
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
  [1828] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_padding,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(162), 1,
      sym_dollar,
    STATE(77), 1,
      sym_endian_indicator,
    STATE(103), 1,
      sym__primitive_type,
    STATE(104), 1,
      sym_primitive_type,
    STATE(105), 1,
      sym__identifier,
    ACTIONS(153), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(88), 2,
      sym__type,
      sym__type_identifier,
    STATE(28), 6,
      sym__definition_statement,
      sym_variable_definition,
      sym_assignation_statement,
      sym_array_definition,
      sym_padding,
      aux_sym_field_list_repeat1,
    ACTIONS(156), 17,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
  [1891] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(165), 1,
      anon_sym_padding,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
    ACTIONS(169), 1,
      sym_dollar,
    STATE(77), 1,
      sym_endian_indicator,
    STATE(103), 1,
      sym__primitive_type,
    STATE(104), 1,
      sym_primitive_type,
    STATE(105), 1,
      sym__identifier,
    ACTIONS(19), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(88), 2,
      sym__type,
      sym__type_identifier,
    STATE(28), 6,
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
  [1954] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(165), 1,
      anon_sym_padding,
    ACTIONS(169), 1,
      sym_dollar,
    ACTIONS(171), 1,
      anon_sym_RBRACE,
    STATE(77), 1,
      sym_endian_indicator,
    STATE(103), 1,
      sym__primitive_type,
    STATE(104), 1,
      sym_primitive_type,
    STATE(105), 1,
      sym__identifier,
    ACTIONS(19), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(88), 2,
      sym__type,
      sym__type_identifier,
    STATE(29), 6,
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
  [2017] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(175), 23,
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
  [2053] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(179), 23,
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
  [2089] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(183), 23,
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
  [2125] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(187), 23,
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
  [2161] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(191), 23,
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
  [2197] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(195), 23,
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
  [2233] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(199), 23,
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
  [2269] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(203), 23,
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
  [2305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(207), 23,
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
  [2341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(211), 23,
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
  [2377] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(215), 23,
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
  [2413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(219), 23,
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
  [2449] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(223), 23,
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
  [2485] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(227), 23,
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
  [2521] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(231), 23,
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
  [2557] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(235), 23,
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
  [2593] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(239), 23,
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
  [2629] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym_identifier,
    STATE(77), 1,
      sym_endian_indicator,
    STATE(103), 1,
      sym__primitive_type,
    STATE(104), 1,
      sym_primitive_type,
    ACTIONS(19), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(137), 2,
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
  [2672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(227), 21,
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
  [2703] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(211), 21,
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
  [2734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(199), 21,
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
  [2765] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(219), 21,
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
  [2796] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(243), 21,
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
  [2827] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      sym_identifier,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    STATE(92), 1,
      sym__offset,
    ACTIONS(253), 2,
      sym_this,
      sym_parent,
    ACTIONS(255), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(251), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(55), 10,
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
  [2871] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_SLASH,
    ACTIONS(66), 1,
      anon_sym_AMP,
    ACTIONS(68), 1,
      anon_sym_CARET,
    ACTIONS(88), 1,
      anon_sym_PIPE,
    ACTIONS(90), 1,
      anon_sym_AMP_AMP,
    ACTIONS(92), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(94), 1,
      anon_sym_CARET_CARET,
    ACTIONS(112), 1,
      anon_sym_QMARK,
    ACTIONS(54), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(58), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(60), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(64), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(261), 2,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(70), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2925] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      sym_identifier,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 2,
      sym_this,
      sym_parent,
    ACTIONS(255), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(263), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(61), 10,
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
  [2966] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      sym_identifier,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 2,
      sym_this,
      sym_parent,
    ACTIONS(255), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(265), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(13), 10,
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
  [3007] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      sym_identifier,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 2,
      sym_this,
      sym_parent,
    ACTIONS(255), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(267), 3,
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
  [3048] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      sym_identifier,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 2,
      sym_this,
      sym_parent,
    ACTIONS(255), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(269), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(68), 10,
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
  [3089] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      sym_identifier,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 2,
      sym_this,
      sym_parent,
    ACTIONS(255), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(271), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(66), 10,
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
  [3130] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_SLASH,
    ACTIONS(66), 1,
      anon_sym_AMP,
    ACTIONS(68), 1,
      anon_sym_CARET,
    ACTIONS(88), 1,
      anon_sym_PIPE,
    ACTIONS(90), 1,
      anon_sym_AMP_AMP,
    ACTIONS(92), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(94), 1,
      anon_sym_CARET_CARET,
    ACTIONS(112), 1,
      anon_sym_QMARK,
    ACTIONS(273), 1,
      anon_sym_COLON,
    ACTIONS(54), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(58), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(60), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(64), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(70), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3183] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      sym_identifier,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 2,
      sym_this,
      sym_parent,
    ACTIONS(255), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(275), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(70), 10,
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
  [3224] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      sym_identifier,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 2,
      sym_this,
      sym_parent,
    ACTIONS(255), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(277), 3,
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
  [3265] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      sym_identifier,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 2,
      sym_this,
      sym_parent,
    ACTIONS(255), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(279), 3,
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
  [3306] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      sym_identifier,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 2,
      sym_this,
      sym_parent,
    ACTIONS(255), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(281), 3,
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
  [3347] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_SLASH,
    ACTIONS(66), 1,
      anon_sym_AMP,
    ACTIONS(68), 1,
      anon_sym_CARET,
    ACTIONS(88), 1,
      anon_sym_PIPE,
    ACTIONS(90), 1,
      anon_sym_AMP_AMP,
    ACTIONS(92), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(94), 1,
      anon_sym_CARET_CARET,
    ACTIONS(112), 1,
      anon_sym_QMARK,
    ACTIONS(283), 1,
      anon_sym_SEMI,
    ACTIONS(54), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(58), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(60), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(64), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(70), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3400] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      sym_identifier,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 2,
      sym_this,
      sym_parent,
    ACTIONS(255), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(285), 3,
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
  [3441] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_SLASH,
    ACTIONS(66), 1,
      anon_sym_AMP,
    ACTIONS(68), 1,
      anon_sym_CARET,
    ACTIONS(88), 1,
      anon_sym_PIPE,
    ACTIONS(90), 1,
      anon_sym_AMP_AMP,
    ACTIONS(92), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(94), 1,
      anon_sym_CARET_CARET,
    ACTIONS(112), 1,
      anon_sym_QMARK,
    ACTIONS(287), 1,
      anon_sym_SEMI,
    ACTIONS(54), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(58), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(60), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(64), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(70), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3494] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      sym_identifier,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 2,
      sym_this,
      sym_parent,
    ACTIONS(255), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(289), 3,
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
  [3535] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_SLASH,
    ACTIONS(66), 1,
      anon_sym_AMP,
    ACTIONS(68), 1,
      anon_sym_CARET,
    ACTIONS(88), 1,
      anon_sym_PIPE,
    ACTIONS(90), 1,
      anon_sym_AMP_AMP,
    ACTIONS(92), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(94), 1,
      anon_sym_CARET_CARET,
    ACTIONS(112), 1,
      anon_sym_QMARK,
    ACTIONS(291), 1,
      anon_sym_RPAREN,
    ACTIONS(54), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(58), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(60), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(64), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(70), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3588] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      sym_identifier,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 2,
      sym_this,
      sym_parent,
    ACTIONS(255), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(293), 3,
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
  [3629] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      sym_identifier,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 2,
      sym_this,
      sym_parent,
    ACTIONS(255), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(295), 3,
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
  [3670] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      sym_identifier,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 2,
      sym_this,
      sym_parent,
    ACTIONS(255), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(297), 3,
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
  [3711] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      sym_identifier,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 2,
      sym_this,
      sym_parent,
    ACTIONS(255), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(299), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(18), 10,
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
  [3752] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      sym_identifier,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 2,
      sym_this,
      sym_parent,
    ACTIONS(255), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(301), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(25), 10,
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
  [3793] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      sym_identifier,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 2,
      sym_this,
      sym_parent,
    ACTIONS(255), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(303), 3,
      sym_dollar,
      sym_number_literal,
      sym_boolean_literal,
    STATE(20), 10,
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
  [3834] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_char,
    STATE(101), 1,
      sym_primitive_type,
    ACTIONS(305), 16,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
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
  [3862] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_char,
    ACTIONS(307), 16,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
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
  [3887] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_endian,
    ACTIONS(313), 1,
      anon_sym_MIME,
    ACTIONS(315), 1,
      anon_sym_base_address,
    ACTIONS(317), 1,
      anon_sym_eval_depth,
    ACTIONS(319), 1,
      anon_sym_array_limit,
    ACTIONS(321), 1,
      anon_sym_pattern_limit,
    ACTIONS(323), 1,
      sym_pragma_once,
    STATE(32), 6,
      sym_pragma_endian,
      sym_pragma_mime,
      sym_pragma_base_address,
      sym_pragma_eval_depth,
      sym_pragma_array_limit,
      sym_pragma_pattern_limit,
  [3920] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(124), 1,
      sym__variable_attribute,
    ACTIONS(327), 4,
      anon_sym_hidden,
      anon_sym_inline,
      anon_sym_no_unique_address,
      anon_sym_static,
    ACTIONS(325), 6,
      anon_sym_color,
      anon_sym_name,
      anon_sym_comment,
      anon_sym_format,
      anon_sym_transform,
      anon_sym_pointer_base,
  [3941] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_SEMI,
    ACTIONS(331), 1,
      anon_sym_AT,
    ACTIONS(333), 1,
      anon_sym_LBRACK,
    ACTIONS(335), 1,
      anon_sym_LBRACK_LBRACK,
    STATE(37), 1,
      sym__declaration_finish,
    STATE(90), 1,
      sym__array_size_wrapper,
    STATE(139), 1,
      sym_attribute,
  [3966] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_LBRACK,
    ACTIONS(335), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(337), 1,
      anon_sym_SEMI,
    STATE(51), 1,
      sym__declaration_finish,
    STATE(91), 1,
      sym__array_size_wrapper,
    STATE(142), 1,
      sym_attribute,
  [3988] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_RBRACK,
    STATE(133), 2,
      sym__array_size,
      sym__identifier,
    ACTIONS(341), 3,
      sym_identifier,
      sym_dollar,
      sym_number_literal,
  [4004] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_LBRACK,
    ACTIONS(347), 1,
      anon_sym_COMMA,
    ACTIONS(343), 3,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_LBRACK_LBRACK,
  [4019] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 2,
      sym_identifier,
      sym_dollar,
    ACTIONS(27), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [4032] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_COMMA,
    ACTIONS(353), 1,
      anon_sym_LBRACK,
    ACTIONS(351), 3,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_LBRACK_LBRACK,
  [4047] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(81), 1,
      sym__identifier_definition,
    STATE(86), 1,
      sym__identifier,
    STATE(99), 1,
      aux_sym__identifier_definition_repeat1,
    ACTIONS(355), 2,
      sym_identifier,
      sym_dollar,
  [4064] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(82), 1,
      sym__identifier_definition,
    STATE(86), 1,
      sym__identifier,
    STATE(99), 1,
      aux_sym__identifier_definition_repeat1,
    ACTIONS(355), 2,
      sym_identifier,
      sym_dollar,
  [4081] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(357), 1,
      anon_sym_SEMI,
    STATE(39), 1,
      sym__declaration_finish,
    STATE(139), 1,
      sym_attribute,
  [4097] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(359), 1,
      anon_sym_SEMI,
    STATE(40), 1,
      sym__declaration_finish,
    STATE(139), 1,
      sym_attribute,
  [4113] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(361), 1,
      anon_sym_SEMI,
    STATE(50), 1,
      sym__declaration_finish,
    STATE(142), 1,
      sym_attribute,
  [4129] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(363), 1,
      anon_sym_SEMI,
    STATE(33), 1,
      sym__declaration_finish,
    STATE(139), 1,
      sym_attribute,
  [4145] = 5,
    ACTIONS(365), 1,
      anon_sym_DQUOTE,
    ACTIONS(367), 1,
      aux_sym_string_literal_token1,
    ACTIONS(369), 1,
      sym_escape_sequence,
    ACTIONS(371), 1,
      sym_comment,
    STATE(100), 1,
      aux_sym_string_literal_repeat1,
  [4161] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(373), 1,
      anon_sym_LT,
    STATE(35), 2,
      sym_system_lib_string,
      sym_string_literal,
  [4175] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(375), 1,
      anon_sym_SEMI,
    STATE(53), 1,
      sym__declaration_finish,
    STATE(142), 1,
      sym_attribute,
  [4191] = 5,
    ACTIONS(371), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_DQUOTE,
    ACTIONS(379), 1,
      aux_sym_string_literal_token1,
    ACTIONS(382), 1,
      sym_escape_sequence,
    STATE(96), 1,
      aux_sym_string_literal_repeat1,
  [4207] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(385), 1,
      anon_sym_SEMI,
    STATE(38), 1,
      sym__declaration_finish,
    STATE(139), 1,
      sym_attribute,
  [4223] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(98), 1,
      aux_sym__identifier_definition_repeat1,
    STATE(144), 1,
      sym__identifier,
    ACTIONS(387), 2,
      sym_identifier,
      sym_dollar,
  [4237] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(84), 1,
      sym__identifier,
    STATE(98), 1,
      aux_sym__identifier_definition_repeat1,
    ACTIONS(390), 2,
      sym_identifier,
      sym_dollar,
  [4251] = 5,
    ACTIONS(371), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_DQUOTE,
    ACTIONS(394), 1,
      aux_sym_string_literal_token1,
    ACTIONS(396), 1,
      sym_escape_sequence,
    STATE(96), 1,
      aux_sym_string_literal_repeat1,
  [4267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 3,
      anon_sym_SEMI,
      sym_identifier,
      sym_dollar,
  [4276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 3,
      anon_sym_SEMI,
      sym_identifier,
      sym_dollar,
  [4285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 3,
      anon_sym_SEMI,
      sym_identifier,
      sym_dollar,
  [4294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 3,
      anon_sym_SEMI,
      sym_identifier,
      sym_dollar,
  [4303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [4312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [4321] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(118), 1,
      sym__identifier,
    ACTIONS(410), 2,
      sym_identifier,
      sym_dollar,
  [4332] = 3,
    ACTIONS(371), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_SQUOTE,
    ACTIONS(414), 2,
      aux_sym_character_literal_token1,
      sym_escape_sequence,
  [4343] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(117), 1,
      sym__identifier,
    ACTIONS(416), 2,
      sym_identifier,
      sym_dollar,
  [4354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
  [4362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 2,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
  [4370] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      sym_identifier,
    STATE(6), 1,
      sym__field_identifier,
  [4380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 2,
      sym_identifier,
      sym_dollar,
  [4388] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_DOT,
    STATE(4), 1,
      aux_sym_field_expression_repeat1,
  [4398] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_LBRACK,
    STATE(95), 1,
      sym__array_size_wrapper,
  [4408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 2,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
  [4416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_LBRACE,
    STATE(89), 1,
      sym_field_list,
  [4426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_LBRACE,
    STATE(97), 1,
      sym_field_list,
  [4436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 2,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
  [4444] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    STATE(122), 1,
      sym_string_literal,
  [4454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      sym_number_literal,
  [4461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_RPAREN,
  [4468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      sym_number_literal,
  [4475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_RBRACK_RBRACK,
  [4482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_SQUOTE,
  [4489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      sym_mime_type,
  [4496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      sym_endian_val,
  [4503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_LPAREN,
  [4510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_RBRACK_RBRACK,
  [4517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      sym_identifier,
  [4524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_SEMI,
  [4531] = 2,
    ACTIONS(371), 1,
      sym_comment,
    ACTIONS(456), 1,
      aux_sym_system_lib_string_token1,
  [4538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_RBRACK,
  [4545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      sym_number_literal,
  [4552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_number_literal,
  [4559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_RBRACK_RBRACK,
  [4566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_SEMI,
  [4573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_SEMI,
  [4580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_SEMI,
  [4587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      ts_builtin_sym_end,
  [4594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_GT,
  [4601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_SEMI,
  [4608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_EQ,
  [4615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_COMMA,
  [4622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 66,
  [SMALL_STATE(4)] = 132,
  [SMALL_STATE(5)] = 198,
  [SMALL_STATE(6)] = 264,
  [SMALL_STATE(7)] = 325,
  [SMALL_STATE(8)] = 386,
  [SMALL_STATE(9)] = 462,
  [SMALL_STATE(10)] = 522,
  [SMALL_STATE(11)] = 582,
  [SMALL_STATE(12)] = 642,
  [SMALL_STATE(13)] = 726,
  [SMALL_STATE(14)] = 810,
  [SMALL_STATE(15)] = 870,
  [SMALL_STATE(16)] = 944,
  [SMALL_STATE(17)] = 1016,
  [SMALL_STATE(18)] = 1082,
  [SMALL_STATE(19)] = 1142,
  [SMALL_STATE(20)] = 1206,
  [SMALL_STATE(21)] = 1274,
  [SMALL_STATE(22)] = 1334,
  [SMALL_STATE(23)] = 1412,
  [SMALL_STATE(24)] = 1494,
  [SMALL_STATE(25)] = 1574,
  [SMALL_STATE(26)] = 1656,
  [SMALL_STATE(27)] = 1742,
  [SMALL_STATE(28)] = 1828,
  [SMALL_STATE(29)] = 1891,
  [SMALL_STATE(30)] = 1954,
  [SMALL_STATE(31)] = 2017,
  [SMALL_STATE(32)] = 2053,
  [SMALL_STATE(33)] = 2089,
  [SMALL_STATE(34)] = 2125,
  [SMALL_STATE(35)] = 2161,
  [SMALL_STATE(36)] = 2197,
  [SMALL_STATE(37)] = 2233,
  [SMALL_STATE(38)] = 2269,
  [SMALL_STATE(39)] = 2305,
  [SMALL_STATE(40)] = 2341,
  [SMALL_STATE(41)] = 2377,
  [SMALL_STATE(42)] = 2413,
  [SMALL_STATE(43)] = 2449,
  [SMALL_STATE(44)] = 2485,
  [SMALL_STATE(45)] = 2521,
  [SMALL_STATE(46)] = 2557,
  [SMALL_STATE(47)] = 2593,
  [SMALL_STATE(48)] = 2629,
  [SMALL_STATE(49)] = 2672,
  [SMALL_STATE(50)] = 2703,
  [SMALL_STATE(51)] = 2734,
  [SMALL_STATE(52)] = 2765,
  [SMALL_STATE(53)] = 2796,
  [SMALL_STATE(54)] = 2827,
  [SMALL_STATE(55)] = 2871,
  [SMALL_STATE(56)] = 2925,
  [SMALL_STATE(57)] = 2966,
  [SMALL_STATE(58)] = 3007,
  [SMALL_STATE(59)] = 3048,
  [SMALL_STATE(60)] = 3089,
  [SMALL_STATE(61)] = 3130,
  [SMALL_STATE(62)] = 3183,
  [SMALL_STATE(63)] = 3224,
  [SMALL_STATE(64)] = 3265,
  [SMALL_STATE(65)] = 3306,
  [SMALL_STATE(66)] = 3347,
  [SMALL_STATE(67)] = 3400,
  [SMALL_STATE(68)] = 3441,
  [SMALL_STATE(69)] = 3494,
  [SMALL_STATE(70)] = 3535,
  [SMALL_STATE(71)] = 3588,
  [SMALL_STATE(72)] = 3629,
  [SMALL_STATE(73)] = 3670,
  [SMALL_STATE(74)] = 3711,
  [SMALL_STATE(75)] = 3752,
  [SMALL_STATE(76)] = 3793,
  [SMALL_STATE(77)] = 3834,
  [SMALL_STATE(78)] = 3862,
  [SMALL_STATE(79)] = 3887,
  [SMALL_STATE(80)] = 3920,
  [SMALL_STATE(81)] = 3941,
  [SMALL_STATE(82)] = 3966,
  [SMALL_STATE(83)] = 3988,
  [SMALL_STATE(84)] = 4004,
  [SMALL_STATE(85)] = 4019,
  [SMALL_STATE(86)] = 4032,
  [SMALL_STATE(87)] = 4047,
  [SMALL_STATE(88)] = 4064,
  [SMALL_STATE(89)] = 4081,
  [SMALL_STATE(90)] = 4097,
  [SMALL_STATE(91)] = 4113,
  [SMALL_STATE(92)] = 4129,
  [SMALL_STATE(93)] = 4145,
  [SMALL_STATE(94)] = 4161,
  [SMALL_STATE(95)] = 4175,
  [SMALL_STATE(96)] = 4191,
  [SMALL_STATE(97)] = 4207,
  [SMALL_STATE(98)] = 4223,
  [SMALL_STATE(99)] = 4237,
  [SMALL_STATE(100)] = 4251,
  [SMALL_STATE(101)] = 4267,
  [SMALL_STATE(102)] = 4276,
  [SMALL_STATE(103)] = 4285,
  [SMALL_STATE(104)] = 4294,
  [SMALL_STATE(105)] = 4303,
  [SMALL_STATE(106)] = 4312,
  [SMALL_STATE(107)] = 4321,
  [SMALL_STATE(108)] = 4332,
  [SMALL_STATE(109)] = 4343,
  [SMALL_STATE(110)] = 4354,
  [SMALL_STATE(111)] = 4362,
  [SMALL_STATE(112)] = 4370,
  [SMALL_STATE(113)] = 4380,
  [SMALL_STATE(114)] = 4388,
  [SMALL_STATE(115)] = 4398,
  [SMALL_STATE(116)] = 4408,
  [SMALL_STATE(117)] = 4416,
  [SMALL_STATE(118)] = 4426,
  [SMALL_STATE(119)] = 4436,
  [SMALL_STATE(120)] = 4444,
  [SMALL_STATE(121)] = 4454,
  [SMALL_STATE(122)] = 4461,
  [SMALL_STATE(123)] = 4468,
  [SMALL_STATE(124)] = 4475,
  [SMALL_STATE(125)] = 4482,
  [SMALL_STATE(126)] = 4489,
  [SMALL_STATE(127)] = 4496,
  [SMALL_STATE(128)] = 4503,
  [SMALL_STATE(129)] = 4510,
  [SMALL_STATE(130)] = 4517,
  [SMALL_STATE(131)] = 4524,
  [SMALL_STATE(132)] = 4531,
  [SMALL_STATE(133)] = 4538,
  [SMALL_STATE(134)] = 4545,
  [SMALL_STATE(135)] = 4552,
  [SMALL_STATE(136)] = 4559,
  [SMALL_STATE(137)] = 4566,
  [SMALL_STATE(138)] = 4573,
  [SMALL_STATE(139)] = 4580,
  [SMALL_STATE(140)] = 4587,
  [SMALL_STATE(141)] = 4594,
  [SMALL_STATE(142)] = 4601,
  [SMALL_STATE(143)] = 4608,
  [SMALL_STATE(144)] = 4615,
  [SMALL_STATE(145)] = 4622,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_expression_repeat1, 2, .production_id = 17),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_expression_repeat1, 2, .production_id = 17),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_expression_repeat1, 2, .production_id = 17), SHIFT_REPEAT(112),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_expression, 2, .production_id = 10),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_expression, 2, .production_id = 10),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_expression_repeat1, 2, .production_id = 16),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_expression_repeat1, 2, .production_id = 16),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_identifier, 1, .production_id = 15),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_identifier, 1, .production_id = 15),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_numeric_operator, 3, .production_id = 14),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_numeric_operator, 3, .production_id = 14),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_numeric_operator, 3),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_numeric_operator, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_numeric_operator, 5, .production_id = 23),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ternary_numeric_operator, 5, .production_id = 23),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_numeric_operator, 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_numeric_operator, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_literal, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_literal, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_literal, 3),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_literal, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define, 3),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(94),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(145),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(79),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(107),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(109),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(130),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(102),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(85),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(106),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(115),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(78),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(102),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(85),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(105),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_base_address, 2, .production_id = 6),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma_base_address, 2, .production_id = 6),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_placement, 5, .production_id = 19),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_placement, 5, .production_id = 19),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_definition, 5, .production_id = 18),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using_definition, 5, .production_id = 18),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_lib_string, 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_lib_string, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3, .production_id = 7),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 3, .production_id = 7),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 4, .production_id = 11),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 4, .production_id = 11),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_definition, 4, .production_id = 11),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union_definition, 4, .production_id = 11),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_definition, 4, .production_id = 12),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_definition, 4, .production_id = 12),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_eval_depth, 2, .production_id = 6),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma_eval_depth, 2, .production_id = 6),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignation_statement, 4, .production_id = 14),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignation_statement, 4, .production_id = 14),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_array_limit, 2, .production_id = 6),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma_array_limit, 2, .production_id = 6),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration_finish, 2, .production_id = 13),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declaration_finish, 2, .production_id = 13),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_pattern_limit, 2, .production_id = 6),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma_pattern_limit, 2, .production_id = 6),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_endian, 2, .production_id = 6),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma_endian, 2, .production_id = 6),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_mime, 2, .production_id = 6),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma_mime, 2, .production_id = 6),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_padding, 3, .production_id = 22),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_padding, 3, .production_id = 22),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endian_indicator, 1),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endian_indicator, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier_definition, 2, .production_id = 8),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier_definition, 2, .production_id = 8),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier_definition, 1, .production_id = 4),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier_definition, 1, .production_id = 4),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(96),
  [382] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(96),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_definition_repeat1, 2, .production_id = 9), SHIFT_REPEAT(144),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive_type, 2, .production_id = 5),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1, .production_id = 2),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive_type, 1, .production_id = 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_size_wrapper, 3, .production_id = 20),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 3),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_definition_repeat1, 2, .production_id = 4),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 2),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_size_wrapper, 2),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_attribute, 1, .production_id = 4),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, .production_id = 21),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_attribute, 4, .production_id = 24),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [470] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
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
