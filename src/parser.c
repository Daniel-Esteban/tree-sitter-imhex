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
  sym_this = 66,
  anon_sym_DOT = 67,
  anon_sym_parent = 68,
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
  sym_parent_access = 137,
  sym__number = 138,
  sym__operator = 139,
  sym_unary_numeric_operator = 140,
  sym_binary_numeric_operator = 141,
  sym_ternary_numeric_operator = 142,
  sym_string_literal = 143,
  sym_character_literal = 144,
  aux_sym_source_file_repeat1 = 145,
  aux_sym__identifier_definition_repeat1 = 146,
  aux_sym_field_list_repeat1 = 147,
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
  [sym_this] = sym_this,
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
  [sym_this] = {
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
      if (eof) ADVANCE(257);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == '"') ADVANCE(464);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '$') ADVANCE(423);
      if (lookahead == '%') ADVANCE(449);
      if (lookahead == '&') ADVANCE(452);
      if (lookahead == '\'') ADVANCE(470);
      if (lookahead == '(') ADVANCE(308);
      if (lookahead == ')') ADVANCE(309);
      if (lookahead == '*') ADVANCE(447);
      if (lookahead == '+') ADVANCE(444);
      if (lookahead == ',') ADVANCE(302);
      if (lookahead == '-') ADVANCE(446);
      if (lookahead == '.') ADVANCE(426);
      if (lookahead == '/') ADVANCE(448);
      if (lookahead == ':') ADVANCE(463);
      if (lookahead == ';') ADVANCE(293);
      if (lookahead == '<') ADVANCE(260);
      if (lookahead == '=') ADVANCE(292);
      if (lookahead == '>') ADVANCE(273);
      if (lookahead == '?') ADVANCE(462);
      if (lookahead == '@') ADVANCE(294);
      if (lookahead == 'M') ADVANCE(50);
      if (lookahead == '[') ADVANCE(299);
      if (lookahead == '\\') SKIP(250)
      if (lookahead == ']') ADVANCE(301);
      if (lookahead == '^') ADVANCE(454);
      if (lookahead == 'a') ADVANCE(201);
      if (lookahead == 'b') ADVANCE(61);
      if (lookahead == 'c') ADVANCE(125);
      if (lookahead == 'd') ADVANCE(180);
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead == 'f') ADVANCE(62);
      if (lookahead == 'h') ADVANCE(131);
      if (lookahead == 'i') ADVANCE(168);
      if (lookahead == 'l') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(163);
      if (lookahead == 'p') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(109);
      if (lookahead == 's') ADVANCE(33);
      if (lookahead == 't') ADVANCE(127);
      if (lookahead == 'u') ADVANCE(36);
      if (lookahead == '{') ADVANCE(303);
      if (lookahead == '|') ADVANCE(453);
      if (lookahead == '}') ADVANCE(304);
      if (lookahead == '~') ADVANCE(440);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(19)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(19)
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
      if (lookahead == '\n') SKIP(18)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(27)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(21)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '"') ADVANCE(464);
      if (lookahead == '/') ADVANCE(465);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(468);
      if (lookahead != 0) ADVANCE(469);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(477);
      if (lookahead == '\r') ADVANCE(476);
      if (lookahead == 'U') ADVANCE(246);
      if (lookahead == 'u') ADVANCE(242);
      if (lookahead == 'x') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      if (lookahead != 0) ADVANCE(476);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '\'') ADVANCE(470);
      if (lookahead == '/') ADVANCE(473);
      if (lookahead == '\\') ADVANCE(472);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(474);
      if (lookahead != 0) ADVANCE(471);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(28)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '\r') SKIP(14)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(29)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(29)
      if (lookahead == '\r') SKIP(16)
      END_STATE();
    case 18:
      if (lookahead == '!') ADVANCE(441);
      if (lookahead == '"') ADVANCE(464);
      if (lookahead == '$') ADVANCE(423);
      if (lookahead == '\'') ADVANCE(470);
      if (lookahead == '(') ADVANCE(308);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '0') ADVANCE(436);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'f') ADVANCE(377);
      if (lookahead == 'p') ADVANCE(373);
      if (lookahead == 't') ADVANCE(389);
      if (lookahead == '~') ADVANCE(440);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(437);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(464);
      if (lookahead == '$') ADVANCE(423);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '.') ADVANCE(426);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '0') ADVANCE(436);
      if (lookahead == '<') ADVANCE(259);
      if (lookahead == '=') ADVANCE(291);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'a') ADVANCE(419);
      if (lookahead == 'b') ADVANCE(383);
      if (lookahead == 'c') ADVANCE(391);
      if (lookahead == 'd') ADVANCE(405);
      if (lookahead == 'f') ADVANCE(398);
      if (lookahead == 'l') ADVANCE(384);
      if (lookahead == 'p') ADVANCE(374);
      if (lookahead == 's') ADVANCE(361);
      if (lookahead == 't') ADVANCE(390);
      if (lookahead == 'u') ADVANCE(363);
      if (lookahead == '}') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(437);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(464);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == '$') ADVANCE(423);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '.') ADVANCE(426);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '0') ADVANCE(436);
      if (lookahead == ';') ADVANCE(293);
      if (lookahead == '=') ADVANCE(291);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == ']') ADVANCE(300);
      if (lookahead == 'p') ADVANCE(373);
      if (lookahead == 't') ADVANCE(390);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(437);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 22:
      if (lookahead == '\'') ADVANCE(470);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      END_STATE();
    case 23:
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '/') ADVANCE(481);
      END_STATE();
    case 24:
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '/') ADVANCE(480);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == '*') ADVANCE(24);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'a') ADVANCE(419);
      if (lookahead == 'b') ADVANCE(383);
      if (lookahead == 'c') ADVANCE(391);
      if (lookahead == 'd') ADVANCE(405);
      if (lookahead == 'f') ADVANCE(398);
      if (lookahead == 'l') ADVANCE(384);
      if (lookahead == 's') ADVANCE(361);
      if (lookahead == 'u') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 27:
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'a') ADVANCE(227);
      if (lookahead == 'b') ADVANCE(182);
      if (lookahead == 'c') ADVANCE(124);
      if (lookahead == 'd') ADVANCE(180);
      if (lookahead == 'f') ADVANCE(145);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 'u') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      END_STATE();
    case 28:
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '\\') SKIP(15)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 29:
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '\\') SKIP(17)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == '/') ADVANCE(247);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '0') ADVANCE(430);
      if (lookahead == '=') ADVANCE(296);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(431);
      END_STATE();
    case 32:
      if (lookahead == '0') ADVANCE(430);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(431);
      END_STATE();
    case 33:
      if (lookahead == '1') ADVANCE(37);
      if (lookahead == '3') ADVANCE(38);
      if (lookahead == '6') ADVANCE(41);
      if (lookahead == '8') ADVANCE(333);
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 34:
      if (lookahead == '1') ADVANCE(37);
      if (lookahead == '3') ADVANCE(38);
      if (lookahead == '6') ADVANCE(41);
      if (lookahead == '8') ADVANCE(333);
      if (lookahead == 't') ADVANCE(192);
      END_STATE();
    case 35:
      if (lookahead == '1') ADVANCE(40);
      if (lookahead == '3') ADVANCE(39);
      if (lookahead == '6') ADVANCE(42);
      if (lookahead == '8') ADVANCE(323);
      END_STATE();
    case 36:
      if (lookahead == '1') ADVANCE(40);
      if (lookahead == '3') ADVANCE(39);
      if (lookahead == '6') ADVANCE(42);
      if (lookahead == '8') ADVANCE(323);
      if (lookahead == 'n') ADVANCE(135);
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 37:
      if (lookahead == '2') ADVANCE(44);
      if (lookahead == '6') ADVANCE(335);
      END_STATE();
    case 38:
      if (lookahead == '2') ADVANCE(337);
      END_STATE();
    case 39:
      if (lookahead == '2') ADVANCE(327);
      END_STATE();
    case 40:
      if (lookahead == '2') ADVANCE(45);
      if (lookahead == '6') ADVANCE(325);
      END_STATE();
    case 41:
      if (lookahead == '4') ADVANCE(339);
      END_STATE();
    case 42:
      if (lookahead == '4') ADVANCE(329);
      END_STATE();
    case 43:
      if (lookahead == '6') ADVANCE(349);
      END_STATE();
    case 44:
      if (lookahead == '8') ADVANCE(341);
      END_STATE();
    case 45:
      if (lookahead == '8') ADVANCE(331);
      END_STATE();
    case 46:
      if (lookahead == '=') ADVANCE(456);
      END_STATE();
    case 47:
      if (lookahead == '=') ADVANCE(295);
      END_STATE();
    case 48:
      if (lookahead == '=') ADVANCE(455);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(278);
      END_STATE();
    case 50:
      if (lookahead == 'I') ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == 'M') ADVANCE(49);
      END_STATE();
    case 52:
      if (lookahead == '[') ADVANCE(305);
      END_STATE();
    case 53:
      if (lookahead == ']') ADVANCE(306);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(230);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(79);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(75);
      END_STATE();
    case 57:
      if (lookahead == '_') ADVANCE(149);
      END_STATE();
    case 58:
      if (lookahead == '_') ADVANCE(90);
      END_STATE();
    case 59:
      if (lookahead == '_') ADVANCE(154);
      END_STATE();
    case 60:
      if (lookahead == '_') ADVANCE(77);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(207);
      if (lookahead == 'e') ADVANCE(319);
      if (lookahead == 'i') ADVANCE(120);
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(152);
      if (lookahead == 'l') ADVANCE(185);
      if (lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(234);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(275);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(170);
      if (lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(223);
      if (lookahead == 'r') ADVANCE(355);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 78:
      if (lookahead == 'b') ADVANCE(150);
      END_STATE();
    case 79:
      if (lookahead == 'b') ADVANCE(76);
      END_STATE();
    case 80:
      if (lookahead == 'c') ADVANCE(318);
      END_STATE();
    case 81:
      if (lookahead == 'c') ADVANCE(100);
      END_STATE();
    case 82:
      if (lookahead == 'c') ADVANCE(147);
      END_STATE();
    case 83:
      if (lookahead == 'c') ADVANCE(215);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(97);
      if (lookahead == 'i') ADVANCE(169);
      if (lookahead == 'p') ADVANCE(194);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(89);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(88);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(137);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(200);
      END_STATE();
    case 89:
      if (lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 91:
      if (lookahead == 'd') ADVANCE(106);
      END_STATE();
    case 92:
      if (lookahead == 'd') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(113);
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 93:
      if (lookahead == 'd') ADVANCE(139);
      END_STATE();
    case 94:
      if (lookahead == 'd') ADVANCE(202);
      END_STATE();
    case 95:
      if (lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(321);
      if (lookahead == 'i') ADVANCE(222);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(310);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(475);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(314);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 118:
      if (lookahead == 'f') ADVANCE(187);
      END_STATE();
    case 119:
      if (lookahead == 'f') ADVANCE(142);
      END_STATE();
    case 120:
      if (lookahead == 'g') ADVANCE(277);
      END_STATE();
    case 121:
      if (lookahead == 'g') ADVANCE(289);
      END_STATE();
    case 122:
      if (lookahead == 'g') ADVANCE(297);
      END_STATE();
    case 123:
      if (lookahead == 'g') ADVANCE(157);
      END_STATE();
    case 124:
      if (lookahead == 'h') ADVANCE(68);
      END_STATE();
    case 125:
      if (lookahead == 'h') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 126:
      if (lookahead == 'h') ADVANCE(281);
      END_STATE();
    case 127:
      if (lookahead == 'h') ADVANCE(130);
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(233);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(203);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(218);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(219);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(351);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(185);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(231);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(184);
      if (lookahead == 'm') ADVANCE(161);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(210);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 155:
      if (lookahead == 'm') ADVANCE(313);
      END_STATE();
    case 156:
      if (lookahead == 'm') ADVANCE(99);
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 157:
      if (lookahead == 'm') ADVANCE(66);
      END_STATE();
    case 158:
      if (lookahead == 'm') ADVANCE(140);
      END_STATE();
    case 159:
      if (lookahead == 'm') ADVANCE(73);
      END_STATE();
    case 160:
      if (lookahead == 'm') ADVANCE(141);
      END_STATE();
    case 161:
      if (lookahead == 'm') ADVANCE(116);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(87);
      if (lookahead == 'v') ADVANCE(69);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(287);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(276);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(315);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(359);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(216);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(357);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(191);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 187:
      if (lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 188:
      if (lookahead == 'p') ADVANCE(217);
      END_STATE();
    case 189:
      if (lookahead == 'q') ADVANCE(232);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(347);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(307);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(353);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 194:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 201:
      if (lookahead == 'r') ADVANCE(195);
      if (lookahead == 'u') ADVANCE(221);
      END_STATE();
    case 202:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 203:
      if (lookahead == 's') ADVANCE(424);
      END_STATE();
    case 204:
      if (lookahead == 's') ADVANCE(280);
      END_STATE();
    case 205:
      if (lookahead == 's') ADVANCE(317);
      END_STATE();
    case 206:
      if (lookahead == 's') ADVANCE(118);
      END_STATE();
    case 207:
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 208:
      if (lookahead == 's') ADVANCE(204);
      END_STATE();
    case 209:
      if (lookahead == 's') ADVANCE(205);
      END_STATE();
    case 210:
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 211:
      if (lookahead == 's') ADVANCE(107);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(343);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(312);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(427);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(285);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(311);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(283);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 227:
      if (lookahead == 'u') ADVANCE(221);
      END_STATE();
    case 228:
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 229:
      if (lookahead == 'u') ADVANCE(198);
      END_STATE();
    case 230:
      if (lookahead == 'u') ADVANCE(173);
      END_STATE();
    case 231:
      if (lookahead == 'u') ADVANCE(91);
      END_STATE();
    case 232:
      if (lookahead == 'u') ADVANCE(117);
      END_STATE();
    case 233:
      if (lookahead == 'v') ADVANCE(98);
      END_STATE();
    case 234:
      if (lookahead == 'y') ADVANCE(57);
      END_STATE();
    case 235:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(433);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(435);
      END_STATE();
    case 236:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(434);
      END_STATE();
    case 237:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(435);
      END_STATE();
    case 238:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(432);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(439);
      END_STATE();
    case 239:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(476);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      END_STATE();
    case 245:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      END_STATE();
    case 246:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      END_STATE();
    case 247:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 248:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(481);
      if (lookahead == '\r') ADVANCE(482);
      END_STATE();
    case 249:
      if (eof) ADVANCE(257);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 250:
      if (eof) ADVANCE(257);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(249)
      END_STATE();
    case 251:
      if (eof) ADVANCE(257);
      if (lookahead == '\n') SKIP(255)
      END_STATE();
    case 252:
      if (eof) ADVANCE(257);
      if (lookahead == '\n') SKIP(255)
      if (lookahead == '\r') SKIP(251)
      END_STATE();
    case 253:
      if (eof) ADVANCE(257);
      if (lookahead == '\n') SKIP(256)
      END_STATE();
    case 254:
      if (eof) ADVANCE(257);
      if (lookahead == '\n') SKIP(256)
      if (lookahead == '\r') SKIP(253)
      END_STATE();
    case 255:
      if (eof) ADVANCE(257);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '$') ADVANCE(423);
      if (lookahead == '%') ADVANCE(449);
      if (lookahead == '&') ADVANCE(452);
      if (lookahead == ')') ADVANCE(309);
      if (lookahead == '*') ADVANCE(447);
      if (lookahead == '+') ADVANCE(444);
      if (lookahead == ',') ADVANCE(302);
      if (lookahead == '-') ADVANCE(446);
      if (lookahead == '.') ADVANCE(426);
      if (lookahead == '/') ADVANCE(448);
      if (lookahead == ':') ADVANCE(463);
      if (lookahead == ';') ADVANCE(293);
      if (lookahead == '<') ADVANCE(260);
      if (lookahead == '=') ADVANCE(292);
      if (lookahead == '>') ADVANCE(273);
      if (lookahead == '?') ADVANCE(462);
      if (lookahead == '@') ADVANCE(294);
      if (lookahead == '[') ADVANCE(299);
      if (lookahead == '\\') SKIP(252)
      if (lookahead == ']') ADVANCE(300);
      if (lookahead == '^') ADVANCE(454);
      if (lookahead == 'a') ADVANCE(419);
      if (lookahead == 'b') ADVANCE(383);
      if (lookahead == 'c') ADVANCE(391);
      if (lookahead == 'd') ADVANCE(405);
      if (lookahead == 'f') ADVANCE(398);
      if (lookahead == 'l') ADVANCE(384);
      if (lookahead == 'p') ADVANCE(373);
      if (lookahead == 's') ADVANCE(360);
      if (lookahead == 't') ADVANCE(390);
      if (lookahead == 'u') ADVANCE(362);
      if (lookahead == '{') ADVANCE(303);
      if (lookahead == '|') ADVANCE(453);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(255)
      if (('A' <= lookahead && lookahead <= '_') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 256:
      if (eof) ADVANCE(257);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '$') ADVANCE(423);
      if (lookahead == '%') ADVANCE(449);
      if (lookahead == '&') ADVANCE(452);
      if (lookahead == ')') ADVANCE(309);
      if (lookahead == '*') ADVANCE(447);
      if (lookahead == '+') ADVANCE(443);
      if (lookahead == '-') ADVANCE(445);
      if (lookahead == '.') ADVANCE(426);
      if (lookahead == '/') ADVANCE(448);
      if (lookahead == ':') ADVANCE(463);
      if (lookahead == ';') ADVANCE(293);
      if (lookahead == '<') ADVANCE(260);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(273);
      if (lookahead == '?') ADVANCE(462);
      if (lookahead == '[') ADVANCE(52);
      if (lookahead == '\\') SKIP(254)
      if (lookahead == ']') ADVANCE(53);
      if (lookahead == '^') ADVANCE(454);
      if (lookahead == 'a') ADVANCE(419);
      if (lookahead == 'b') ADVANCE(383);
      if (lookahead == 'c') ADVANCE(391);
      if (lookahead == 'd') ADVANCE(405);
      if (lookahead == 'f') ADVANCE(398);
      if (lookahead == 'l') ADVANCE(384);
      if (lookahead == 'p') ADVANCE(373);
      if (lookahead == 's') ADVANCE(360);
      if (lookahead == 't') ADVANCE(390);
      if (lookahead == 'u') ADVANCE(362);
      if (lookahead == '|') ADVANCE(453);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(256)
      if (('A' <= lookahead && lookahead <= '_') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_POUNDinclude);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(451);
      if (lookahead == '=') ADVANCE(458);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '*') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(266);
      if (lookahead == '\\') ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead == '\n') ADVANCE(481);
      if (lookahead == '\r') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(268);
      if (lookahead == '\\') ADVANCE(272);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead == '\r') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(269);
      if (lookahead == '\\') ADVANCE(271);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead == '*') ADVANCE(266);
      if (lookahead == '/') ADVANCE(268);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '>') ADVANCE(269);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead == '*') ADVANCE(265);
      if (lookahead == '/') ADVANCE(269);
      if (lookahead == '\\') ADVANCE(261);
      if (lookahead == '\n' ||
          lookahead == '>') ADVANCE(25);
      if (lookahead != 0) ADVANCE(266);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead == '*') ADVANCE(265);
      if (lookahead == '\\') ADVANCE(261);
      if (lookahead == '\n' ||
          lookahead == '>') ADVANCE(25);
      if (lookahead != 0) ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead == '/') ADVANCE(264);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '>') ADVANCE(269);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead == '>') ADVANCE(481);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '>') ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead == '\n' ||
          lookahead == '>') ADVANCE(481);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(269);
      if (lookahead == '\\') ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_system_lib_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(268);
      if (lookahead == '\\') ADVANCE(262);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(457);
      if (lookahead == '>') ADVANCE(450);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_POUNDdefine);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_POUNDpragma);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_endian);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_endian_val);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_MIME);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_mime_type);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_base_address);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_eval_depth);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_array_limit);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_pattern_limit);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_pragma_once);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_union);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_using);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(455);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_padding);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_padding);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[') ADVANCE(305);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']') ADVANCE(306);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_comment);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_transform);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_pointer_base);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_hidden);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_no_unique_address);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_be);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_be);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_le);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_le);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_u16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_u32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_u64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_u128);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_u128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_s8);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_s8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_s16);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_s16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_s32);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_s32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_s64);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_s64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_s128);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_s128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_char);
      if (lookahead == '1') ADVANCE(43);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_char);
      if (lookahead == '1') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_char16);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_char16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_str);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_str);
      if (lookahead == 'u') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_str);
      if (lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_str);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_auto);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_auto);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(364);
      if (lookahead == '3') ADVANCE(365);
      if (lookahead == '6') ADVANCE(368);
      if (lookahead == '8') ADVANCE(334);
      if (lookahead == 't') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(364);
      if (lookahead == '3') ADVANCE(365);
      if (lookahead == '6') ADVANCE(368);
      if (lookahead == '8') ADVANCE(334);
      if (lookahead == 't') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(367);
      if (lookahead == '3') ADVANCE(366);
      if (lookahead == '6') ADVANCE(369);
      if (lookahead == '8') ADVANCE(324);
      if (lookahead == 'n') ADVANCE(394);
      if (lookahead == 's') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(367);
      if (lookahead == '3') ADVANCE(366);
      if (lookahead == '6') ADVANCE(369);
      if (lookahead == '8') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(371);
      if (lookahead == '6') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(372);
      if (lookahead == '6') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(381);
      if (lookahead == 'r') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(320);
      if (lookahead == 'o') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(392);
      if (lookahead == 'r') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_dollar);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_this);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_this);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_parent);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_parent);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_number_literal);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'b') ADVANCE(235);
      if (lookahead == 'o') ADVANCE(236);
      if (lookahead == 'x') ADVANCE(238);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(237);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(237);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(439);
      if (('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(432);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(429);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(433);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(435);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(429);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(434);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'D' ||
          lookahead == 'F') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(435);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'U') ADVANCE(438);
      if (lookahead == 'b') ADVANCE(235);
      if (lookahead == 'o') ADVANCE(236);
      if (lookahead == 'x') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(237);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'U') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(237);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(435);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(439);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(456);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(295);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(296);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '/') ADVANCE(481);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(459);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(460);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '^') ADVANCE(461);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_CARET_CARET);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(467);
      if (lookahead == '/') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(469);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(466);
      if (lookahead == '/') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(467);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(467);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(465);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(469);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(469);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_character_literal_token1);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_character_literal_token1);
      if (lookahead == '\n') ADVANCE(477);
      if (lookahead == '\r') ADVANCE(476);
      if (lookahead == 'U') ADVANCE(246);
      if (lookahead == 'u') ADVANCE(242);
      if (lookahead == 'x') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      if (lookahead != 0) ADVANCE(476);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_character_literal_token1);
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '/') ADVANCE(481);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_character_literal_token1);
      if (lookahead == '\\') ADVANCE(12);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_boolean_literal);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\\') ADVANCE(12);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(476);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(481);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(481);
      if (lookahead == '\\') ADVANCE(248);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 255},
  [2] = {.lex_state = 255},
  [3] = {.lex_state = 255},
  [4] = {.lex_state = 255},
  [5] = {.lex_state = 256},
  [6] = {.lex_state = 256},
  [7] = {.lex_state = 256},
  [8] = {.lex_state = 256},
  [9] = {.lex_state = 256},
  [10] = {.lex_state = 256},
  [11] = {.lex_state = 256},
  [12] = {.lex_state = 256},
  [13] = {.lex_state = 256},
  [14] = {.lex_state = 256},
  [15] = {.lex_state = 256},
  [16] = {.lex_state = 256},
  [17] = {.lex_state = 256},
  [18] = {.lex_state = 256},
  [19] = {.lex_state = 256},
  [20] = {.lex_state = 256},
  [21] = {.lex_state = 256},
  [22] = {.lex_state = 256},
  [23] = {.lex_state = 255},
  [24] = {.lex_state = 255},
  [25] = {.lex_state = 256},
  [26] = {.lex_state = 19},
  [27] = {.lex_state = 19},
  [28] = {.lex_state = 19},
  [29] = {.lex_state = 255},
  [30] = {.lex_state = 255},
  [31] = {.lex_state = 255},
  [32] = {.lex_state = 255},
  [33] = {.lex_state = 255},
  [34] = {.lex_state = 255},
  [35] = {.lex_state = 255},
  [36] = {.lex_state = 255},
  [37] = {.lex_state = 255},
  [38] = {.lex_state = 255},
  [39] = {.lex_state = 255},
  [40] = {.lex_state = 255},
  [41] = {.lex_state = 255},
  [42] = {.lex_state = 255},
  [43] = {.lex_state = 255},
  [44] = {.lex_state = 255},
  [45] = {.lex_state = 255},
  [46] = {.lex_state = 26},
  [47] = {.lex_state = 19},
  [48] = {.lex_state = 19},
  [49] = {.lex_state = 19},
  [50] = {.lex_state = 19},
  [51] = {.lex_state = 19},
  [52] = {.lex_state = 18},
  [53] = {.lex_state = 18},
  [54] = {.lex_state = 18},
  [55] = {.lex_state = 18},
  [56] = {.lex_state = 18},
  [57] = {.lex_state = 18},
  [58] = {.lex_state = 256},
  [59] = {.lex_state = 18},
  [60] = {.lex_state = 18},
  [61] = {.lex_state = 18},
  [62] = {.lex_state = 18},
  [63] = {.lex_state = 18},
  [64] = {.lex_state = 18},
  [65] = {.lex_state = 18},
  [66] = {.lex_state = 18},
  [67] = {.lex_state = 18},
  [68] = {.lex_state = 18},
  [69] = {.lex_state = 18},
  [70] = {.lex_state = 18},
  [71] = {.lex_state = 256},
  [72] = {.lex_state = 256},
  [73] = {.lex_state = 256},
  [74] = {.lex_state = 256},
  [75] = {.lex_state = 27},
  [76] = {.lex_state = 27},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 21},
  [80] = {.lex_state = 21},
  [81] = {.lex_state = 21},
  [82] = {.lex_state = 21},
  [83] = {.lex_state = 21},
  [84] = {.lex_state = 21},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 21},
  [87] = {.lex_state = 21},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 21},
  [92] = {.lex_state = 21},
  [93] = {.lex_state = 21},
  [94] = {.lex_state = 21},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 11},
  [97] = {.lex_state = 19},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 11},
  [101] = {.lex_state = 11},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 21},
  [106] = {.lex_state = 19},
  [107] = {.lex_state = 19},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 13},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 255},
  [115] = {.lex_state = 28},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 28},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 256},
  [125] = {.lex_state = 29},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 256},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 267},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 19},
  [134] = {.lex_state = 28},
  [135] = {.lex_state = 28},
  [136] = {.lex_state = 256},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 255},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 19},
  [141] = {.lex_state = 19},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 19},
  [144] = {.lex_state = 19},
  [145] = {.lex_state = 0},
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
    [sym_source_file] = STATE(137),
    [sym__top_level_statement] = STATE(23),
    [sym__preproc_directive] = STATE(23),
    [sym_include] = STATE(23),
    [sym_define] = STATE(23),
    [sym_pragma] = STATE(23),
    [sym_struct_definition] = STATE(23),
    [sym_union_definition] = STATE(23),
    [sym__definition_statement] = STATE(23),
    [sym_using_definition] = STATE(23),
    [sym_variable_definition] = STATE(23),
    [sym_variable_placement] = STATE(23),
    [sym_assignation_statement] = STATE(23),
    [sym_array_definition] = STATE(23),
    [sym__type] = STATE(81),
    [sym__primitive_type] = STATE(93),
    [sym_endian_indicator] = STATE(75),
    [sym_primitive_type] = STATE(94),
    [sym__identifier] = STATE(106),
    [sym__type_identifier] = STATE(81),
    [sym_field_expression] = STATE(106),
    [sym_parent_access] = STATE(106),
    [aux_sym_source_file_repeat1] = STATE(23),
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
    [sym_this] = ACTIONS(27),
    [anon_sym_parent] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 28,
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
      anon_sym_DOT,
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
    ACTIONS(33), 35,
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
      sym_this,
      anon_sym_parent,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
  [71] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 28,
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
      anon_sym_DOT,
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
    ACTIONS(37), 35,
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
      sym_this,
      anon_sym_parent,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
  [142] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 28,
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
      anon_sym_DOT,
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
    ACTIONS(41), 35,
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
      sym_this,
      anon_sym_parent,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
  [213] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(43), 23,
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
    ACTIONS(45), 31,
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
      sym_this,
      anon_sym_parent,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
  [278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 23,
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
    ACTIONS(51), 31,
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
      sym_this,
      anon_sym_parent,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
  [340] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_SLASH,
    ACTIONS(67), 1,
      anon_sym_AMP,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(75), 1,
      anon_sym_AMP_AMP,
    ACTIONS(77), 1,
      anon_sym_CARET_CARET,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(61), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(65), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(73), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(53), 11,
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
    ACTIONS(57), 25,
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
      sym_this,
      anon_sym_parent,
  [424] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_SLASH,
    ACTIONS(67), 1,
      anon_sym_AMP,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(61), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(65), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(73), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(53), 13,
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
    ACTIONS(57), 26,
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
      sym_this,
      anon_sym_parent,
      anon_sym_PIPE,
  [502] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_SLASH,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(61), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(65), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(73), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(53), 13,
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
    ACTIONS(57), 28,
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
      sym_this,
      anon_sym_parent,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
  [576] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_SLASH,
    ACTIONS(59), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(61), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(53), 19,
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
    ACTIONS(57), 30,
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
      sym_this,
      anon_sym_parent,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
  [644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 23,
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
    ACTIONS(57), 31,
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
      sym_this,
      anon_sym_parent,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
  [706] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_SLASH,
    ACTIONS(61), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(53), 21,
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
    ACTIONS(57), 30,
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
      sym_this,
      anon_sym_parent,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
  [772] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_SLASH,
    ACTIONS(59), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(61), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(65), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(53), 17,
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
    ACTIONS(57), 30,
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
      sym_this,
      anon_sym_parent,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
  [842] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_SLASH,
    ACTIONS(67), 1,
      anon_sym_AMP,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(75), 1,
      anon_sym_AMP_AMP,
    ACTIONS(77), 1,
      anon_sym_CARET_CARET,
    ACTIONS(83), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(61), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(65), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(73), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(79), 10,
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
    ACTIONS(81), 25,
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
      sym_this,
      anon_sym_parent,
  [928] = 3,
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
    ACTIONS(87), 31,
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
      sym_this,
      anon_sym_parent,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
  [990] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_SLASH,
    ACTIONS(67), 1,
      anon_sym_AMP,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(77), 1,
      anon_sym_CARET_CARET,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(61), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(65), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(73), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(53), 12,
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
    ACTIONS(57), 25,
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
      sym_this,
      anon_sym_parent,
  [1072] = 3,
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
    ACTIONS(91), 31,
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
      sym_this,
      anon_sym_parent,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
  [1134] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_SLASH,
    ACTIONS(67), 1,
      anon_sym_AMP,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(61), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(65), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(73), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(53), 13,
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
    ACTIONS(57), 25,
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
      sym_this,
      anon_sym_parent,
  [1214] = 3,
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
    ACTIONS(95), 31,
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
      sym_this,
      anon_sym_parent,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
  [1276] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_SLASH,
    ACTIONS(67), 1,
      anon_sym_AMP,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(75), 1,
      anon_sym_AMP_AMP,
    ACTIONS(77), 1,
      anon_sym_CARET_CARET,
    ACTIONS(83), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(61), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(65), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(73), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(97), 10,
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
    ACTIONS(99), 25,
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
      sym_this,
      anon_sym_parent,
  [1362] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 23,
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
    ACTIONS(103), 31,
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
      sym_this,
      anon_sym_parent,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
  [1424] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_SLASH,
    ACTIONS(67), 1,
      anon_sym_AMP,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(61), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(65), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(73), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(53), 13,
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
    ACTIONS(57), 27,
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
      sym_this,
      anon_sym_parent,
      anon_sym_PIPE,
      anon_sym_CARET,
  [1500] = 20,
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
    ACTIONS(27), 1,
      sym_this,
    ACTIONS(29), 1,
      anon_sym_parent,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    STATE(75), 1,
      sym_endian_indicator,
    STATE(93), 1,
      sym__primitive_type,
    STATE(94), 1,
      sym_primitive_type,
    ACTIONS(19), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(81), 2,
      sym__type,
      sym__type_identifier,
    STATE(106), 3,
      sym__identifier,
      sym_field_expression,
      sym_parent_access,
    STATE(24), 14,
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
  [1594] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 1,
      anon_sym_POUNDinclude,
    ACTIONS(112), 1,
      anon_sym_POUNDdefine,
    ACTIONS(115), 1,
      anon_sym_POUNDpragma,
    ACTIONS(118), 1,
      anon_sym_struct,
    ACTIONS(121), 1,
      anon_sym_union,
    ACTIONS(124), 1,
      anon_sym_using,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(136), 1,
      sym_dollar,
    ACTIONS(139), 1,
      sym_this,
    ACTIONS(142), 1,
      anon_sym_parent,
    STATE(75), 1,
      sym_endian_indicator,
    STATE(93), 1,
      sym__primitive_type,
    STATE(94), 1,
      sym_primitive_type,
    ACTIONS(127), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(81), 2,
      sym__type,
      sym__type_identifier,
    STATE(106), 3,
      sym__identifier,
      sym_field_expression,
      sym_parent_access,
    STATE(24), 14,
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
    ACTIONS(130), 17,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
  [1688] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_SLASH,
    ACTIONS(67), 1,
      anon_sym_AMP,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(75), 1,
      anon_sym_AMP_AMP,
    ACTIONS(77), 1,
      anon_sym_CARET_CARET,
    ACTIONS(83), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(149), 1,
      anon_sym_QMARK,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(61), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(65), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(73), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(145), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(147), 25,
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
      sym_this,
      anon_sym_parent,
  [1772] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_parent,
    ACTIONS(151), 1,
      anon_sym_padding,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
    ACTIONS(155), 1,
      sym_dollar,
    ACTIONS(157), 1,
      sym_this,
    STATE(75), 1,
      sym_endian_indicator,
    STATE(93), 1,
      sym__primitive_type,
    STATE(94), 1,
      sym_primitive_type,
    ACTIONS(19), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(80), 2,
      sym__type,
      sym__type_identifier,
    STATE(97), 3,
      sym__identifier,
      sym_field_expression,
      sym_parent_access,
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
  [1843] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_padding,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
    ACTIONS(170), 1,
      sym_identifier,
    ACTIONS(173), 1,
      sym_dollar,
    ACTIONS(176), 1,
      sym_this,
    ACTIONS(179), 1,
      anon_sym_parent,
    STATE(75), 1,
      sym_endian_indicator,
    STATE(93), 1,
      sym__primitive_type,
    STATE(94), 1,
      sym_primitive_type,
    ACTIONS(164), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(80), 2,
      sym__type,
      sym__type_identifier,
    STATE(97), 3,
      sym__identifier,
      sym_field_expression,
      sym_parent_access,
    STATE(27), 6,
      sym__definition_statement,
      sym_variable_definition,
      sym_assignation_statement,
      sym_array_definition,
      sym_padding,
      aux_sym_field_list_repeat1,
    ACTIONS(167), 17,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
  [1914] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_parent,
    ACTIONS(151), 1,
      anon_sym_padding,
    ACTIONS(155), 1,
      sym_dollar,
    ACTIONS(157), 1,
      sym_this,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      sym_endian_indicator,
    STATE(93), 1,
      sym__primitive_type,
    STATE(94), 1,
      sym_primitive_type,
    ACTIONS(19), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(80), 2,
      sym__type,
      sym__type_identifier,
    STATE(97), 3,
      sym__identifier,
      sym_field_expression,
      sym_parent_access,
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
  [1985] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(186), 25,
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
      sym_this,
      anon_sym_parent,
  [2023] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(190), 25,
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
      sym_this,
      anon_sym_parent,
  [2061] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(194), 25,
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
      sym_this,
      anon_sym_parent,
  [2099] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(198), 25,
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
      sym_this,
      anon_sym_parent,
  [2137] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(202), 25,
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
      sym_this,
      anon_sym_parent,
  [2175] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(206), 25,
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
      sym_this,
      anon_sym_parent,
  [2213] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(210), 25,
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
      sym_this,
      anon_sym_parent,
  [2251] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(214), 25,
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
      sym_this,
      anon_sym_parent,
  [2289] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(218), 25,
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
      sym_this,
      anon_sym_parent,
  [2327] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(222), 25,
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
      sym_this,
      anon_sym_parent,
  [2365] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(226), 25,
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
      sym_this,
      anon_sym_parent,
  [2403] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(230), 25,
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
      sym_this,
      anon_sym_parent,
  [2441] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(234), 25,
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
      sym_this,
      anon_sym_parent,
  [2479] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(238), 25,
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
      sym_this,
      anon_sym_parent,
  [2517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(242), 25,
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
      sym_this,
      anon_sym_parent,
  [2555] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(246), 25,
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
      sym_this,
      anon_sym_parent,
  [2593] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDpragma,
      sym_dollar,
    ACTIONS(250), 25,
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
      sym_this,
      anon_sym_parent,
  [2631] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      sym_identifier,
    STATE(75), 1,
      sym_endian_indicator,
    STATE(93), 1,
      sym__primitive_type,
    STATE(94), 1,
      sym_primitive_type,
    ACTIONS(19), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(145), 2,
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
  [2674] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(254), 23,
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
      sym_this,
      anon_sym_parent,
  [2707] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(226), 23,
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
      sym_this,
      anon_sym_parent,
  [2740] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(206), 23,
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
      sym_this,
      anon_sym_parent,
  [2773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(222), 23,
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
      sym_this,
      anon_sym_parent,
  [2806] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 2,
      anon_sym_RBRACE,
      sym_dollar,
    ACTIONS(186), 23,
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
      sym_this,
      anon_sym_parent,
  [2839] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_parent,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      sym_dollar,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    ACTIONS(270), 1,
      anon_sym_SQUOTE,
    STATE(98), 1,
      sym__offset,
    ACTIONS(260), 2,
      sym_identifier,
      sym_this,
    ACTIONS(264), 2,
      sym_number_literal,
      sym_boolean_literal,
    ACTIONS(266), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(5), 3,
      sym__identifier,
      sym_field_expression,
      sym_parent_access,
    STATE(58), 8,
      sym__expression,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [2888] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_parent,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      sym_dollar,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    ACTIONS(270), 1,
      anon_sym_SQUOTE,
    ACTIONS(260), 2,
      sym_identifier,
      sym_this,
    ACTIONS(266), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(272), 2,
      sym_number_literal,
      sym_boolean_literal,
    STATE(5), 3,
      sym__identifier,
      sym_field_expression,
      sym_parent_access,
    STATE(9), 8,
      sym__expression,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [2934] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_parent,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      sym_dollar,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    ACTIONS(270), 1,
      anon_sym_SQUOTE,
    ACTIONS(260), 2,
      sym_identifier,
      sym_this,
    ACTIONS(266), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(274), 2,
      sym_number_literal,
      sym_boolean_literal,
    STATE(5), 3,
      sym__identifier,
      sym_field_expression,
      sym_parent_access,
    STATE(14), 8,
      sym__expression,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [2980] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_parent,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      sym_dollar,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    ACTIONS(270), 1,
      anon_sym_SQUOTE,
    ACTIONS(260), 2,
      sym_identifier,
      sym_this,
    ACTIONS(266), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(276), 2,
      sym_number_literal,
      sym_boolean_literal,
    STATE(5), 3,
      sym__identifier,
      sym_field_expression,
      sym_parent_access,
    STATE(20), 8,
      sym__expression,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [3026] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_parent,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      sym_dollar,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    ACTIONS(270), 1,
      anon_sym_SQUOTE,
    ACTIONS(260), 2,
      sym_identifier,
      sym_this,
    ACTIONS(266), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(278), 2,
      sym_number_literal,
      sym_boolean_literal,
    STATE(5), 3,
      sym__identifier,
      sym_field_expression,
      sym_parent_access,
    STATE(71), 8,
      sym__expression,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [3072] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_parent,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      sym_dollar,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    ACTIONS(270), 1,
      anon_sym_SQUOTE,
    ACTIONS(260), 2,
      sym_identifier,
      sym_this,
    ACTIONS(266), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(280), 2,
      sym_number_literal,
      sym_boolean_literal,
    STATE(5), 3,
      sym__identifier,
      sym_field_expression,
      sym_parent_access,
    STATE(11), 8,
      sym__expression,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [3118] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_SLASH,
    ACTIONS(67), 1,
      anon_sym_AMP,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(75), 1,
      anon_sym_AMP_AMP,
    ACTIONS(77), 1,
      anon_sym_CARET_CARET,
    ACTIONS(83), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(149), 1,
      anon_sym_QMARK,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(61), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(65), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(282), 2,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(73), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3172] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_parent,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      sym_dollar,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    ACTIONS(270), 1,
      anon_sym_SQUOTE,
    ACTIONS(260), 2,
      sym_identifier,
      sym_this,
    ACTIONS(266), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(284), 2,
      sym_number_literal,
      sym_boolean_literal,
    STATE(5), 3,
      sym__identifier,
      sym_field_expression,
      sym_parent_access,
    STATE(12), 8,
      sym__expression,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [3218] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_parent,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      sym_dollar,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    ACTIONS(270), 1,
      anon_sym_SQUOTE,
    ACTIONS(260), 2,
      sym_identifier,
      sym_this,
    ACTIONS(266), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(286), 2,
      sym_number_literal,
      sym_boolean_literal,
    STATE(5), 3,
      sym__identifier,
      sym_field_expression,
      sym_parent_access,
    STATE(72), 8,
      sym__expression,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [3264] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_parent,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      sym_dollar,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    ACTIONS(270), 1,
      anon_sym_SQUOTE,
    ACTIONS(260), 2,
      sym_identifier,
      sym_this,
    ACTIONS(266), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(288), 2,
      sym_number_literal,
      sym_boolean_literal,
    STATE(5), 3,
      sym__identifier,
      sym_field_expression,
      sym_parent_access,
    STATE(13), 8,
      sym__expression,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [3310] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_parent,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      sym_dollar,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    ACTIONS(270), 1,
      anon_sym_SQUOTE,
    ACTIONS(260), 2,
      sym_identifier,
      sym_this,
    ACTIONS(266), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(290), 2,
      sym_number_literal,
      sym_boolean_literal,
    STATE(5), 3,
      sym__identifier,
      sym_field_expression,
      sym_parent_access,
    STATE(7), 8,
      sym__expression,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [3356] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_parent,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      sym_dollar,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    ACTIONS(270), 1,
      anon_sym_SQUOTE,
    ACTIONS(260), 2,
      sym_identifier,
      sym_this,
    ACTIONS(266), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(292), 2,
      sym_number_literal,
      sym_boolean_literal,
    STATE(5), 3,
      sym__identifier,
      sym_field_expression,
      sym_parent_access,
    STATE(16), 8,
      sym__expression,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [3402] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_parent,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      sym_dollar,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    ACTIONS(270), 1,
      anon_sym_SQUOTE,
    ACTIONS(260), 2,
      sym_identifier,
      sym_this,
    ACTIONS(266), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(294), 2,
      sym_number_literal,
      sym_boolean_literal,
    STATE(5), 3,
      sym__identifier,
      sym_field_expression,
      sym_parent_access,
    STATE(73), 8,
      sym__expression,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [3448] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_parent,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      sym_dollar,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    ACTIONS(270), 1,
      anon_sym_SQUOTE,
    ACTIONS(260), 2,
      sym_identifier,
      sym_this,
    ACTIONS(266), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(296), 2,
      sym_number_literal,
      sym_boolean_literal,
    STATE(5), 3,
      sym__identifier,
      sym_field_expression,
      sym_parent_access,
    STATE(22), 8,
      sym__expression,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [3494] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_parent,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      sym_dollar,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    ACTIONS(270), 1,
      anon_sym_SQUOTE,
    ACTIONS(260), 2,
      sym_identifier,
      sym_this,
    ACTIONS(266), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(298), 2,
      sym_number_literal,
      sym_boolean_literal,
    STATE(5), 3,
      sym__identifier,
      sym_field_expression,
      sym_parent_access,
    STATE(25), 8,
      sym__expression,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [3540] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_parent,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      sym_dollar,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    ACTIONS(270), 1,
      anon_sym_SQUOTE,
    ACTIONS(260), 2,
      sym_identifier,
      sym_this,
    ACTIONS(266), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(300), 2,
      sym_number_literal,
      sym_boolean_literal,
    STATE(5), 3,
      sym__identifier,
      sym_field_expression,
      sym_parent_access,
    STATE(74), 8,
      sym__expression,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [3586] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_parent,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      sym_dollar,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    ACTIONS(270), 1,
      anon_sym_SQUOTE,
    ACTIONS(260), 2,
      sym_identifier,
      sym_this,
    ACTIONS(266), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(302), 2,
      sym_number_literal,
      sym_boolean_literal,
    STATE(5), 3,
      sym__identifier,
      sym_field_expression,
      sym_parent_access,
    STATE(18), 8,
      sym__expression,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [3632] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_parent,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      sym_dollar,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    ACTIONS(270), 1,
      anon_sym_SQUOTE,
    ACTIONS(260), 2,
      sym_identifier,
      sym_this,
    ACTIONS(266), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(304), 2,
      sym_number_literal,
      sym_boolean_literal,
    STATE(5), 3,
      sym__identifier,
      sym_field_expression,
      sym_parent_access,
    STATE(10), 8,
      sym__expression,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [3678] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_parent,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      sym_dollar,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    ACTIONS(270), 1,
      anon_sym_SQUOTE,
    ACTIONS(260), 2,
      sym_identifier,
      sym_this,
    ACTIONS(266), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(306), 2,
      sym_number_literal,
      sym_boolean_literal,
    STATE(5), 3,
      sym__identifier,
      sym_field_expression,
      sym_parent_access,
    STATE(8), 8,
      sym__expression,
      sym__number,
      sym__operator,
      sym_unary_numeric_operator,
      sym_binary_numeric_operator,
      sym_ternary_numeric_operator,
      sym_string_literal,
      sym_character_literal,
  [3724] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_SLASH,
    ACTIONS(67), 1,
      anon_sym_AMP,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(75), 1,
      anon_sym_AMP_AMP,
    ACTIONS(77), 1,
      anon_sym_CARET_CARET,
    ACTIONS(83), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(149), 1,
      anon_sym_QMARK,
    ACTIONS(308), 1,
      anon_sym_RPAREN,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(61), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(65), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(73), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3777] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_SLASH,
    ACTIONS(67), 1,
      anon_sym_AMP,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(75), 1,
      anon_sym_AMP_AMP,
    ACTIONS(77), 1,
      anon_sym_CARET_CARET,
    ACTIONS(83), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(149), 1,
      anon_sym_QMARK,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(61), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(65), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(73), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3830] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_SLASH,
    ACTIONS(67), 1,
      anon_sym_AMP,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(75), 1,
      anon_sym_AMP_AMP,
    ACTIONS(77), 1,
      anon_sym_CARET_CARET,
    ACTIONS(83), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(149), 1,
      anon_sym_QMARK,
    ACTIONS(312), 1,
      anon_sym_SEMI,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(61), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(65), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(73), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3883] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_SLASH,
    ACTIONS(67), 1,
      anon_sym_AMP,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(75), 1,
      anon_sym_AMP_AMP,
    ACTIONS(77), 1,
      anon_sym_CARET_CARET,
    ACTIONS(83), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(149), 1,
      anon_sym_QMARK,
    ACTIONS(314), 1,
      anon_sym_COLON,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(61), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(65), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(73), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3936] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_char,
    STATE(91), 1,
      sym_primitive_type,
    ACTIONS(316), 16,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
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
  [3964] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_char,
    ACTIONS(318), 16,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
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
  [3989] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_endian,
    ACTIONS(324), 1,
      anon_sym_MIME,
    ACTIONS(326), 1,
      anon_sym_base_address,
    ACTIONS(328), 1,
      anon_sym_eval_depth,
    ACTIONS(330), 1,
      anon_sym_array_limit,
    ACTIONS(332), 1,
      anon_sym_pattern_limit,
    ACTIONS(334), 1,
      sym_pragma_once,
    STATE(36), 6,
      sym_pragma_endian,
      sym_pragma_mime,
      sym_pragma_base_address,
      sym_pragma_eval_depth,
      sym_pragma_array_limit,
      sym_pragma_pattern_limit,
  [4022] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(124), 1,
      sym__variable_attribute,
    ACTIONS(338), 4,
      anon_sym_hidden,
      anon_sym_inline,
      anon_sym_no_unique_address,
      anon_sym_static,
    ACTIONS(336), 6,
      anon_sym_color,
      anon_sym_name,
      anon_sym_comment,
      anon_sym_format,
      anon_sym_transform,
      anon_sym_pointer_base,
  [4043] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_parent,
    ACTIONS(340), 1,
      anon_sym_RBRACK,
    ACTIONS(344), 1,
      sym_dollar,
    ACTIONS(346), 1,
      sym_number_literal,
    STATE(138), 1,
      sym__array_size,
    ACTIONS(342), 2,
      sym_identifier,
      sym_this,
    STATE(114), 3,
      sym__identifier,
      sym_field_expression,
      sym_parent_access,
  [4071] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_parent,
    ACTIONS(350), 1,
      sym_dollar,
    STATE(84), 1,
      aux_sym__identifier_definition_repeat1,
    STATE(89), 1,
      sym__identifier_definition,
    ACTIONS(348), 2,
      sym_identifier,
      sym_this,
    STATE(88), 3,
      sym__identifier,
      sym_field_expression,
      sym_parent_access,
  [4096] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_parent,
    ACTIONS(350), 1,
      sym_dollar,
    STATE(84), 1,
      aux_sym__identifier_definition_repeat1,
    STATE(85), 1,
      sym__identifier_definition,
    ACTIONS(348), 2,
      sym_identifier,
      sym_this,
    STATE(88), 3,
      sym__identifier,
      sym_field_expression,
      sym_parent_access,
  [4121] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      sym_dollar,
    ACTIONS(354), 3,
      sym_identifier,
      sym_this,
      anon_sym_parent,
    ACTIONS(352), 4,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_DOT,
  [4139] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym_dollar,
    ACTIONS(364), 1,
      anon_sym_parent,
    STATE(83), 1,
      aux_sym__identifier_definition_repeat1,
    ACTIONS(358), 2,
      sym_identifier,
      sym_this,
    STATE(118), 3,
      sym__identifier,
      sym_field_expression,
      sym_parent_access,
  [4161] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_parent,
    ACTIONS(369), 1,
      sym_dollar,
    STATE(83), 1,
      aux_sym__identifier_definition_repeat1,
    ACTIONS(367), 2,
      sym_identifier,
      sym_this,
    STATE(90), 3,
      sym__identifier,
      sym_field_expression,
      sym_parent_access,
  [4183] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_SEMI,
    ACTIONS(373), 1,
      anon_sym_AT,
    ACTIONS(375), 1,
      anon_sym_LBRACK,
    ACTIONS(377), 1,
      anon_sym_LBRACK_LBRACK,
    STATE(39), 1,
      sym__declaration_finish,
    STATE(103), 1,
      sym__array_size_wrapper,
    STATE(128), 1,
      sym_attribute,
  [4208] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_parent,
    ACTIONS(381), 1,
      sym_dollar,
    ACTIONS(379), 2,
      sym_identifier,
      sym_this,
    STATE(108), 3,
      sym__identifier,
      sym_field_expression,
      sym_parent_access,
  [4227] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_parent,
    ACTIONS(385), 1,
      sym_dollar,
    ACTIONS(383), 2,
      sym_identifier,
      sym_this,
    STATE(109), 3,
      sym__identifier,
      sym_field_expression,
      sym_parent_access,
  [4246] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(389), 1,
      anon_sym_LBRACK,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    ACTIONS(387), 3,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_LBRACK_LBRACK,
  [4264] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_LBRACK,
    ACTIONS(377), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(393), 1,
      anon_sym_SEMI,
    STATE(48), 1,
      sym__declaration_finish,
    STATE(99), 1,
      sym__array_size_wrapper,
    STATE(142), 1,
      sym_attribute,
  [4286] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    ACTIONS(397), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 3,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_LBRACK_LBRACK,
  [4304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 2,
      anon_sym_SEMI,
      sym_dollar,
    ACTIONS(401), 3,
      sym_identifier,
      sym_this,
      anon_sym_parent,
  [4317] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 2,
      anon_sym_SEMI,
      sym_dollar,
    ACTIONS(405), 3,
      sym_identifier,
      sym_this,
      anon_sym_parent,
  [4330] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 2,
      anon_sym_SEMI,
      sym_dollar,
    ACTIONS(409), 3,
      sym_identifier,
      sym_this,
      anon_sym_parent,
  [4343] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 2,
      anon_sym_SEMI,
      sym_dollar,
    ACTIONS(413), 3,
      sym_identifier,
      sym_this,
      anon_sym_parent,
  [4356] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(415), 1,
      anon_sym_SEMI,
    STATE(30), 1,
      sym__declaration_finish,
    STATE(128), 1,
      sym_attribute,
  [4372] = 5,
    ACTIONS(417), 1,
      anon_sym_DQUOTE,
    ACTIONS(419), 1,
      aux_sym_string_literal_token1,
    ACTIONS(421), 1,
      sym_escape_sequence,
    ACTIONS(423), 1,
      sym_comment,
    STATE(100), 1,
      aux_sym_string_literal_repeat1,
  [4388] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(425), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [4400] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(427), 1,
      anon_sym_SEMI,
    STATE(40), 1,
      sym__declaration_finish,
    STATE(128), 1,
      sym_attribute,
  [4416] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(429), 1,
      anon_sym_SEMI,
    STATE(49), 1,
      sym__declaration_finish,
    STATE(142), 1,
      sym_attribute,
  [4432] = 5,
    ACTIONS(423), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_DQUOTE,
    ACTIONS(433), 1,
      aux_sym_string_literal_token1,
    ACTIONS(436), 1,
      sym_escape_sequence,
    STATE(100), 1,
      aux_sym_string_literal_repeat1,
  [4448] = 5,
    ACTIONS(423), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_DQUOTE,
    ACTIONS(441), 1,
      aux_sym_string_literal_token1,
    ACTIONS(443), 1,
      sym_escape_sequence,
    STATE(96), 1,
      aux_sym_string_literal_repeat1,
  [4464] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(445), 1,
      anon_sym_SEMI,
    STATE(47), 1,
      sym__declaration_finish,
    STATE(142), 1,
      sym_attribute,
  [4480] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(447), 1,
      anon_sym_SEMI,
    STATE(34), 1,
      sym__declaration_finish,
    STATE(128), 1,
      sym_attribute,
  [4496] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(449), 1,
      anon_sym_SEMI,
    STATE(42), 1,
      sym__declaration_finish,
    STATE(128), 1,
      sym_attribute,
  [4512] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      sym_dollar,
    ACTIONS(451), 3,
      sym_identifier,
      sym_this,
      anon_sym_parent,
  [4524] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(455), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [4536] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    ACTIONS(457), 1,
      anon_sym_LT,
    STATE(31), 2,
      sym_system_lib_string,
      sym_string_literal,
  [4550] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(459), 1,
      anon_sym_LBRACE,
    STATE(104), 1,
      sym_field_list,
  [4563] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(459), 1,
      anon_sym_LBRACE,
    STATE(95), 1,
      sym_field_list,
  [4576] = 3,
    ACTIONS(423), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_SQUOTE,
    ACTIONS(463), 2,
      aux_sym_character_literal_token1,
      sym_escape_sequence,
  [4587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 2,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
  [4595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 2,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
  [4603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 2,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
  [4611] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(471), 1,
      anon_sym_RBRACK,
  [4621] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      sym_identifier,
    STATE(3), 1,
      sym__field_identifier,
  [4631] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    STATE(122), 1,
      sym_string_literal,
  [4641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 2,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
  [4649] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(391), 1,
      anon_sym_COMMA,
  [4659] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      sym_identifier,
    STATE(4), 1,
      sym__field_identifier,
  [4669] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_LBRACK,
    STATE(102), 1,
      sym__array_size_wrapper,
  [4679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
  [4686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_RPAREN,
  [4693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_SEMI,
  [4700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_RBRACK_RBRACK,
  [4707] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      sym_mime_type,
  [4714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_SQUOTE,
  [4721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_RBRACK_RBRACK,
  [4728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_SEMI,
  [4735] = 2,
    ACTIONS(423), 1,
      sym_comment,
    ACTIONS(493), 1,
      aux_sym_system_lib_string_token1,
  [4742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      sym_endian_val,
  [4749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_SEMI,
  [4756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_DOT,
  [4763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_EQ,
  [4770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      sym_identifier,
  [4777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      sym_identifier,
  [4784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_RBRACK_RBRACK,
  [4791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      ts_builtin_sym_end,
  [4798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_RBRACK,
  [4805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_GT,
  [4812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      sym_number_literal,
  [4819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      sym_number_literal,
  [4826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_SEMI,
  [4833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      sym_number_literal,
  [4840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      sym_number_literal,
  [4847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 71,
  [SMALL_STATE(4)] = 142,
  [SMALL_STATE(5)] = 213,
  [SMALL_STATE(6)] = 278,
  [SMALL_STATE(7)] = 340,
  [SMALL_STATE(8)] = 424,
  [SMALL_STATE(9)] = 502,
  [SMALL_STATE(10)] = 576,
  [SMALL_STATE(11)] = 644,
  [SMALL_STATE(12)] = 706,
  [SMALL_STATE(13)] = 772,
  [SMALL_STATE(14)] = 842,
  [SMALL_STATE(15)] = 928,
  [SMALL_STATE(16)] = 990,
  [SMALL_STATE(17)] = 1072,
  [SMALL_STATE(18)] = 1134,
  [SMALL_STATE(19)] = 1214,
  [SMALL_STATE(20)] = 1276,
  [SMALL_STATE(21)] = 1362,
  [SMALL_STATE(22)] = 1424,
  [SMALL_STATE(23)] = 1500,
  [SMALL_STATE(24)] = 1594,
  [SMALL_STATE(25)] = 1688,
  [SMALL_STATE(26)] = 1772,
  [SMALL_STATE(27)] = 1843,
  [SMALL_STATE(28)] = 1914,
  [SMALL_STATE(29)] = 1985,
  [SMALL_STATE(30)] = 2023,
  [SMALL_STATE(31)] = 2061,
  [SMALL_STATE(32)] = 2099,
  [SMALL_STATE(33)] = 2137,
  [SMALL_STATE(34)] = 2175,
  [SMALL_STATE(35)] = 2213,
  [SMALL_STATE(36)] = 2251,
  [SMALL_STATE(37)] = 2289,
  [SMALL_STATE(38)] = 2327,
  [SMALL_STATE(39)] = 2365,
  [SMALL_STATE(40)] = 2403,
  [SMALL_STATE(41)] = 2441,
  [SMALL_STATE(42)] = 2479,
  [SMALL_STATE(43)] = 2517,
  [SMALL_STATE(44)] = 2555,
  [SMALL_STATE(45)] = 2593,
  [SMALL_STATE(46)] = 2631,
  [SMALL_STATE(47)] = 2674,
  [SMALL_STATE(48)] = 2707,
  [SMALL_STATE(49)] = 2740,
  [SMALL_STATE(50)] = 2773,
  [SMALL_STATE(51)] = 2806,
  [SMALL_STATE(52)] = 2839,
  [SMALL_STATE(53)] = 2888,
  [SMALL_STATE(54)] = 2934,
  [SMALL_STATE(55)] = 2980,
  [SMALL_STATE(56)] = 3026,
  [SMALL_STATE(57)] = 3072,
  [SMALL_STATE(58)] = 3118,
  [SMALL_STATE(59)] = 3172,
  [SMALL_STATE(60)] = 3218,
  [SMALL_STATE(61)] = 3264,
  [SMALL_STATE(62)] = 3310,
  [SMALL_STATE(63)] = 3356,
  [SMALL_STATE(64)] = 3402,
  [SMALL_STATE(65)] = 3448,
  [SMALL_STATE(66)] = 3494,
  [SMALL_STATE(67)] = 3540,
  [SMALL_STATE(68)] = 3586,
  [SMALL_STATE(69)] = 3632,
  [SMALL_STATE(70)] = 3678,
  [SMALL_STATE(71)] = 3724,
  [SMALL_STATE(72)] = 3777,
  [SMALL_STATE(73)] = 3830,
  [SMALL_STATE(74)] = 3883,
  [SMALL_STATE(75)] = 3936,
  [SMALL_STATE(76)] = 3964,
  [SMALL_STATE(77)] = 3989,
  [SMALL_STATE(78)] = 4022,
  [SMALL_STATE(79)] = 4043,
  [SMALL_STATE(80)] = 4071,
  [SMALL_STATE(81)] = 4096,
  [SMALL_STATE(82)] = 4121,
  [SMALL_STATE(83)] = 4139,
  [SMALL_STATE(84)] = 4161,
  [SMALL_STATE(85)] = 4183,
  [SMALL_STATE(86)] = 4208,
  [SMALL_STATE(87)] = 4227,
  [SMALL_STATE(88)] = 4246,
  [SMALL_STATE(89)] = 4264,
  [SMALL_STATE(90)] = 4286,
  [SMALL_STATE(91)] = 4304,
  [SMALL_STATE(92)] = 4317,
  [SMALL_STATE(93)] = 4330,
  [SMALL_STATE(94)] = 4343,
  [SMALL_STATE(95)] = 4356,
  [SMALL_STATE(96)] = 4372,
  [SMALL_STATE(97)] = 4388,
  [SMALL_STATE(98)] = 4400,
  [SMALL_STATE(99)] = 4416,
  [SMALL_STATE(100)] = 4432,
  [SMALL_STATE(101)] = 4448,
  [SMALL_STATE(102)] = 4464,
  [SMALL_STATE(103)] = 4480,
  [SMALL_STATE(104)] = 4496,
  [SMALL_STATE(105)] = 4512,
  [SMALL_STATE(106)] = 4524,
  [SMALL_STATE(107)] = 4536,
  [SMALL_STATE(108)] = 4550,
  [SMALL_STATE(109)] = 4563,
  [SMALL_STATE(110)] = 4576,
  [SMALL_STATE(111)] = 4587,
  [SMALL_STATE(112)] = 4595,
  [SMALL_STATE(113)] = 4603,
  [SMALL_STATE(114)] = 4611,
  [SMALL_STATE(115)] = 4621,
  [SMALL_STATE(116)] = 4631,
  [SMALL_STATE(117)] = 4641,
  [SMALL_STATE(118)] = 4649,
  [SMALL_STATE(119)] = 4659,
  [SMALL_STATE(120)] = 4669,
  [SMALL_STATE(121)] = 4679,
  [SMALL_STATE(122)] = 4686,
  [SMALL_STATE(123)] = 4693,
  [SMALL_STATE(124)] = 4700,
  [SMALL_STATE(125)] = 4707,
  [SMALL_STATE(126)] = 4714,
  [SMALL_STATE(127)] = 4721,
  [SMALL_STATE(128)] = 4728,
  [SMALL_STATE(129)] = 4735,
  [SMALL_STATE(130)] = 4742,
  [SMALL_STATE(131)] = 4749,
  [SMALL_STATE(132)] = 4756,
  [SMALL_STATE(133)] = 4763,
  [SMALL_STATE(134)] = 4770,
  [SMALL_STATE(135)] = 4777,
  [SMALL_STATE(136)] = 4784,
  [SMALL_STATE(137)] = 4791,
  [SMALL_STATE(138)] = 4798,
  [SMALL_STATE(139)] = 4805,
  [SMALL_STATE(140)] = 4812,
  [SMALL_STATE(141)] = 4819,
  [SMALL_STATE(142)] = 4826,
  [SMALL_STATE(143)] = 4833,
  [SMALL_STATE(144)] = 4840,
  [SMALL_STATE(145)] = 4847,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_identifier, 1, .production_id = 7),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_identifier, 1, .production_id = 7),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parent_access, 3, .production_id = 8),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parent_access, 3, .production_id = 8),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_expression, 3, .production_id = 8),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_expression, 3, .production_id = 8),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_literal, 3),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_literal, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_numeric_operator, 3, .production_id = 15),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_numeric_operator, 3, .production_id = 15),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_numeric_operator, 5, .production_id = 21),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ternary_numeric_operator, 5, .production_id = 21),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_numeric_operator, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_numeric_operator, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_literal, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_literal, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_numeric_operator, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_numeric_operator, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(107),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(135),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(86),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(87),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(134),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(92),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(82),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(106),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(106),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(132),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(120),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(76),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(92),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(82),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(97),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(97),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(132),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignation_statement, 4, .production_id = 15),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignation_statement, 4, .production_id = 15),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_definition, 4, .production_id = 12),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union_definition, 4, .production_id = 12),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_lib_string, 3),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_lib_string, 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_endian, 2, .production_id = 6),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma_endian, 2, .production_id = 6),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_definition, 4, .production_id = 13),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_definition, 4, .production_id = 13),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_base_address, 2, .production_id = 6),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma_base_address, 2, .production_id = 6),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 2),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_eval_depth, 2, .production_id = 6),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma_eval_depth, 2, .production_id = 6),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration_finish, 2, .production_id = 14),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declaration_finish, 2, .production_id = 14),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3, .production_id = 9),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 3, .production_id = 9),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_placement, 5, .production_id = 17),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_placement, 5, .production_id = 17),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_definition, 5, .production_id = 16),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using_definition, 5, .production_id = 16),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 4, .production_id = 12),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 4, .production_id = 12),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_array_limit, 2, .production_id = 6),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma_array_limit, 2, .production_id = 6),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_pattern_limit, 2, .production_id = 6),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma_pattern_limit, 2, .production_id = 6),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_mime, 2, .production_id = 6),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma_mime, 2, .production_id = 6),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_padding, 3, .production_id = 20),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_padding, 3, .production_id = 20),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__offset, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endian_indicator, 1),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endian_indicator, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 1),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_identifier, 1, .production_id = 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 1),
  [358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier_definition_repeat1, 2, .production_id = 11), SHIFT_REPEAT(118),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_definition_repeat1, 2, .production_id = 11), SHIFT_REPEAT(118),
  [364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier_definition_repeat1, 2, .production_id = 11), SHIFT_REPEAT(132),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier_definition, 1, .production_id = 4),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier_definition, 1, .production_id = 4),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier_definition, 2, .production_id = 10),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier_definition, 2, .production_id = 10),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive_type, 2, .production_id = 5),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive_type, 2, .production_id = 5),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1, .production_id = 2),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type, 1, .production_id = 2),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive_type, 1, .production_id = 3),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive_type, 1, .production_id = 3),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(100),
  [436] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(100),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_definition_repeat1, 2, .production_id = 4),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_definition_repeat1, 2, .production_id = 4),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 2),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 3),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_size_wrapper, 2),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_size, 1),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_size_wrapper, 3, .production_id = 18),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_attribute, 1, .production_id = 4),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, .production_id = 19),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_attribute, 4, .production_id = 22),
  [509] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
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
