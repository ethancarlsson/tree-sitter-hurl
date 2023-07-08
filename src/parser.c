#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 23
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_GET = 1,
  anon_sym_HEAD = 2,
  anon_sym_POST = 3,
  anon_sym_PUT = 4,
  anon_sym_DELETE = 5,
  anon_sym_CONNECT = 6,
  anon_sym_OPTIONS = 7,
  anon_sym_TRACE = 8,
  anon_sym_PATCH = 9,
  sym_url = 10,
  anon_sym_COLON = 11,
  anon_sym_LBRACKQueryStringParams_RBRACK = 12,
  anon_sym_LBRACKFormParams_RBRACK = 13,
  anon_sym_LBRACKBasicAuth_RBRACK = 14,
  anon_sym_LBRACKCookies_RBRACK = 15,
  anon_sym_LBRACKMultipartFormData_RBRACK = 16,
  sym_key = 17,
  sym_value = 18,
  sym_json = 19,
  anon_sym_HTTP_SLASH1_DOT0 = 20,
  anon_sym_HTTP_SLASH1_DOT1 = 21,
  anon_sym_HTTP_SLASH2 = 22,
  anon_sym_HTTP = 23,
  sym_status = 24,
  sym_comment = 25,
  sym_source_file = 26,
  sym_request_response = 27,
  sym_request = 28,
  sym_http_method = 29,
  sym_pair = 30,
  sym_request_param_keyword = 31,
  sym_input = 32,
  sym_response = 33,
  sym_version_and_status = 34,
  sym_http_version = 35,
  aux_sym_source_file_repeat1 = 36,
  aux_sym_request_repeat1 = 37,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_GET] = "GET",
  [anon_sym_HEAD] = "HEAD",
  [anon_sym_POST] = "POST",
  [anon_sym_PUT] = "PUT",
  [anon_sym_DELETE] = "DELETE",
  [anon_sym_CONNECT] = "CONNECT",
  [anon_sym_OPTIONS] = "OPTIONS",
  [anon_sym_TRACE] = "TRACE",
  [anon_sym_PATCH] = "PATCH",
  [sym_url] = "url",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACKQueryStringParams_RBRACK] = "[QueryStringParams]",
  [anon_sym_LBRACKFormParams_RBRACK] = "[FormParams]",
  [anon_sym_LBRACKBasicAuth_RBRACK] = "[BasicAuth]",
  [anon_sym_LBRACKCookies_RBRACK] = "[Cookies]",
  [anon_sym_LBRACKMultipartFormData_RBRACK] = "[MultipartFormData]",
  [sym_key] = "key",
  [sym_value] = "value",
  [sym_json] = "json",
  [anon_sym_HTTP_SLASH1_DOT0] = "HTTP/1.0",
  [anon_sym_HTTP_SLASH1_DOT1] = "HTTP/1.1",
  [anon_sym_HTTP_SLASH2] = "HTTP/2",
  [anon_sym_HTTP] = "HTTP",
  [sym_status] = "status",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_request_response] = "request_response",
  [sym_request] = "request",
  [sym_http_method] = "http_method",
  [sym_pair] = "pair",
  [sym_request_param_keyword] = "request_param_keyword",
  [sym_input] = "input",
  [sym_response] = "response",
  [sym_version_and_status] = "version_and_status",
  [sym_http_version] = "http_version",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_request_repeat1] = "request_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_GET] = anon_sym_GET,
  [anon_sym_HEAD] = anon_sym_HEAD,
  [anon_sym_POST] = anon_sym_POST,
  [anon_sym_PUT] = anon_sym_PUT,
  [anon_sym_DELETE] = anon_sym_DELETE,
  [anon_sym_CONNECT] = anon_sym_CONNECT,
  [anon_sym_OPTIONS] = anon_sym_OPTIONS,
  [anon_sym_TRACE] = anon_sym_TRACE,
  [anon_sym_PATCH] = anon_sym_PATCH,
  [sym_url] = sym_url,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACKQueryStringParams_RBRACK] = anon_sym_LBRACKQueryStringParams_RBRACK,
  [anon_sym_LBRACKFormParams_RBRACK] = anon_sym_LBRACKFormParams_RBRACK,
  [anon_sym_LBRACKBasicAuth_RBRACK] = anon_sym_LBRACKBasicAuth_RBRACK,
  [anon_sym_LBRACKCookies_RBRACK] = anon_sym_LBRACKCookies_RBRACK,
  [anon_sym_LBRACKMultipartFormData_RBRACK] = anon_sym_LBRACKMultipartFormData_RBRACK,
  [sym_key] = sym_key,
  [sym_value] = sym_value,
  [sym_json] = sym_json,
  [anon_sym_HTTP_SLASH1_DOT0] = anon_sym_HTTP_SLASH1_DOT0,
  [anon_sym_HTTP_SLASH1_DOT1] = anon_sym_HTTP_SLASH1_DOT1,
  [anon_sym_HTTP_SLASH2] = anon_sym_HTTP_SLASH2,
  [anon_sym_HTTP] = anon_sym_HTTP,
  [sym_status] = sym_status,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_request_response] = sym_request_response,
  [sym_request] = sym_request,
  [sym_http_method] = sym_http_method,
  [sym_pair] = sym_pair,
  [sym_request_param_keyword] = sym_request_param_keyword,
  [sym_input] = sym_input,
  [sym_response] = sym_response,
  [sym_version_and_status] = sym_version_and_status,
  [sym_http_version] = sym_http_version,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_request_repeat1] = aux_sym_request_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_GET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HEAD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POST] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PUT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DELETE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CONNECT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OPTIONS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PATCH] = {
    .visible = true,
    .named = false,
  },
  [sym_url] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKQueryStringParams_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKFormParams_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKBasicAuth_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKCookies_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKMultipartFormData_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_json] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_HTTP_SLASH1_DOT0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HTTP_SLASH1_DOT1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HTTP_SLASH2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HTTP] = {
    .visible = true,
    .named = false,
  },
  [sym_status] = {
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
  [sym_request_response] = {
    .visible = true,
    .named = true,
  },
  [sym_request] = {
    .visible = true,
    .named = true,
  },
  [sym_http_method] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_request_param_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_input] = {
    .visible = true,
    .named = true,
  },
  [sym_response] = {
    .visible = true,
    .named = true,
  },
  [sym_version_and_status] = {
    .visible = true,
    .named = true,
  },
  [sym_http_version] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_request_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
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
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
};

