#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 24
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
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
  sym_variable = 17,
  sym_key = 18,
  aux_sym_value_token1 = 19,
  sym_json = 20,
  anon_sym_HTTP_SLASH1_DOT0 = 21,
  anon_sym_HTTP_SLASH1_DOT1 = 22,
  anon_sym_HTTP_SLASH2 = 23,
  anon_sym_HTTP = 24,
  sym_status = 25,
  sym_comment = 26,
  sym_source_file = 27,
  sym_request_response = 28,
  sym_request = 29,
  sym_http_method = 30,
  sym_pair = 31,
  sym_request_param_keyword = 32,
  sym_value = 33,
  sym_input = 34,
  sym_response = 35,
  sym_version_and_status = 36,
  sym_http_version = 37,
  aux_sym_source_file_repeat1 = 38,
  aux_sym_request_repeat1 = 39,
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
  [sym_variable] = "variable",
  [sym_key] = "key",
  [aux_sym_value_token1] = "value_token1",
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
  [sym_value] = "value",
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
  [sym_variable] = sym_variable,
  [sym_key] = sym_key,
  [aux_sym_value_token1] = aux_sym_value_token1,
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
  [sym_value] = sym_value,
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
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_value_token1] = {
    .visible = false,
    .named = false,
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
  [sym_value] = {
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
  [23] = 23,
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
      if (eof) ADVANCE(121);
      if (lookahead == '#') ADVANCE(204);
      if (sym_key_character_set_1(lookahead)) ADVANCE(187);
      if (lookahead == ':') ADVANCE(141);
      if (lookahead == 'C') ADVANCE(170);
      if (lookahead == 'D') ADVANCE(158);
      if (lookahead == 'G') ADVANCE(159);
      if (lookahead == 'H') ADVANCE(153);
      if (lookahead == 'O') ADVANCE(173);
      if (lookahead == 'P') ADVANCE(152);
      if (lookahead == 'T') ADVANCE(174);
      if (lookahead == '[') ADVANCE(13);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(151);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(188);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('$' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(193);
      if (lookahead == '#') ADVANCE(194);
      if (lookahead == '{') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(116);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(198);
      if (lookahead == '1') ADVANCE(199);
      END_STATE();
    case 6:
      if (lookahead == '1') ADVANCE(2);
      if (lookahead == '2') ADVANCE(200);
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
      if (lookahead == 'D') ADVANCE(124);
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
      if (lookahead == 'E') ADVANCE(136);
      END_STATE();
    case 22:
      if (lookahead == 'E') ADVANCE(130);
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
      if (lookahead == 'H') ADVANCE(138);
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
      if (lookahead == 'P') ADVANCE(201);
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
      if (lookahead == 'S') ADVANCE(134);
      END_STATE();
    case 41:
      if (lookahead == 'S') ADVANCE(102);
      END_STATE();
    case 42:
      if (lookahead == 'S') ADVANCE(47);
      END_STATE();
    case 43:
      if (lookahead == 'T') ADVANCE(122);
      END_STATE();
    case 44:
      if (lookahead == 'T') ADVANCE(28);
      END_STATE();
    case 45:
      if (lookahead == 'T') ADVANCE(14);
      END_STATE();
    case 46:
      if (lookahead == 'T') ADVANCE(128);
      END_STATE();
    case 47:
      if (lookahead == 'T') ADVANCE(126);
      END_STATE();
    case 48:
      if (lookahead == 'T') ADVANCE(132);
      END_STATE();
    case 49:
      if (lookahead == 'T') ADVANCE(35);
      END_STATE();
    case 50:
      if (lookahead == 'T') ADVANCE(22);
      END_STATE();
    case 51:
      if (lookahead == ']') ADVANCE(145);
      END_STATE();
    case 52:
      if (lookahead == ']') ADVANCE(144);
      END_STATE();
    case 53:
      if (lookahead == ']') ADVANCE(143);
      END_STATE();
    case 54:
      if (lookahead == ']') ADVANCE(146);
      END_STATE();
    case 55:
      if (lookahead == ']') ADVANCE(142);
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
      if (lookahead == '{') ADVANCE(115);
      END_STATE();
    case 109:
      if (lookahead == '}') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(110);
      END_STATE();
    case 110:
      if (lookahead == '}') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(110);
      END_STATE();
    case 111:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(118);
      if (lookahead == '}') ADVANCE(196);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 112:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(118);
      if (lookahead == '}') ADVANCE(195);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 113:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      END_STATE();
    case 114:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 115:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(110);
      END_STATE();
    case 116:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(140);
      END_STATE();
    case 117:
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(118);
      if (lookahead == '{') ADVANCE(111);
      if (lookahead == '}') ADVANCE(197);
      END_STATE();
    case 118:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(118);
      if (lookahead == '}') ADVANCE(197);
      END_STATE();
    case 119:
      if (eof) ADVANCE(121);
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == ':') ADVANCE(141);
      if (lookahead == 'C') ADVANCE(33);
      if (lookahead == 'D') ADVANCE(19);
      if (lookahead == 'G') ADVANCE(20);
      if (lookahead == 'H') ADVANCE(23);
      if (lookahead == 'O') ADVANCE(37);
      if (lookahead == 'P') ADVANCE(12);
      if (lookahead == 'T') ADVANCE(39);
      if (lookahead == 'h') ADVANCE(103);
      if (lookahead == '{') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(119)
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(114);
      END_STATE();
    case 120:
      if (eof) ADVANCE(121);
      if (lookahead == '#') ADVANCE(204);
      if (sym_key_character_set_2(lookahead)) ADVANCE(187);
      if (lookahead == 'C') ADVANCE(170);
      if (lookahead == 'D') ADVANCE(158);
      if (lookahead == 'G') ADVANCE(159);
      if (lookahead == 'H') ADVANCE(153);
      if (lookahead == 'O') ADVANCE(173);
      if (lookahead == 'P') ADVANCE(152);
      if (lookahead == 'T') ADVANCE(174);
      if (lookahead == '[') ADVANCE(13);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(120)
      END_STATE();
    case 121:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_GET);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_POST);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_PATCH);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_LBRACKQueryStringParams_RBRACK);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_LBRACKFormParams_RBRACK);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_LBRACKBasicAuth_RBRACK);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_LBRACKCookies_RBRACK);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_LBRACKMultipartFormData_RBRACK);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == ' ') ADVANCE(193);
      if (('!' <= lookahead && lookahead <= '|') ||
          lookahead == '~') ADVANCE(190);
      if (lookahead == '}') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(110);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '}') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(110);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(118);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= 'T') ||
          ('V' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead == 'A') ADVANCE(179);
      if (lookahead == 'O') ADVANCE(176);
      if (lookahead == 'U') ADVANCE(180);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead == 'E') ADVANCE(185);
      if (lookahead == 'T') ADVANCE(183);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'A' ||
          lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead == 'C') ADVANCE(164);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'A' ||
          lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead == 'C') ADVANCE(160);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'A' ||
          lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead == 'C') ADVANCE(182);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('E' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead == 'D') ADVANCE(125);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead == 'E') ADVANCE(166);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead == 'E') ADVANCE(177);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead == 'E') ADVANCE(137);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead == 'E') ADVANCE(131);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead == 'E') ADVANCE(156);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead == 'E') ADVANCE(184);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'G') ||
          ('I' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead == 'H') ADVANCE(139);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'H') ||
          ('J' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead == 'I') ADVANCE(171);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'K') ||
          ('M' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead == 'L') ADVANCE(163);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead == 'N') ADVANCE(169);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead == 'N') ADVANCE(175);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead == 'N') ADVANCE(162);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead == 'O') ADVANCE(167);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead == 'O') ADVANCE(168);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead == 'P') ADVANCE(202);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead == 'P') ADVANCE(178);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Q') ||
          ('S' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead == 'R') ADVANCE(186);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead == 'S') ADVANCE(135);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead == 'S') ADVANCE(181);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead == 'T') ADVANCE(123);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead == 'T') ADVANCE(165);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead == 'T') ADVANCE(154);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead == 'T') ADVANCE(129);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead == 'T') ADVANCE(127);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead == 'T') ADVANCE(133);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead == 'T') ADVANCE(172);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead == 'T') ADVANCE(161);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead == 'A') ADVANCE(157);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead == 'A') ADVANCE(155);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == ' ') ADVANCE(188);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('$' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(193);
      if (lookahead == '#') ADVANCE(194);
      if (lookahead == '{') ADVANCE(192);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == ' ') ADVANCE(193);
      if (('!' <= lookahead && lookahead <= '|') ||
          lookahead == '~') ADVANCE(190);
      if (lookahead == '}') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(110);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == ' ') ADVANCE(193);
      if (('!' <= lookahead && lookahead <= '|') ||
          lookahead == '~') ADVANCE(190);
      if (lookahead == '}') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(110);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == ' ') ADVANCE(193);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(110);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if ((' ' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(193);
      if (lookahead == '{') ADVANCE(191);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_json);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(118);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_json);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(118);
      if (lookahead == '}') ADVANCE(195);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_json);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(118);
      if (lookahead == '}') ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT0);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT1);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH2);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_HTTP);
      if (lookahead == '/') ADVANCE(6);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_HTTP);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead == '/') ADVANCE(6);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_status);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 119},
  [2] = {.lex_state = 120},
  [3] = {.lex_state = 120},
  [4] = {.lex_state = 120},
  [5] = {.lex_state = 120},
  [6] = {.lex_state = 120},
  [7] = {.lex_state = 120},
  [8] = {.lex_state = 119},
  [9] = {.lex_state = 119},
  [10] = {.lex_state = 119},
  [11] = {.lex_state = 119},
  [12] = {.lex_state = 119},
  [13] = {.lex_state = 119},
  [14] = {.lex_state = 119},
  [15] = {.lex_state = 119},
  [16] = {.lex_state = 119},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 119},
  [19] = {.lex_state = 119},
  [20] = {.lex_state = 119},
  [21] = {.lex_state = 119},
  [22] = {.lex_state = 119},
  [23] = {.lex_state = 119},
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
    [sym_variable] = ACTIONS(3),
    [sym_key] = ACTIONS(1),
    [sym_json] = ACTIONS(1),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(1),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(1),
    [anon_sym_HTTP_SLASH2] = ACTIONS(1),
    [anon_sym_HTTP] = ACTIONS(1),
    [sym_status] = ACTIONS(1),
    [sym_comment] = ACTIONS(5),
  },
  [1] = {
    [sym_source_file] = STATE(23),
    [sym_request_response] = STATE(9),
    [sym_request] = STATE(8),
    [sym_http_method] = STATE(22),
    [aux_sym_source_file_repeat1] = STATE(9),
    [anon_sym_GET] = ACTIONS(7),
    [anon_sym_HEAD] = ACTIONS(7),
    [anon_sym_POST] = ACTIONS(7),
    [anon_sym_PUT] = ACTIONS(7),
    [anon_sym_DELETE] = ACTIONS(7),
    [anon_sym_CONNECT] = ACTIONS(7),
    [anon_sym_OPTIONS] = ACTIONS(7),
    [anon_sym_TRACE] = ACTIONS(7),
    [anon_sym_PATCH] = ACTIONS(7),
    [sym_variable] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
  },
  [2] = {
    [sym_pair] = STATE(3),
    [sym_request_param_keyword] = STATE(3),
    [sym_input] = STATE(12),
    [aux_sym_request_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_GET] = ACTIONS(11),
    [anon_sym_HEAD] = ACTIONS(11),
    [anon_sym_POST] = ACTIONS(11),
    [anon_sym_PUT] = ACTIONS(11),
    [anon_sym_DELETE] = ACTIONS(11),
    [anon_sym_CONNECT] = ACTIONS(11),
    [anon_sym_OPTIONS] = ACTIONS(11),
    [anon_sym_TRACE] = ACTIONS(11),
    [anon_sym_PATCH] = ACTIONS(11),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(13),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(13),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(13),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(13),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(13),
    [sym_variable] = ACTIONS(3),
    [sym_key] = ACTIONS(15),
    [sym_json] = ACTIONS(17),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(9),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(9),
    [anon_sym_HTTP_SLASH2] = ACTIONS(9),
    [anon_sym_HTTP] = ACTIONS(11),
    [sym_comment] = ACTIONS(5),
  },
  [3] = {
    [sym_pair] = STATE(4),
    [sym_request_param_keyword] = STATE(4),
    [sym_input] = STATE(13),
    [aux_sym_request_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_GET] = ACTIONS(21),
    [anon_sym_HEAD] = ACTIONS(21),
    [anon_sym_POST] = ACTIONS(21),
    [anon_sym_PUT] = ACTIONS(21),
    [anon_sym_DELETE] = ACTIONS(21),
    [anon_sym_CONNECT] = ACTIONS(21),
    [anon_sym_OPTIONS] = ACTIONS(21),
    [anon_sym_TRACE] = ACTIONS(21),
    [anon_sym_PATCH] = ACTIONS(21),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(13),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(13),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(13),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(13),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(13),
    [sym_variable] = ACTIONS(3),
    [sym_key] = ACTIONS(15),
    [sym_json] = ACTIONS(17),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(19),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(19),
    [anon_sym_HTTP_SLASH2] = ACTIONS(19),
    [anon_sym_HTTP] = ACTIONS(21),
    [sym_comment] = ACTIONS(5),
  },
  [4] = {
    [sym_pair] = STATE(4),
    [sym_request_param_keyword] = STATE(4),
    [aux_sym_request_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_GET] = ACTIONS(25),
    [anon_sym_HEAD] = ACTIONS(25),
    [anon_sym_POST] = ACTIONS(25),
    [anon_sym_PUT] = ACTIONS(25),
    [anon_sym_DELETE] = ACTIONS(25),
    [anon_sym_CONNECT] = ACTIONS(25),
    [anon_sym_OPTIONS] = ACTIONS(25),
    [anon_sym_TRACE] = ACTIONS(25),
    [anon_sym_PATCH] = ACTIONS(25),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(27),
    [sym_variable] = ACTIONS(3),
    [sym_key] = ACTIONS(30),
    [sym_json] = ACTIONS(25),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(23),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(23),
    [anon_sym_HTTP_SLASH2] = ACTIONS(23),
    [anon_sym_HTTP] = ACTIONS(25),
    [sym_comment] = ACTIONS(5),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_GET] = ACTIONS(35),
    [anon_sym_HEAD] = ACTIONS(35),
    [anon_sym_POST] = ACTIONS(35),
    [anon_sym_PUT] = ACTIONS(35),
    [anon_sym_DELETE] = ACTIONS(35),
    [anon_sym_CONNECT] = ACTIONS(35),
    [anon_sym_OPTIONS] = ACTIONS(35),
    [anon_sym_TRACE] = ACTIONS(35),
    [anon_sym_PATCH] = ACTIONS(35),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(33),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(33),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(33),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(33),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(33),
    [sym_variable] = ACTIONS(3),
    [sym_key] = ACTIONS(35),
    [sym_json] = ACTIONS(35),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(33),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(33),
    [anon_sym_HTTP_SLASH2] = ACTIONS(33),
    [anon_sym_HTTP] = ACTIONS(35),
    [sym_comment] = ACTIONS(5),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_GET] = ACTIONS(39),
    [anon_sym_HEAD] = ACTIONS(39),
    [anon_sym_POST] = ACTIONS(39),
    [anon_sym_PUT] = ACTIONS(39),
    [anon_sym_DELETE] = ACTIONS(39),
    [anon_sym_CONNECT] = ACTIONS(39),
    [anon_sym_OPTIONS] = ACTIONS(39),
    [anon_sym_TRACE] = ACTIONS(39),
    [anon_sym_PATCH] = ACTIONS(39),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(37),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(37),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(37),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(37),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(37),
    [sym_variable] = ACTIONS(3),
    [sym_key] = ACTIONS(39),
    [sym_json] = ACTIONS(39),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(37),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(37),
    [anon_sym_HTTP_SLASH2] = ACTIONS(37),
    [anon_sym_HTTP] = ACTIONS(39),
    [sym_comment] = ACTIONS(5),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_GET] = ACTIONS(43),
    [anon_sym_HEAD] = ACTIONS(43),
    [anon_sym_POST] = ACTIONS(43),
    [anon_sym_PUT] = ACTIONS(43),
    [anon_sym_DELETE] = ACTIONS(43),
    [anon_sym_CONNECT] = ACTIONS(43),
    [anon_sym_OPTIONS] = ACTIONS(43),
    [anon_sym_TRACE] = ACTIONS(43),
    [anon_sym_PATCH] = ACTIONS(43),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(41),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(41),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(41),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(41),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(41),
    [sym_variable] = ACTIONS(3),
    [sym_key] = ACTIONS(43),
    [sym_json] = ACTIONS(43),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(41),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(41),
    [anon_sym_HTTP_SLASH2] = ACTIONS(41),
    [anon_sym_HTTP] = ACTIONS(43),
    [sym_comment] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(49), 1,
      anon_sym_HTTP,
    STATE(14), 1,
      sym_version_and_status,
    STATE(16), 1,
      sym_response,
    STATE(18), 1,
      sym_http_version,
    ACTIONS(5), 2,
      sym_variable,
      sym_comment,
    ACTIONS(47), 3,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
    ACTIONS(45), 10,
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
  [34] = 6,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_request,
    STATE(22), 1,
      sym_http_method,
    ACTIONS(5), 2,
      sym_variable,
      sym_comment,
    STATE(10), 2,
      sym_request_response,
      aux_sym_source_file_repeat1,
    ACTIONS(7), 9,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
  [63] = 6,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_request,
    STATE(22), 1,
      sym_http_method,
    ACTIONS(5), 2,
      sym_variable,
      sym_comment,
    STATE(10), 2,
      sym_request_response,
      aux_sym_source_file_repeat1,
    ACTIONS(55), 9,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
  [92] = 3,
    ACTIONS(60), 1,
      anon_sym_HTTP,
    ACTIONS(5), 2,
      sym_variable,
      sym_comment,
    ACTIONS(58), 13,
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
  [115] = 3,
    ACTIONS(21), 1,
      anon_sym_HTTP,
    ACTIONS(5), 2,
      sym_variable,
      sym_comment,
    ACTIONS(19), 13,
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
  [138] = 3,
    ACTIONS(64), 1,
      anon_sym_HTTP,
    ACTIONS(5), 2,
      sym_variable,
      sym_comment,
    ACTIONS(62), 13,
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
  [161] = 2,
    ACTIONS(5), 2,
      sym_variable,
      sym_comment,
    ACTIONS(66), 10,
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
  [178] = 2,
    ACTIONS(5), 2,
      sym_variable,
      sym_comment,
    ACTIONS(68), 10,
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
  [195] = 2,
    ACTIONS(5), 2,
      sym_variable,
      sym_comment,
    ACTIONS(70), 10,
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
  [212] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(5), 1,
      sym_value,
    ACTIONS(72), 2,
      sym_variable,
      aux_sym_value_token1,
  [223] = 2,
    ACTIONS(74), 1,
      sym_status,
    ACTIONS(5), 2,
      sym_variable,
      sym_comment,
  [231] = 2,
    ACTIONS(76), 1,
      sym_url,
    ACTIONS(5), 2,
      sym_variable,
      sym_comment,
  [239] = 2,
    ACTIONS(78), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_variable,
      sym_comment,
  [247] = 2,
    ACTIONS(80), 1,
      sym_status,
    ACTIONS(5), 2,
      sym_variable,
      sym_comment,
  [255] = 2,
    ACTIONS(82), 1,
      sym_url,
    ACTIONS(5), 2,
      sym_variable,
      sym_comment,
  [263] = 2,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_variable,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 34,
  [SMALL_STATE(10)] = 63,
  [SMALL_STATE(11)] = 92,
  [SMALL_STATE(12)] = 115,
  [SMALL_STATE(13)] = 138,
  [SMALL_STATE(14)] = 161,
  [SMALL_STATE(15)] = 178,
  [SMALL_STATE(16)] = 195,
  [SMALL_STATE(17)] = 212,
  [SMALL_STATE(18)] = 223,
  [SMALL_STATE(19)] = 231,
  [SMALL_STATE(20)] = 239,
  [SMALL_STATE(21)] = 247,
  [SMALL_STATE(22)] = 255,
  [SMALL_STATE(23)] = 263,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(7),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(20),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair, 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_param_keyword, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_param_keyword, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_response, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_and_status, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_response, 2),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_method, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [84] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
