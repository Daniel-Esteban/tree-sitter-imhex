#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 67
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 103
#define ALIAS_COUNT 1
#define TOKEN_COUNT 75
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 14

enum {
  anon_sym_struct = 1,
  anon_sym_union = 2,
  anon_sym_AT = 3,
  anon_sym_padding = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  anon_sym_COMMA = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  anon_sym_SEMI = 10,
  anon_sym_LBRACK_LBRACK = 11,
  anon_sym_RBRACK_RBRACK = 12,
  anon_sym_color = 13,
  anon_sym_LPAREN = 14,
  anon_sym_RPAREN = 15,
  anon_sym_name = 16,
  anon_sym_comment = 17,
  anon_sym_format = 18,
  anon_sym_transform = 19,
  anon_sym_pointer_base = 20,
  anon_sym_hidden = 21,
  anon_sym_inline = 22,
  anon_sym_no_unique_address = 23,
  anon_sym_static = 24,
  anon_sym_be = 25,
  anon_sym_le = 26,
  anon_sym_u8 = 27,
  anon_sym_u16 = 28,
  anon_sym_u32 = 29,
  anon_sym_u64 = 30,
  anon_sym_u128 = 31,
  anon_sym_s8 = 32,
  anon_sym_s16 = 33,
  anon_sym_s32 = 34,
  anon_sym_s64 = 35,
  anon_sym_s128 = 36,
  anon_sym_float = 37,
  anon_sym_double = 38,
  anon_sym_char = 39,
  anon_sym_char16 = 40,
  anon_sym_bool = 41,
  anon_sym_str = 42,
  anon_sym_auto = 43,
  anon_sym_return = 44,
  sym_identifier = 45,
  aux_sym_number_literal_token1 = 46,
  aux_sym_number_literal_token2 = 47,
  aux_sym_number_literal_token3 = 48,
  anon_sym_TILDE = 49,
  anon_sym_BANG = 50,
  anon_sym_PLUS = 51,
  anon_sym_DASH = 52,
  anon_sym_STAR = 53,
  anon_sym_SLASH = 54,
  anon_sym_PERCENT = 55,
  anon_sym_GT_GT = 56,
  anon_sym_LT_LT = 57,
  anon_sym_AMP = 58,
  anon_sym_PIPE = 59,
  anon_sym_CARET = 60,
  anon_sym_EQ_EQ = 61,
  anon_sym_BANG_EQ = 62,
  anon_sym_GT = 63,
  anon_sym_LT = 64,
  anon_sym_GT_EQ = 65,
  anon_sym_LT_EQ = 66,
  anon_sym_AMP_AMP = 67,
  anon_sym_CARET_CARET = 68,
  anon_sym_COLON = 69,
  anon_sym_QMARK = 70,
  anon_sym_DQUOTE = 71,
  aux_sym_string_literal_token1 = 72,
  sym_escape_sequence = 73,
  sym_comment = 74,
  sym_source_file = 75,
  sym__definition = 76,
  sym_struct_definition = 77,
  sym_union_definition = 78,
  sym__definition_statement = 79,
  sym_variable_definition = 80,
  sym_variable_placement = 81,
  sym_array_definition = 82,
  sym_padding = 83,
  sym__array_size_wrapper = 84,
  sym__array_size = 85,
  sym__identifier_definition = 86,
  sym_field_list = 87,
  sym__declaration_finish = 88,
  sym_attribute = 89,
  sym__variable_attribute = 90,
  sym__type = 91,
  sym__primitive_type = 92,
  sym_endian_indicator = 93,
  sym_primitive_type = 94,
  sym__type_identifier = 95,
  sym_number_literal = 96,
  sym__number = 97,
  sym_string_literal = 98,
  aux_sym_source_file_repeat1 = 99,
  aux_sym__identifier_definition_repeat1 = 100,
  aux_sym_field_list_repeat1 = 101,
  aux_sym_string_literal_repeat1 = 102,
  alias_sym_type_identifier = 103,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_struct] = "struct",
  [anon_sym_union] = "union",
  [anon_sym_AT] = "@",
  [anon_sym_padding] = "padding",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
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
  [aux_sym_number_literal_token1] = "number_literal_token1",
  [aux_sym_number_literal_token2] = "number_literal_token2",
  [aux_sym_number_literal_token3] = "number_literal_token3",
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
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_CARET_CARET] = "^^",
  [anon_sym_COLON] = ":",
  [anon_sym_QMARK] = "\?",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_struct_definition] = "struct_definition",
  [sym_union_definition] = "union_definition",
  [sym__definition_statement] = "_definition_statement",
  [sym_variable_definition] = "variable_definition",
  [sym_variable_placement] = "variable_placement",
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
  [sym__type_identifier] = "_type_identifier",
  [sym_number_literal] = "number_literal",
  [sym__number] = "_number",
  [sym_string_literal] = "string_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__identifier_definition_repeat1] = "_identifier_definition_repeat1",
  [aux_sym_field_list_repeat1] = "field_list_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [alias_sym_type_identifier] = "type_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_union] = anon_sym_union,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_padding] = anon_sym_padding,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
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
  [aux_sym_number_literal_token1] = aux_sym_number_literal_token1,
  [aux_sym_number_literal_token2] = aux_sym_number_literal_token2,
  [aux_sym_number_literal_token3] = aux_sym_number_literal_token3,
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
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_CARET_CARET] = anon_sym_CARET_CARET,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_struct_definition] = sym_struct_definition,
  [sym_union_definition] = sym_union_definition,
  [sym__definition_statement] = sym__definition_statement,
  [sym_variable_definition] = sym_variable_definition,
  [sym_variable_placement] = sym_variable_placement,
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
  [sym__type_identifier] = sym__type_identifier,
  [sym_number_literal] = sym_number_literal,
  [sym__number] = sym__number,
  [sym_string_literal] = sym_string_literal,
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
  [anon_sym_SEMI] = {
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
  [aux_sym_number_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_literal_token3] = {
    .visible = false,
    .named = false,
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
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
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
  [anon_sym_CARET_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
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
  [sym__type_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [sym_string_literal] = {
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
  field_name = 3,
  field_offset = 4,
  field_size = 5,
  field_type = 6,
  field_value = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_attribute] = "attribute",
  [field_body] = "body",
  [field_name] = "name",
  [field_offset] = "offset",
  [field_size] = "size",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 3},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 3},
  [7] = {.index = 11, .length = 4},
  [8] = {.index = 15, .length = 1},
  [9] = {.index = 16, .length = 4},
  [10] = {.index = 20, .length = 1},
  [11] = {.index = 21, .length = 2},
  [12] = {.index = 23, .length = 2},
  [13] = {.index = 25, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_attribute, 2, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_type, 0},
  [4] =
    {field_name, 0, .inherited = true},
    {field_name, 1},
  [6] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [8] =
    {field_attribute, 3, .inherited = true},
    {field_body, 2},
    {field_name, 1},
  [11] =
    {field_attribute, 3, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_size, 2, .inherited = true},
    {field_type, 0},
  [15] =
    {field_attribute, 0},
  [16] =
    {field_attribute, 4, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_offset, 3},
    {field_type, 0},
  [20] =
    {field_size, 1},
  [21] =
    {field_name, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [23] =
    {field_attribute, 2, .inherited = true},
    {field_size, 1, .inherited = true},
  [25] =
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

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 10,
  [14] = 9,
  [15] = 11,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 27,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 51,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(137);
      if (lookahead == '!') ADVANCE(258);
      if (lookahead == '"') ADVANCE(279);
      if (lookahead == '%') ADVANCE(263);
      if (lookahead == '&') ADVANCE(266);
      if (lookahead == '(') ADVANCE(155);
      if (lookahead == ')') ADVANCE(156);
      if (lookahead == '*') ADVANCE(261);
      if (lookahead == '+') ADVANCE(259);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '/') ADVANCE(262);
      if (lookahead == '0') ADVANCE(253);
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == ';') ADVANCE(151);
      if (lookahead == '<') ADVANCE(272);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '>') ADVANCE(271);
      if (lookahead == '?') ADVANCE(278);
      if (lookahead == '@') ADVANCE(142);
      if (lookahead == '[') ADVANCE(145);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == ']') ADVANCE(147);
      if (lookahead == '^') ADVANCE(268);
      if (lookahead == 'a') ADVANCE(120);
      if (lookahead == 'b') ADVANCE(47);
      if (lookahead == 'c') ADVANCE(62);
      if (lookahead == 'd') ADVANCE(91);
      if (lookahead == 'f') ADVANCE(72);
      if (lookahead == 'h') ADVANCE(63);
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == 'l') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(28);
      if (lookahead == 'p') ADVANCE(35);
      if (lookahead == 'r') ADVANCE(53);
      if (lookahead == 's') ADVANCE(6);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead == 'u') ADVANCE(9);
      if (lookahead == '{') ADVANCE(149);
      if (lookahead == '|') ADVANCE(267);
      if (lookahead == '}') ADVANCE(150);
      if (lookahead == '~') ADVANCE(257);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(254);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '"') ADVANCE(279);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(280);
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(279);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(285);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(253);
      if (lookahead == ']') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 6:
      if (lookahead == '1') ADVANCE(10);
      if (lookahead == '3') ADVANCE(11);
      if (lookahead == '6') ADVANCE(14);
      if (lookahead == '8') ADVANCE(180);
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 7:
      if (lookahead == '1') ADVANCE(10);
      if (lookahead == '3') ADVANCE(11);
      if (lookahead == '6') ADVANCE(14);
      if (lookahead == '8') ADVANCE(180);
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 8:
      if (lookahead == '1') ADVANCE(13);
      if (lookahead == '3') ADVANCE(12);
      if (lookahead == '6') ADVANCE(15);
      if (lookahead == '8') ADVANCE(170);
      END_STATE();
    case 9:
      if (lookahead == '1') ADVANCE(13);
      if (lookahead == '3') ADVANCE(12);
      if (lookahead == '6') ADVANCE(15);
      if (lookahead == '8') ADVANCE(170);
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 10:
      if (lookahead == '2') ADVANCE(17);
      if (lookahead == '6') ADVANCE(182);
      END_STATE();
    case 11:
      if (lookahead == '2') ADVANCE(184);
      END_STATE();
    case 12:
      if (lookahead == '2') ADVANCE(174);
      END_STATE();
    case 13:
      if (lookahead == '2') ADVANCE(18);
      if (lookahead == '6') ADVANCE(172);
      END_STATE();
    case 14:
      if (lookahead == '4') ADVANCE(186);
      END_STATE();
    case 15:
      if (lookahead == '4') ADVANCE(176);
      END_STATE();
    case 16:
      if (lookahead == '6') ADVANCE(196);
      END_STATE();
    case 17:
      if (lookahead == '8') ADVANCE(188);
      END_STATE();
    case 18:
      if (lookahead == '8') ADVANCE(178);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(269);
      END_STATE();
    case 20:
      if (lookahead == 'U') ADVANCE(134);
      if (lookahead == 'u') ADVANCE(130);
      if (lookahead == 'x') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      if (lookahead != 0) ADVANCE(282);
      END_STATE();
    case 21:
      if (lookahead == '[') ADVANCE(152);
      END_STATE();
    case 22:
      if (lookahead == ']') ADVANCE(153);
      END_STATE();
    case 23:
      if (lookahead == ']') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(250);
      if (lookahead == 'b') ADVANCE(227);
      if (lookahead == 'c') ADVANCE(231);
      if (lookahead == 'd') ADVANCE(241);
      if (lookahead == 'f') ADVANCE(236);
      if (lookahead == 'l') ADVANCE(228);
      if (lookahead == 'p') ADVANCE(220);
      if (lookahead == 's') ADVANCE(208);
      if (lookahead == 'u') ADVANCE(210);
      if (lookahead == '}') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 24:
      if (lookahead == '_') ADVANCE(38);
      END_STATE();
    case 25:
      if (lookahead == '_') ADVANCE(122);
      END_STATE();
    case 26:
      if (lookahead == '_') ADVANCE(36);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(120);
      if (lookahead == 'b') ADVANCE(92);
      if (lookahead == 'c') ADVANCE(61);
      if (lookahead == 'd') ADVANCE(91);
      if (lookahead == 'f') ADVANCE(71);
      if (lookahead == 's') ADVANCE(7);
      if (lookahead == 'u') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(118);
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 37:
      if (lookahead == 'b') ADVANCE(74);
      END_STATE();
    case 38:
      if (lookahead == 'b') ADVANCE(29);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(165);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(114);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(44);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(46);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(45);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(107);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 59:
      if (lookahead == 'f') ADVANCE(97);
      END_STATE();
    case 60:
      if (lookahead == 'g') ADVANCE(143);
      END_STATE();
    case 61:
      if (lookahead == 'h') ADVANCE(31);
      END_STATE();
    case 62:
      if (lookahead == 'h') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead == 'm') ADVANCE(78);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 76:
      if (lookahead == 'm') ADVANCE(160);
      END_STATE();
    case 77:
      if (lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 78:
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 79:
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(204);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 98:
      if (lookahead == 'q') ADVANCE(124);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 108:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 109:
      if (lookahead == 's') ADVANCE(164);
      END_STATE();
    case 110:
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 111:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 120:
      if (lookahead == 'u') ADVANCE(117);
      END_STATE();
    case 121:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 122:
      if (lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 123:
      if (lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 124:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 125:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      END_STATE();
    case 126:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 127:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(282);
      END_STATE();
    case 128:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      END_STATE();
    case 129:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 130:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      END_STATE();
    case 131:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 132:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      END_STATE();
    case 133:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      END_STATE();
    case 134:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(133);
      END_STATE();
    case 135:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(286);
      if (lookahead == '\r') ADVANCE(287);
      END_STATE();
    case 136:
      if (eof) ADVANCE(137);
      if (lookahead == ';') ADVANCE(151);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == ']') ADVANCE(146);
      if (lookahead == 'a') ADVANCE(250);
      if (lookahead == 'b') ADVANCE(227);
      if (lookahead == 'c') ADVANCE(231);
      if (lookahead == 'd') ADVANCE(241);
      if (lookahead == 'f') ADVANCE(236);
      if (lookahead == 'l') ADVANCE(228);
      if (lookahead == 's') ADVANCE(207);
      if (lookahead == 'u') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(136)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_union);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_padding);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_padding);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[') ADVANCE(152);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']') ADVANCE(153);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_comment);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_transform);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_pointer_base);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_hidden);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_no_unique_address);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_be);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_be);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_le);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_le);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_u16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_u32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_u64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_u128);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_u128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_s8);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_s8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_s16);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_s16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_s32);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_s32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_s64);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_s64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_s128);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_s128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_char);
      if (lookahead == '1') ADVANCE(16);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_char);
      if (lookahead == '1') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_char16);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_char16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_str);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_str);
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_str);
      if (lookahead == 'u') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_str);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_auto);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_auto);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(211);
      if (lookahead == '3') ADVANCE(212);
      if (lookahead == '6') ADVANCE(215);
      if (lookahead == '8') ADVANCE(181);
      if (lookahead == 't') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(211);
      if (lookahead == '3') ADVANCE(212);
      if (lookahead == '6') ADVANCE(215);
      if (lookahead == '8') ADVANCE(181);
      if (lookahead == 't') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(214);
      if (lookahead == '3') ADVANCE(213);
      if (lookahead == '6') ADVANCE(216);
      if (lookahead == '8') ADVANCE(171);
      if (lookahead == 'n') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(214);
      if (lookahead == '3') ADVANCE(213);
      if (lookahead == '6') ADVANCE(216);
      if (lookahead == '8') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(218);
      if (lookahead == '6') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(219);
      if (lookahead == '6') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == 'o') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (lookahead == 'b') ADVANCE(125);
      if (lookahead == 'x') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_number_literal_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_number_literal_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(270);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(286);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(275);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '^') ADVANCE(276);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(273);
      if (lookahead == '>') ADVANCE(264);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(265);
      if (lookahead == '=') ADVANCE(274);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_CARET_CARET);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(281);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(286);
      if (lookahead == '\\') ADVANCE(135);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 136},
  [2] = {.lex_state = 136},
  [3] = {.lex_state = 136},
  [4] = {.lex_state = 23},
  [5] = {.lex_state = 23},
  [6] = {.lex_state = 23},
  [7] = {.lex_state = 136},
  [8] = {.lex_state = 136},
  [9] = {.lex_state = 136},
  [10] = {.lex_state = 136},
  [11] = {.lex_state = 136},
  [12] = {.lex_state = 136},
  [13] = {.lex_state = 23},
  [14] = {.lex_state = 23},
  [15] = {.lex_state = 23},
  [16] = {.lex_state = 23},
  [17] = {.lex_state = 27},
  [18] = {.lex_state = 27},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 136},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 23},
  [55] = {.lex_state = 23},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 23},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 136},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_union] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_padding] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
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
    [aux_sym_number_literal_token1] = ACTIONS(1),
    [aux_sym_number_literal_token2] = ACTIONS(1),
    [aux_sym_number_literal_token3] = ACTIONS(1),
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
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_CARET_CARET] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(62),
    [sym__definition] = STATE(2),
    [sym_struct_definition] = STATE(2),
    [sym_union_definition] = STATE(2),
    [sym__definition_statement] = STATE(2),
    [sym_variable_definition] = STATE(2),
    [sym_variable_placement] = STATE(2),
    [sym_array_definition] = STATE(2),
    [sym__type] = STATE(36),
    [sym__primitive_type] = STATE(36),
    [sym_endian_indicator] = STATE(17),
    [sym_primitive_type] = STATE(36),
    [sym__type_identifier] = STATE(36),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_struct] = ACTIONS(5),
    [anon_sym_union] = ACTIONS(7),
    [anon_sym_be] = ACTIONS(9),
    [anon_sym_le] = ACTIONS(9),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_u128] = ACTIONS(11),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_s16] = ACTIONS(11),
    [anon_sym_s32] = ACTIONS(11),
    [anon_sym_s64] = ACTIONS(11),
    [anon_sym_s128] = ACTIONS(11),
    [anon_sym_float] = ACTIONS(11),
    [anon_sym_double] = ACTIONS(11),
    [anon_sym_char] = ACTIONS(11),
    [anon_sym_char16] = ACTIONS(11),
    [anon_sym_bool] = ACTIONS(11),
    [anon_sym_str] = ACTIONS(11),
    [anon_sym_auto] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(5), 1,
      anon_sym_struct,
    ACTIONS(7), 1,
      anon_sym_union,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      sym_endian_indicator,
    ACTIONS(9), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(36), 4,
      sym__type,
      sym__primitive_type,
      sym_primitive_type,
      sym__type_identifier,
    STATE(3), 8,
      sym__definition,
      sym_struct_definition,
      sym_union_definition,
      sym__definition_statement,
      sym_variable_definition,
      sym_variable_placement,
      sym_array_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(11), 17,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
  [55] = 9,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      anon_sym_struct,
    ACTIONS(22), 1,
      anon_sym_union,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(17), 1,
      sym_endian_indicator,
    ACTIONS(25), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(36), 4,
      sym__type,
      sym__primitive_type,
      sym_primitive_type,
      sym__type_identifier,
    STATE(3), 8,
      sym__definition,
      sym_struct_definition,
      sym_union_definition,
      sym__definition_statement,
      sym_variable_definition,
      sym_variable_placement,
      sym_array_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(28), 17,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
  [110] = 8,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(34), 1,
      anon_sym_padding,
    ACTIONS(36), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      sym_endian_indicator,
    ACTIONS(9), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(35), 4,
      sym__type,
      sym__primitive_type,
      sym_primitive_type,
      sym__type_identifier,
    STATE(5), 5,
      sym__definition_statement,
      sym_variable_definition,
      sym_array_definition,
      sym_padding,
      aux_sym_field_list_repeat1,
    ACTIONS(11), 17,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
  [159] = 8,
    ACTIONS(38), 1,
      anon_sym_padding,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(49), 1,
      sym_identifier,
    STATE(17), 1,
      sym_endian_indicator,
    ACTIONS(43), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(35), 4,
      sym__type,
      sym__primitive_type,
      sym_primitive_type,
      sym__type_identifier,
    STATE(5), 5,
      sym__definition_statement,
      sym_variable_definition,
      sym_array_definition,
      sym_padding,
      aux_sym_field_list_repeat1,
    ACTIONS(46), 17,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
  [208] = 8,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(34), 1,
      anon_sym_padding,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      sym_endian_indicator,
    ACTIONS(9), 2,
      anon_sym_be,
      anon_sym_le,
    STATE(35), 4,
      sym__type,
      sym__primitive_type,
      sym_primitive_type,
      sym__type_identifier,
    STATE(4), 5,
      sym__definition_statement,
      sym_variable_definition,
      sym_array_definition,
      sym_padding,
      aux_sym_field_list_repeat1,
    ACTIONS(11), 17,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_s128,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_char16,
      anon_sym_bool,
      anon_sym_str,
      anon_sym_auto,
  [257] = 2,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 22,
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
  [285] = 2,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 22,
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
  [313] = 2,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 22,
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
  [341] = 2,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    ACTIONS(68), 22,
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
  [369] = 2,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(72), 22,
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
  [397] = 2,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 22,
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
  [425] = 2,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    ACTIONS(68), 21,
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
  [452] = 2,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    ACTIONS(64), 21,
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
  [479] = 2,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    ACTIONS(72), 21,
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
  [506] = 2,
    ACTIONS(80), 1,
      anon_sym_RBRACE,
    ACTIONS(78), 21,
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
  [533] = 3,
    ACTIONS(11), 1,
      anon_sym_char,
    STATE(48), 1,
      sym_primitive_type,
    ACTIONS(82), 16,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
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
  [558] = 2,
    ACTIONS(86), 1,
      anon_sym_char,
    ACTIONS(84), 16,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
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
  [580] = 3,
    STATE(54), 1,
      sym__variable_attribute,
    ACTIONS(90), 4,
      anon_sym_hidden,
      anon_sym_inline,
      anon_sym_no_unique_address,
      anon_sym_static,
    ACTIONS(88), 6,
      anon_sym_color,
      anon_sym_name,
      anon_sym_comment,
      anon_sym_format,
      anon_sym_transform,
      anon_sym_pointer_base,
  [598] = 5,
    ACTIONS(92), 1,
      anon_sym_RBRACK,
    ACTIONS(94), 1,
      sym_identifier,
    ACTIONS(96), 1,
      aux_sym_number_literal_token1,
    ACTIONS(98), 2,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
    STATE(61), 3,
      sym__array_size,
      sym_number_literal,
      sym__number,
  [617] = 7,
    ACTIONS(100), 1,
      anon_sym_AT,
    ACTIONS(102), 1,
      anon_sym_LBRACK,
    ACTIONS(104), 1,
      anon_sym_SEMI,
    ACTIONS(106), 1,
      anon_sym_LBRACK_LBRACK,
    STATE(11), 1,
      sym__declaration_finish,
    STATE(28), 1,
      sym__array_size_wrapper,
    STATE(51), 1,
      sym_attribute,
  [639] = 6,
    ACTIONS(102), 1,
      anon_sym_LBRACK,
    ACTIONS(106), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    STATE(15), 1,
      sym__declaration_finish,
    STATE(27), 1,
      sym__array_size_wrapper,
    STATE(66), 1,
      sym_attribute,
  [658] = 4,
    ACTIONS(96), 1,
      aux_sym_number_literal_token1,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(98), 2,
      aux_sym_number_literal_token2,
      aux_sym_number_literal_token3,
    STATE(31), 2,
      sym_number_literal,
      sym__number,
  [673] = 3,
    ACTIONS(114), 1,
      anon_sym_LBRACK,
    ACTIONS(116), 1,
      anon_sym_COMMA,
    ACTIONS(112), 3,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
  [685] = 3,
    ACTIONS(116), 1,
      anon_sym_COMMA,
    ACTIONS(120), 1,
      anon_sym_LBRACK,
    ACTIONS(118), 3,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
  [697] = 4,
    ACTIONS(106), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(122), 1,
      anon_sym_SEMI,
    STATE(7), 1,
      sym__declaration_finish,
    STATE(51), 1,
      sym_attribute,
  [710] = 4,
    ACTIONS(106), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(124), 1,
      anon_sym_SEMI,
    STATE(14), 1,
      sym__declaration_finish,
    STATE(66), 1,
      sym_attribute,
  [723] = 4,
    ACTIONS(106), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(126), 1,
      anon_sym_SEMI,
    STATE(9), 1,
      sym__declaration_finish,
    STATE(51), 1,
      sym_attribute,
  [736] = 4,
    ACTIONS(106), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(128), 1,
      anon_sym_SEMI,
    STATE(8), 1,
      sym__declaration_finish,
    STATE(51), 1,
      sym_attribute,
  [749] = 4,
    ACTIONS(106), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(130), 1,
      anon_sym_SEMI,
    STATE(16), 1,
      sym__declaration_finish,
    STATE(66), 1,
      sym_attribute,
  [762] = 4,
    ACTIONS(106), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(132), 1,
      anon_sym_SEMI,
    STATE(12), 1,
      sym__declaration_finish,
    STATE(51), 1,
      sym_attribute,
  [775] = 4,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
    ACTIONS(136), 1,
      aux_sym_string_literal_token1,
    ACTIONS(138), 1,
      sym_escape_sequence,
    STATE(33), 1,
      aux_sym_string_literal_repeat1,
  [788] = 4,
    ACTIONS(140), 1,
      anon_sym_DQUOTE,
    ACTIONS(142), 1,
      aux_sym_string_literal_token1,
    ACTIONS(144), 1,
      sym_escape_sequence,
    STATE(34), 1,
      aux_sym_string_literal_repeat1,
  [801] = 4,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      aux_sym_string_literal_token1,
    ACTIONS(151), 1,
      sym_escape_sequence,
    STATE(34), 1,
      aux_sym_string_literal_repeat1,
  [814] = 3,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(22), 1,
      sym__identifier_definition,
    STATE(42), 1,
      aux_sym__identifier_definition_repeat1,
  [824] = 3,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(21), 1,
      sym__identifier_definition,
    STATE(42), 1,
      aux_sym__identifier_definition_repeat1,
  [834] = 1,
    ACTIONS(156), 3,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
  [840] = 1,
    ACTIONS(158), 2,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
  [845] = 1,
    ACTIONS(160), 2,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
  [850] = 2,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      sym_field_list,
  [857] = 2,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_field_list,
  [864] = 2,
    ACTIONS(164), 1,
      sym_identifier,
    STATE(47), 1,
      aux_sym__identifier_definition_repeat1,
  [871] = 2,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    STATE(56), 1,
      sym_string_literal,
  [878] = 1,
    ACTIONS(168), 2,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
  [883] = 2,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    STATE(30), 1,
      sym__array_size_wrapper,
  [890] = 1,
    ACTIONS(172), 2,
      anon_sym_SEMI,
      anon_sym_LBRACK_LBRACK,
  [895] = 2,
    ACTIONS(174), 1,
      sym_identifier,
    STATE(47), 1,
      aux_sym__identifier_definition_repeat1,
  [902] = 1,
    ACTIONS(177), 1,
      sym_identifier,
  [906] = 1,
    ACTIONS(179), 1,
      sym_identifier,
  [910] = 1,
    ACTIONS(181), 1,
      sym_identifier,
  [914] = 1,
    ACTIONS(183), 1,
      anon_sym_SEMI,
  [918] = 1,
    ACTIONS(116), 1,
      anon_sym_COMMA,
  [922] = 1,
    ACTIONS(185), 1,
      anon_sym_SEMI,
  [926] = 1,
    ACTIONS(187), 1,
      anon_sym_RBRACK_RBRACK,
  [930] = 1,
    ACTIONS(189), 1,
      anon_sym_RBRACK_RBRACK,
  [934] = 1,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
  [938] = 1,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
  [942] = 1,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
  [946] = 1,
    ACTIONS(197), 1,
      anon_sym_RBRACK_RBRACK,
  [950] = 1,
    ACTIONS(199), 1,
      anon_sym_RPAREN,
  [954] = 1,
    ACTIONS(201), 1,
      anon_sym_RBRACK,
  [958] = 1,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
  [962] = 1,
    ACTIONS(205), 1,
      sym_identifier,
  [966] = 1,
    ACTIONS(207), 1,
      sym_identifier,
  [970] = 1,
    ACTIONS(209), 1,
      sym_identifier,
  [974] = 1,
    ACTIONS(211), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 55,
  [SMALL_STATE(4)] = 110,
  [SMALL_STATE(5)] = 159,
  [SMALL_STATE(6)] = 208,
  [SMALL_STATE(7)] = 257,
  [SMALL_STATE(8)] = 285,
  [SMALL_STATE(9)] = 313,
  [SMALL_STATE(10)] = 341,
  [SMALL_STATE(11)] = 369,
  [SMALL_STATE(12)] = 397,
  [SMALL_STATE(13)] = 425,
  [SMALL_STATE(14)] = 452,
  [SMALL_STATE(15)] = 479,
  [SMALL_STATE(16)] = 506,
  [SMALL_STATE(17)] = 533,
  [SMALL_STATE(18)] = 558,
  [SMALL_STATE(19)] = 580,
  [SMALL_STATE(20)] = 598,
  [SMALL_STATE(21)] = 617,
  [SMALL_STATE(22)] = 639,
  [SMALL_STATE(23)] = 658,
  [SMALL_STATE(24)] = 673,
  [SMALL_STATE(25)] = 685,
  [SMALL_STATE(26)] = 697,
  [SMALL_STATE(27)] = 710,
  [SMALL_STATE(28)] = 723,
  [SMALL_STATE(29)] = 736,
  [SMALL_STATE(30)] = 749,
  [SMALL_STATE(31)] = 762,
  [SMALL_STATE(32)] = 775,
  [SMALL_STATE(33)] = 788,
  [SMALL_STATE(34)] = 801,
  [SMALL_STATE(35)] = 814,
  [SMALL_STATE(36)] = 824,
  [SMALL_STATE(37)] = 834,
  [SMALL_STATE(38)] = 840,
  [SMALL_STATE(39)] = 845,
  [SMALL_STATE(40)] = 850,
  [SMALL_STATE(41)] = 857,
  [SMALL_STATE(42)] = 864,
  [SMALL_STATE(43)] = 871,
  [SMALL_STATE(44)] = 878,
  [SMALL_STATE(45)] = 883,
  [SMALL_STATE(46)] = 890,
  [SMALL_STATE(47)] = 895,
  [SMALL_STATE(48)] = 902,
  [SMALL_STATE(49)] = 906,
  [SMALL_STATE(50)] = 910,
  [SMALL_STATE(51)] = 914,
  [SMALL_STATE(52)] = 918,
  [SMALL_STATE(53)] = 922,
  [SMALL_STATE(54)] = 926,
  [SMALL_STATE(55)] = 930,
  [SMALL_STATE(56)] = 934,
  [SMALL_STATE(57)] = 938,
  [SMALL_STATE(58)] = 942,
  [SMALL_STATE(59)] = 946,
  [SMALL_STATE(60)] = 950,
  [SMALL_STATE(61)] = 954,
  [SMALL_STATE(62)] = 958,
  [SMALL_STATE(63)] = 962,
  [SMALL_STATE(64)] = 966,
  [SMALL_STATE(65)] = 970,
  [SMALL_STATE(66)] = 974,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(63),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(45),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(18),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(64),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(63),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_definition, 4, .production_id = 6),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union_definition, 4, .production_id = 6),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 4, .production_id = 6),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 4, .production_id = 6),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_definition, 4, .production_id = 7),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_definition, 4, .production_id = 7),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration_finish, 2, .production_id = 8),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declaration_finish, 2, .production_id = 8),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3, .production_id = 3),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 3, .production_id = 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_placement, 5, .production_id = 9),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_placement, 5, .production_id = 9),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_padding, 3, .production_id = 12),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_padding, 3, .production_id = 12),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endian_indicator, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endian_indicator, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier_definition, 2, .production_id = 4),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier_definition, 2, .production_id = 4),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier_definition, 1, .production_id = 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier_definition, 1, .production_id = 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(34),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(34),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_literal, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_size_wrapper, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_size_wrapper, 3, .production_id = 10),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_definition_repeat1, 2, .production_id = 5), SHIFT_REPEAT(52),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive_type, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_definition_repeat1, 2, .production_id = 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, .production_id = 11),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_attribute, 1, .production_id = 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_attribute, 4, .production_id = 13),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [203] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
