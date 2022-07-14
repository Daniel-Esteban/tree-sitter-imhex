#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 28
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 0
#define TOKEN_COUNT 50
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_struct = 1,
  anon_sym_SEMI = 2,
  anon_sym_COMMA = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_u8 = 6,
  anon_sym_u16 = 7,
  anon_sym_u32 = 8,
  anon_sym_u64 = 9,
  anon_sym_u128 = 10,
  anon_sym_s8 = 11,
  anon_sym_s16 = 12,
  anon_sym_s32 = 13,
  anon_sym_s64 = 14,
  anon_sym_s128 = 15,
  anon_sym_float = 16,
  anon_sym_double = 17,
  anon_sym_char = 18,
  anon_sym_char16 = 19,
  anon_sym_bool = 20,
  anon_sym_str = 21,
  anon_sym_auto = 22,
  anon_sym_return = 23,
  sym_identifier = 24,
  sym_number = 25,
  anon_sym_TILDE = 26,
  anon_sym_BANG = 27,
  anon_sym_LPAREN = 28,
  anon_sym_RPAREN = 29,
  anon_sym_PLUS = 30,
  anon_sym_DASH = 31,
  anon_sym_STAR = 32,
  anon_sym_SLASH = 33,
  anon_sym_PERCENT = 34,
  anon_sym_GT_GT = 35,
  anon_sym_LT_LT = 36,
  anon_sym_AMP = 37,
  anon_sym_PIPE = 38,
  anon_sym_CARET = 39,
  anon_sym_EQ_EQ = 40,
  anon_sym_BANG_EQ = 41,
  anon_sym_GT = 42,
  anon_sym_LT = 43,
  anon_sym_GT_EQ = 44,
  anon_sym_LT_EQ = 45,
  anon_sym_AMP_AMP = 46,
  anon_sym_CARET_CARET = 47,
  anon_sym_COLON = 48,
  anon_sym_QMARK = 49,
  sym_source_file = 50,
  sym__definition = 51,
  sym_struct_definition = 52,
  sym_variable_definition = 53,
  sym_identifier_definition = 54,
  sym_field_list = 55,
  sym_primitive_type = 56,
  aux_sym_source_file_repeat1 = 57,
  aux_sym_identifier_definition_repeat1 = 58,
  aux_sym_field_list_repeat1 = 59,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_struct] = "struct",
  [anon_sym_SEMI] = ";",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
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
  [sym_number] = "number",
  [anon_sym_TILDE] = "~",
  [anon_sym_BANG] = "!",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
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
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_struct_definition] = "struct_definition",
  [sym_variable_definition] = "variable_definition",
  [sym_identifier_definition] = "identifier_definition",
  [sym_field_list] = "field_list",
  [sym_primitive_type] = "primitive_type",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_identifier_definition_repeat1] = "identifier_definition_repeat1",
  [aux_sym_field_list_repeat1] = "field_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
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
  [sym_number] = sym_number,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
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
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_struct_definition] = sym_struct_definition,
  [sym_variable_definition] = sym_variable_definition,
  [sym_identifier_definition] = sym_identifier_definition,
  [sym_field_list] = sym_field_list,
  [sym_primitive_type] = sym_primitive_type,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_identifier_definition_repeat1] = aux_sym_identifier_definition_repeat1,
  [aux_sym_field_list_repeat1] = aux_sym_field_list_repeat1,
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
  [anon_sym_SEMI] = {
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
  [sym_number] = {
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [sym_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_field_list] = {
    .visible = true,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_fields = 1,
  field_struct_name = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_fields] = "fields",
  [field_struct_name] = "struct_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_fields, 2},
    {field_struct_name, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(43);
      if (lookahead == '!') ADVANCE(71);
      if (lookahead == '%') ADVANCE(78);
      if (lookahead == '&') ADVANCE(81);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == '*') ADVANCE(76);
      if (lookahead == '+') ADVANCE(74);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == ';') ADVANCE(45);
      if (lookahead == '<') ADVANCE(87);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(86);
      if (lookahead == '?') ADVANCE(93);
      if (lookahead == '^') ADVANCE(83);
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'b') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(21);
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 'r') ADVANCE(20);
      if (lookahead == 's') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(3);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '|') ADVANCE(82);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '~') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 1:
      if (lookahead == '1') ADVANCE(4);
      if (lookahead == '3') ADVANCE(5);
      if (lookahead == '6') ADVANCE(8);
      if (lookahead == '8') ADVANCE(54);
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 2:
      if (lookahead == '1') ADVANCE(4);
      if (lookahead == '3') ADVANCE(5);
      if (lookahead == '6') ADVANCE(8);
      if (lookahead == '8') ADVANCE(54);
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 3:
      if (lookahead == '1') ADVANCE(7);
      if (lookahead == '3') ADVANCE(6);
      if (lookahead == '6') ADVANCE(9);
      if (lookahead == '8') ADVANCE(49);
      END_STATE();
    case 4:
      if (lookahead == '2') ADVANCE(11);
      if (lookahead == '6') ADVANCE(55);
      END_STATE();
    case 5:
      if (lookahead == '2') ADVANCE(56);
      END_STATE();
    case 6:
      if (lookahead == '2') ADVANCE(51);
      END_STATE();
    case 7:
      if (lookahead == '2') ADVANCE(12);
      if (lookahead == '6') ADVANCE(50);
      END_STATE();
    case 8:
      if (lookahead == '4') ADVANCE(57);
      END_STATE();
    case 9:
      if (lookahead == '4') ADVANCE(52);
      END_STATE();
    case 10:
      if (lookahead == '6') ADVANCE(62);
      END_STATE();
    case 11:
      if (lookahead == '8') ADVANCE(58);
      END_STATE();
    case 12:
      if (lookahead == '8') ADVANCE(53);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(84);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'b') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(21);
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 's') ADVANCE(2);
      if (lookahead == 'u') ADVANCE(3);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 17:
      if (lookahead == 'b') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 21:
      if (lookahead == 'h') ADVANCE(15);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 40:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 41:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 42:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_u128);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_s8);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_s16);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_s32);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_s64);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_s128);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_char);
      if (lookahead == '1') ADVANCE(10);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_char16);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_str);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_str);
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_auto);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(85);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(90);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '^') ADVANCE(91);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(88);
      if (lookahead == '>') ADVANCE(79);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '=') ADVANCE(89);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_CARET_CARET);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 14},
  [5] = {.lex_state = 14},
  [6] = {.lex_state = 14},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 14},
  [12] = {.lex_state = 42},
  [13] = {.lex_state = 42},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 42},
  [17] = {.lex_state = 42},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 42},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 42},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 42},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
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
    [sym_number] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
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
  },
  [1] = {
    [sym_source_file] = STATE(25),
    [sym__definition] = STATE(2),
    [sym_struct_definition] = STATE(2),
    [sym_variable_definition] = STATE(2),
    [sym_primitive_type] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_struct] = ACTIONS(5),
    [anon_sym_u8] = ACTIONS(7),
    [anon_sym_u16] = ACTIONS(7),
    [anon_sym_u32] = ACTIONS(7),
    [anon_sym_u64] = ACTIONS(7),
    [anon_sym_u128] = ACTIONS(7),
    [anon_sym_s8] = ACTIONS(7),
    [anon_sym_s16] = ACTIONS(7),
    [anon_sym_s32] = ACTIONS(7),
    [anon_sym_s64] = ACTIONS(7),
    [anon_sym_s128] = ACTIONS(7),
    [anon_sym_float] = ACTIONS(7),
    [anon_sym_double] = ACTIONS(7),
    [anon_sym_char] = ACTIONS(9),
    [anon_sym_char16] = ACTIONS(7),
    [anon_sym_bool] = ACTIONS(7),
    [anon_sym_str] = ACTIONS(9),
    [anon_sym_auto] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(5), 1,
      anon_sym_struct,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      sym_primitive_type,
    ACTIONS(9), 2,
      anon_sym_char,
      anon_sym_str,
    STATE(3), 4,
      sym__definition,
      sym_struct_definition,
      sym_variable_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(7), 15,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
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
      anon_sym_auto,
  [37] = 6,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_struct,
    STATE(13), 1,
      sym_primitive_type,
    ACTIONS(21), 2,
      anon_sym_char,
      anon_sym_str,
    STATE(3), 4,
      sym__definition,
      sym_struct_definition,
      sym_variable_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(18), 15,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
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
      anon_sym_auto,
  [74] = 5,
    ACTIONS(24), 1,
      anon_sym_RBRACE,
    ACTIONS(29), 1,
      anon_sym_char,
    STATE(12), 1,
      sym_primitive_type,
    STATE(4), 2,
      sym_variable_definition,
      aux_sym_field_list_repeat1,
    ACTIONS(26), 16,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
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
  [106] = 5,
    ACTIONS(9), 1,
      anon_sym_char,
    ACTIONS(32), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      sym_primitive_type,
    STATE(4), 2,
      sym_variable_definition,
      aux_sym_field_list_repeat1,
    ACTIONS(7), 16,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
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
  [138] = 5,
    ACTIONS(9), 1,
      anon_sym_char,
    ACTIONS(34), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      sym_primitive_type,
    STATE(5), 2,
      sym_variable_definition,
      aux_sym_field_list_repeat1,
    ACTIONS(7), 16,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
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
  [170] = 2,
    ACTIONS(38), 2,
      anon_sym_char,
      anon_sym_str,
    ACTIONS(36), 17,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
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
      anon_sym_auto,
  [194] = 2,
    ACTIONS(42), 2,
      anon_sym_char,
      anon_sym_str,
    ACTIONS(40), 17,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
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
      anon_sym_auto,
  [218] = 2,
    ACTIONS(46), 2,
      anon_sym_char,
      anon_sym_str,
    ACTIONS(44), 17,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
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
      anon_sym_auto,
  [242] = 2,
    ACTIONS(50), 2,
      anon_sym_char,
      anon_sym_str,
    ACTIONS(48), 17,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
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
      anon_sym_auto,
  [266] = 2,
    ACTIONS(38), 1,
      anon_sym_char,
    ACTIONS(36), 17,
      anon_sym_RBRACE,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
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
  [289] = 3,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(17), 1,
      aux_sym_identifier_definition_repeat1,
    STATE(26), 1,
      sym_identifier_definition,
  [299] = 3,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(17), 1,
      aux_sym_identifier_definition_repeat1,
    STATE(24), 1,
      sym_identifier_definition,
  [309] = 2,
    ACTIONS(54), 1,
      anon_sym_LBRACE,
    STATE(10), 1,
      sym_field_list,
  [316] = 2,
    ACTIONS(56), 1,
      anon_sym_SEMI,
    ACTIONS(58), 1,
      anon_sym_COMMA,
  [323] = 2,
    ACTIONS(60), 1,
      sym_identifier,
    STATE(16), 1,
      aux_sym_identifier_definition_repeat1,
  [330] = 2,
    ACTIONS(63), 1,
      sym_identifier,
    STATE(16), 1,
      aux_sym_identifier_definition_repeat1,
  [337] = 2,
    ACTIONS(58), 1,
      anon_sym_COMMA,
    ACTIONS(65), 1,
      anon_sym_SEMI,
  [344] = 1,
    ACTIONS(67), 1,
      sym_identifier,
  [348] = 1,
    ACTIONS(69), 1,
      anon_sym_SEMI,
  [352] = 1,
    ACTIONS(71), 1,
      sym_identifier,
  [356] = 1,
    ACTIONS(58), 1,
      anon_sym_COMMA,
  [360] = 1,
    ACTIONS(73), 1,
      anon_sym_SEMI,
  [364] = 1,
    ACTIONS(75), 1,
      anon_sym_SEMI,
  [368] = 1,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
  [372] = 1,
    ACTIONS(79), 1,
      anon_sym_SEMI,
  [376] = 1,
    ACTIONS(81), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 74,
  [SMALL_STATE(5)] = 106,
  [SMALL_STATE(6)] = 138,
  [SMALL_STATE(7)] = 170,
  [SMALL_STATE(8)] = 194,
  [SMALL_STATE(9)] = 218,
  [SMALL_STATE(10)] = 242,
  [SMALL_STATE(11)] = 266,
  [SMALL_STATE(12)] = 289,
  [SMALL_STATE(13)] = 299,
  [SMALL_STATE(14)] = 309,
  [SMALL_STATE(15)] = 316,
  [SMALL_STATE(16)] = 323,
  [SMALL_STATE(17)] = 330,
  [SMALL_STATE(18)] = 337,
  [SMALL_STATE(19)] = 344,
  [SMALL_STATE(20)] = 348,
  [SMALL_STATE(21)] = 352,
  [SMALL_STATE(22)] = 356,
  [SMALL_STATE(23)] = 360,
  [SMALL_STATE(24)] = 364,
  [SMALL_STATE(25)] = 368,
  [SMALL_STATE(26)] = 372,
  [SMALL_STATE(27)] = 376,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(27),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(27),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 3),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 4),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_list, 4),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 3),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_list, 3),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 3, .production_id = 1),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 3, .production_id = 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_definition, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_definition_repeat1, 2), SHIFT_REPEAT(22),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_definition, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_definition_repeat1, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [77] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
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