static inline bool sym_key_character_set_1(int32_t c) {
  return (c < 'I'
    ? (c < '6'
      ? (c < '0'
        ? c == '-'
        : c <= '0')
      : (c <= '9' || (c < 'E'
        ? (c >= 'A' && c <= 'B')
        : c <= 'F')))
    : (c <= 'N' || (c < '_'
      ? (c < 'U'
        ? (c >= 'Q' && c <= 'S')
        : c <= 'Z')
      : (c <= '_' || (c >= 'a' && c <= 'z')))));
}

static inline bool sym_key_character_set_2(int32_t c) {
  return (c < 'I'
    ? (c < 'A'
      ? (c < '0'
        ? c == '-'
        : c <= '9')
      : (c <= 'B' || (c >= 'E' && c <= 'F')))
    : (c <= 'N' || (c < '_'
      ? (c < 'U'
        ? (c >= 'Q' && c <= 'S')
        : c <= 'Z')
      : (c <= '_' || (c >= 'a' && c <= 'z')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(114);
      if (lookahead == '#') ADVANCE(188);
      if (sym_key_character_set_1(lookahead)) ADVANCE(177);
      if (lookahead == ':') ADVANCE(134);
      if (lookahead == 'C') ADVANCE(160);
      if (lookahead == 'D') ADVANCE(148);
      if (lookahead == 'G') ADVANCE(149);
      if (lookahead == 'H') ADVANCE(143);
      if (lookahead == 'O') ADVANCE(163);
      if (lookahead == 'P') ADVANCE(142);
      if (lookahead == 'T') ADVANCE(164);
      if (lookahead == '[') ADVANCE(13);
      if (lookahead == '{') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(141);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(178);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('$' <= lookahead && lookahead <= '~')) ADVANCE(179);
      if (lookahead == '#') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(110);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(182);
      if (lookahead == '1') ADVANCE(183);
      END_STATE();
    case 6:
      if (lookahead == '1') ADVANCE(2);
      if (lookahead == '2') ADVANCE(184);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(4);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(17);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(106);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(45);
      if (lookahead == 'O') ADVANCE(42);
      if (lookahead == 'U') ADVANCE(46);
      END_STATE();
    case 13:
      if (lookahead == 'B') ADVANCE(56);
      if (lookahead == 'C') ADVANCE(82);
      if (lookahead == 'F') ADVANCE(80);
      if (lookahead == 'M') ADVANCE(104);
      if (lookahead == 'Q') ADVANCE(105);
      END_STATE();
    case 14:
      if (lookahead == 'C') ADVANCE(27);
      END_STATE();
    case 15:
      if (lookahead == 'C') ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == 'C') ADVANCE(48);
      END_STATE();
    case 17:
      if (lookahead == 'D') ADVANCE(117);
      END_STATE();
    case 18:
      if (lookahead == 'D') ADVANCE(61);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(29);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(43);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(129);
      END_STATE();
    case 22:
      if (lookahead == 'E') ADVANCE(123);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(9);
      if (lookahead == 'T') ADVANCE(49);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(16);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(50);
      END_STATE();
    case 26:
      if (lookahead == 'F') ADVANCE(83);
      END_STATE();
    case 27:
      if (lookahead == 'H') ADVANCE(131);
      END_STATE();
    case 28:
      if (lookahead == 'I') ADVANCE(34);
      END_STATE();
    case 29:
      if (lookahead == 'L') ADVANCE(25);
      END_STATE();
    case 30:
      if (lookahead == 'N') ADVANCE(32);
      END_STATE();
    case 31:
      if (lookahead == 'N') ADVANCE(40);
      END_STATE();
    case 32:
      if (lookahead == 'N') ADVANCE(24);
      END_STATE();
    case 33:
      if (lookahead == 'O') ADVANCE(30);
      END_STATE();
    case 34:
      if (lookahead == 'O') ADVANCE(31);
      END_STATE();
    case 35:
      if (lookahead == 'P') ADVANCE(185);
      END_STATE();
    case 36:
      if (lookahead == 'P') ADVANCE(58);
      END_STATE();
    case 37:
      if (lookahead == 'P') ADVANCE(44);
      END_STATE();
    case 38:
      if (lookahead == 'P') ADVANCE(63);
      END_STATE();
    case 39:
      if (lookahead == 'R') ADVANCE(10);
      END_STATE();
    case 40:
      if (lookahead == 'S') ADVANCE(127);
      END_STATE();
    case 41:
      if (lookahead == 'S') ADVANCE(102);
      END_STATE();
    case 42:
      if (lookahead == 'S') ADVANCE(47);
      END_STATE();
    case 43:
      if (lookahead == 'T') ADVANCE(115);
      END_STATE();
    case 44:
      if (lookahead == 'T') ADVANCE(28);
      END_STATE();
    case 45:
      if (lookahead == 'T') ADVANCE(14);
      END_STATE();
    case 46:
      if (lookahead == 'T') ADVANCE(121);
      END_STATE();
    case 47:
      if (lookahead == 'T') ADVANCE(119);
      END_STATE();
    case 48:
      if (lookahead == 'T') ADVANCE(125);
      END_STATE();
    case 49:
      if (lookahead == 'T') ADVANCE(35);
      END_STATE();
    case 50:
      if (lookahead == 'T') ADVANCE(22);
      END_STATE();
    case 51:
      if (lookahead == ']') ADVANCE(138);
      END_STATE();
    case 52:
      if (lookahead == ']') ADVANCE(137);
      END_STATE();
    case 53:
      if (lookahead == ']') ADVANCE(136);
      END_STATE();
    case 54:
      if (lookahead == ']') ADVANCE(139);
      END_STATE();
    case 55:
      if (lookahead == ']') ADVANCE(135);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(11);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 67:
      if (lookahead == 'g') ADVANCE(38);
      END_STATE();
    case 68:
      if (lookahead == 'h') ADVANCE(52);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 73:
      if (lookahead == 'k') ADVANCE(72);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 75:
      if (lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 76:
      if (lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 77:
      if (lookahead == 'm') ADVANCE(95);
      END_STATE();
    case 78:
      if (lookahead == 'm') ADVANCE(96);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 84:
      if (lookahead == 'p') ADVANCE(8);
      END_STATE();
    case 85:
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 88:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 93:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 94:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 95:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 96:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 104:
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 105:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 106:
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 107:
      if (lookahead == 'y') ADVANCE(41);
      END_STATE();
    case 108:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 109:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 110:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(133);
      END_STATE();
    case 111:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(111);
      if (lookahead == '}') ADVANCE(181);
      END_STATE();
    case 112:
      if (eof) ADVANCE(114);
      if (lookahead == '#') ADVANCE(188);
      if (lookahead == 'C') ADVANCE(33);
      if (lookahead == 'D') ADVANCE(19);
      if (lookahead == 'G') ADVANCE(20);
      if (lookahead == 'H') ADVANCE(23);
      if (lookahead == 'O') ADVANCE(37);
      if (lookahead == 'P') ADVANCE(12);
      if (lookahead == 'T') ADVANCE(39);
      if (lookahead == 'h') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(112)
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(109);
      END_STATE();
    case 113:
      if (eof) ADVANCE(114);
      if (lookahead == '#') ADVANCE(188);
      if (sym_key_character_set_2(lookahead)) ADVANCE(177);
      if (lookahead == 'C') ADVANCE(160);
      if (lookahead == 'D') ADVANCE(148);
      if (lookahead == 'G') ADVANCE(149);
      if (lookahead == 'H') ADVANCE(143);
      if (lookahead == 'O') ADVANCE(163);
      if (lookahead == 'P') ADVANCE(142);
      if (lookahead == 'T') ADVANCE(164);
      if (lookahead == '[') ADVANCE(13);
      if (lookahead == '{') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(113)
      END_STATE();
    case 114:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_GET);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_POST);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_PATCH);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_LBRACKQueryStringParams_RBRACK);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_LBRACKFormParams_RBRACK);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_LBRACKBasicAuth_RBRACK);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_LBRACKCookies_RBRACK);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_LBRACKMultipartFormData_RBRACK);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= 'T') ||
          ('V' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (lookahead == 'A') ADVANCE(169);
      if (lookahead == 'O') ADVANCE(166);
      if (lookahead == 'U') ADVANCE(170);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (lookahead == 'E') ADVANCE(175);
      if (lookahead == 'T') ADVANCE(173);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'A' ||
          lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (lookahead == 'C') ADVANCE(154);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'A' ||
          lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (lookahead == 'C') ADVANCE(150);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'A' ||
          lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (lookahead == 'C') ADVANCE(172);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('E' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (lookahead == 'D') ADVANCE(118);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (lookahead == 'E') ADVANCE(156);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (lookahead == 'E') ADVANCE(167);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (lookahead == 'E') ADVANCE(130);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (lookahead == 'E') ADVANCE(124);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (lookahead == 'E') ADVANCE(146);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (lookahead == 'E') ADVANCE(174);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'G') ||
          ('I' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (lookahead == 'H') ADVANCE(132);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'H') ||
          ('J' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (lookahead == 'I') ADVANCE(161);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'K') ||
          ('M' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (lookahead == 'L') ADVANCE(153);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (lookahead == 'N') ADVANCE(159);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (lookahead == 'N') ADVANCE(165);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (lookahead == 'N') ADVANCE(152);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (lookahead == 'O') ADVANCE(157);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (lookahead == 'O') ADVANCE(158);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (lookahead == 'P') ADVANCE(186);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (lookahead == 'P') ADVANCE(168);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Q') ||
          ('S' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (lookahead == 'R') ADVANCE(176);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (lookahead == 'S') ADVANCE(128);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (lookahead == 'S') ADVANCE(171);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (lookahead == 'T') ADVANCE(116);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (lookahead == 'T') ADVANCE(155);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (lookahead == 'T') ADVANCE(144);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (lookahead == 'T') ADVANCE(122);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (lookahead == 'T') ADVANCE(120);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (lookahead == 'T') ADVANCE(126);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (lookahead == 'T') ADVANCE(162);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (lookahead == 'T') ADVANCE(151);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (lookahead == 'A') ADVANCE(147);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (lookahead == 'A') ADVANCE(145);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == ' ') ADVANCE(178);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('$' <= lookahead && lookahead <= '~')) ADVANCE(179);
      if (lookahead == '#') ADVANCE(180);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_value);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_value);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_json);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(111);
      if (lookahead == '}') ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT0);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT1);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH2);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_HTTP);
      if (lookahead == '/') ADVANCE(6);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_HTTP);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (lookahead == '/') ADVANCE(6);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_status);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 112},
  [2] = {.lex_state = 113},
  [3] = {.lex_state = 113},
  [4] = {.lex_state = 113},
  [5] = {.lex_state = 113},
  [6] = {.lex_state = 113},
  [7] = {.lex_state = 112},
  [8] = {.lex_state = 112},
  [9] = {.lex_state = 112},
  [10] = {.lex_state = 112},
  [11] = {.lex_state = 112},
  [12] = {.lex_state = 112},
  [13] = {.lex_state = 112},
  [14] = {.lex_state = 112},
  [15] = {.lex_state = 112},
  [16] = {.lex_state = 112},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 112},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 112},
  [21] = {.lex_state = 112},
  [22] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_GET] = ACTIONS(1),
    [anon_sym_HEAD] = ACTIONS(1),
    [anon_sym_POST] = ACTIONS(1),
    [anon_sym_PUT] = ACTIONS(1),
    [anon_sym_DELETE] = ACTIONS(1),
    [anon_sym_CONNECT] = ACTIONS(1),
    [anon_sym_OPTIONS] = ACTIONS(1),
    [anon_sym_TRACE] = ACTIONS(1),
    [anon_sym_PATCH] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(1),
    [sym_key] = ACTIONS(1),
    [sym_json] = ACTIONS(1),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(1),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(1),
    [anon_sym_HTTP_SLASH2] = ACTIONS(1),
    [anon_sym_HTTP] = ACTIONS(1),
    [sym_status] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(22),
    [sym_request_response] = STATE(10),
    [sym_request] = STATE(7),
    [sym_http_method] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(10),
    [anon_sym_GET] = ACTIONS(5),
    [anon_sym_HEAD] = ACTIONS(5),
    [anon_sym_POST] = ACTIONS(5),
    [anon_sym_PUT] = ACTIONS(5),
    [anon_sym_DELETE] = ACTIONS(5),
    [anon_sym_CONNECT] = ACTIONS(5),
    [anon_sym_OPTIONS] = ACTIONS(5),
    [anon_sym_TRACE] = ACTIONS(5),
    [anon_sym_PATCH] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_pair] = STATE(4),
    [sym_request_param_keyword] = STATE(4),
    [sym_input] = STATE(9),
    [aux_sym_request_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_GET] = ACTIONS(9),
    [anon_sym_HEAD] = ACTIONS(9),
    [anon_sym_POST] = ACTIONS(9),
    [anon_sym_PUT] = ACTIONS(9),
    [anon_sym_DELETE] = ACTIONS(9),
    [anon_sym_CONNECT] = ACTIONS(9),
    [anon_sym_OPTIONS] = ACTIONS(9),
    [anon_sym_TRACE] = ACTIONS(9),
    [anon_sym_PATCH] = ACTIONS(9),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(11),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(11),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(11),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(11),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(11),
    [sym_key] = ACTIONS(13),
    [sym_json] = ACTIONS(15),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(7),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(7),
    [anon_sym_HTTP_SLASH2] = ACTIONS(7),
    [anon_sym_HTTP] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_pair] = STATE(2),
    [sym_request_param_keyword] = STATE(2),
    [sym_input] = STATE(8),
    [aux_sym_request_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_GET] = ACTIONS(19),
    [anon_sym_HEAD] = ACTIONS(19),
    [anon_sym_POST] = ACTIONS(19),
    [anon_sym_PUT] = ACTIONS(19),
    [anon_sym_DELETE] = ACTIONS(19),
    [anon_sym_CONNECT] = ACTIONS(19),
    [anon_sym_OPTIONS] = ACTIONS(19),
    [anon_sym_TRACE] = ACTIONS(19),
    [anon_sym_PATCH] = ACTIONS(19),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(11),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(11),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(11),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(11),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(11),
    [sym_key] = ACTIONS(13),
    [sym_json] = ACTIONS(15),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(17),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(17),
    [anon_sym_HTTP_SLASH2] = ACTIONS(17),
    [anon_sym_HTTP] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_pair] = STATE(4),
    [sym_request_param_keyword] = STATE(4),
    [aux_sym_request_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_GET] = ACTIONS(23),
    [anon_sym_HEAD] = ACTIONS(23),
    [anon_sym_POST] = ACTIONS(23),
    [anon_sym_PUT] = ACTIONS(23),
    [anon_sym_DELETE] = ACTIONS(23),
    [anon_sym_CONNECT] = ACTIONS(23),
    [anon_sym_OPTIONS] = ACTIONS(23),
    [anon_sym_TRACE] = ACTIONS(23),
    [anon_sym_PATCH] = ACTIONS(23),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(25),
    [sym_key] = ACTIONS(28),
    [sym_json] = ACTIONS(21),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(21),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(21),
    [anon_sym_HTTP_SLASH2] = ACTIONS(21),
    [anon_sym_HTTP] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_GET] = ACTIONS(33),
    [anon_sym_HEAD] = ACTIONS(33),
    [anon_sym_POST] = ACTIONS(33),
    [anon_sym_PUT] = ACTIONS(33),
    [anon_sym_DELETE] = ACTIONS(33),
    [anon_sym_CONNECT] = ACTIONS(33),
    [anon_sym_OPTIONS] = ACTIONS(33),
    [anon_sym_TRACE] = ACTIONS(33),
    [anon_sym_PATCH] = ACTIONS(33),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(31),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(31),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(31),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(31),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(31),
    [sym_key] = ACTIONS(33),
    [sym_json] = ACTIONS(31),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(31),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(31),
    [anon_sym_HTTP_SLASH2] = ACTIONS(31),
    [anon_sym_HTTP] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_GET] = ACTIONS(37),
    [anon_sym_HEAD] = ACTIONS(37),
    [anon_sym_POST] = ACTIONS(37),
    [anon_sym_PUT] = ACTIONS(37),
    [anon_sym_DELETE] = ACTIONS(37),
    [anon_sym_CONNECT] = ACTIONS(37),
    [anon_sym_OPTIONS] = ACTIONS(37),
    [anon_sym_TRACE] = ACTIONS(37),
    [anon_sym_PATCH] = ACTIONS(37),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(35),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(35),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(35),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(35),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(35),
    [sym_key] = ACTIONS(37),
    [sym_json] = ACTIONS(35),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(35),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(35),
    [anon_sym_HTTP_SLASH2] = ACTIONS(35),
    [anon_sym_HTTP] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_HTTP,
    STATE(13), 1,
      sym_response,
    STATE(14), 1,
      sym_version_and_status,
    STATE(16), 1,
      sym_http_version,
    ACTIONS(41), 3,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
    ACTIONS(39), 10,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
  [33] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_HTTP,
    ACTIONS(7), 13,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
  [55] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_HTTP,
    ACTIONS(45), 13,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
  [77] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_request,
    STATE(21), 1,
      sym_http_method,
    STATE(11), 2,
      sym_request_response,
      aux_sym_source_file_repeat1,
    ACTIONS(5), 9,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
  [105] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_request,
    STATE(21), 1,
      sym_http_method,
    STATE(11), 2,
      sym_request_response,
      aux_sym_source_file_repeat1,
    ACTIONS(53), 9,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
  [133] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_HTTP,
    ACTIONS(56), 13,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
  [155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 10,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
  [171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 10,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
  [187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 10,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
  [203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_status,
  [210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_COLON,
  [217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      sym_url,
  [224] = 2,
    ACTIONS(72), 1,
      sym_value,
    ACTIONS(74), 1,
      sym_comment,
  [231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      sym_status,
  [238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym_url,
  [245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 33,
  [SMALL_STATE(9)] = 55,
  [SMALL_STATE(10)] = 77,
  [SMALL_STATE(11)] = 105,
  [SMALL_STATE(12)] = 133,
  [SMALL_STATE(13)] = 155,
  [SMALL_STATE(14)] = 171,
  [SMALL_STATE(15)] = 187,
  [SMALL_STATE(16)] = 203,
  [SMALL_STATE(17)] = 210,
  [SMALL_STATE(18)] = 217,
  [SMALL_STATE(19)] = 224,
  [SMALL_STATE(20)] = 231,
  [SMALL_STATE(21)] = 238,
  [SMALL_STATE(22)] = 245,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(6),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(17),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair, 3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_param_keyword, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_param_keyword, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_response, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 1),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_response, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_and_status, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_method, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [80] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hurl(void) {
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
