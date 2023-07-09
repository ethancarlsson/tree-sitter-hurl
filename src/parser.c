#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 35
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 49
#define ALIAS_COUNT 1
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

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
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 20,
  anon_sym_BQUOTE_BQUOTE_BQUOTEjson = 21,
  anon_sym_BQUOTE_BQUOTE_BQUOTExml = 22,
  aux_sym_multiline_string_token1 = 23,
  sym_json = 24,
  anon_sym_HTTP_SLASH1_DOT0 = 25,
  anon_sym_HTTP_SLASH1_DOT1 = 26,
  anon_sym_HTTP_SLASH2 = 27,
  anon_sym_HTTP = 28,
  sym_status = 29,
  sym_comment = 30,
  sym_source_file = 31,
  sym_request_response = 32,
  sym_request = 33,
  sym_http_method = 34,
  sym_pair = 35,
  sym_request_param_keyword = 36,
  sym_value = 37,
  sym_input = 38,
  sym__multiline_string_body = 39,
  sym__json_language_hint = 40,
  sym__xml_language_hint = 41,
  sym_multiline_string = 42,
  sym_inner_language_hint = 43,
  sym_response = 44,
  sym_version_and_status = 45,
  sym_http_version = 46,
  aux_sym_source_file_repeat1 = 47,
  aux_sym_request_repeat1 = 48,
  alias_sym_xml = 49,
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
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = "```",
  [anon_sym_BQUOTE_BQUOTE_BQUOTEjson] = "```json",
  [anon_sym_BQUOTE_BQUOTE_BQUOTExml] = "```xml",
  [aux_sym_multiline_string_token1] = "multiline_string_token1",
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
  [sym__multiline_string_body] = "_multiline_string_body",
  [sym__json_language_hint] = "_json_language_hint",
  [sym__xml_language_hint] = "_xml_language_hint",
  [sym_multiline_string] = "multiline_string",
  [sym_inner_language_hint] = "json",
  [sym_response] = "response",
  [sym_version_and_status] = "version_and_status",
  [sym_http_version] = "http_version",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_request_repeat1] = "request_repeat1",
  [alias_sym_xml] = "xml",
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
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [anon_sym_BQUOTE_BQUOTE_BQUOTEjson] = anon_sym_BQUOTE_BQUOTE_BQUOTEjson,
  [anon_sym_BQUOTE_BQUOTE_BQUOTExml] = anon_sym_BQUOTE_BQUOTE_BQUOTExml,
  [aux_sym_multiline_string_token1] = aux_sym_multiline_string_token1,
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
  [sym__multiline_string_body] = sym__multiline_string_body,
  [sym__json_language_hint] = sym__json_language_hint,
  [sym__xml_language_hint] = sym__xml_language_hint,
  [sym_multiline_string] = sym_multiline_string,
  [sym_inner_language_hint] = sym_json,
  [sym_response] = sym_response,
  [sym_version_and_status] = sym_version_and_status,
  [sym_http_version] = sym_http_version,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_request_repeat1] = aux_sym_request_repeat1,
  [alias_sym_xml] = alias_sym_xml,
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
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE_BQUOTE_BQUOTEjson] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE_BQUOTE_BQUOTExml] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_multiline_string_token1] = {
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
  [sym__multiline_string_body] = {
    .visible = false,
    .named = true,
  },
  [sym__json_language_hint] = {
    .visible = false,
    .named = true,
  },
  [sym__xml_language_hint] = {
    .visible = false,
    .named = true,
  },
  [sym_multiline_string] = {
    .visible = true,
    .named = true,
  },
  [sym_inner_language_hint] = {
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
  [alias_sym_xml] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_xml,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_inner_language_hint, 2,
    sym_json,
    alias_sym_xml,
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
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
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
      if (eof) ADVANCE(128);
      if (lookahead == '#') ADVANCE(215);
      if (sym_key_character_set_1(lookahead)) ADVANCE(193);
      if (lookahead == ':') ADVANCE(148);
      if (lookahead == 'C') ADVANCE(176);
      if (lookahead == 'D') ADVANCE(164);
      if (lookahead == 'G') ADVANCE(165);
      if (lookahead == 'H') ADVANCE(159);
      if (lookahead == 'O') ADVANCE(179);
      if (lookahead == 'P') ADVANCE(158);
      if (lookahead == 'T') ADVANCE(180);
      if (lookahead == '[') ADVANCE(14);
      if (lookahead == '`') ADVANCE(59);
      if (lookahead == '{') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(157);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(194);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('$' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(199);
      if (lookahead == '#') ADVANCE(200);
      if (lookahead == '{') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(207);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(124);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(209);
      if (lookahead == '1') ADVANCE(210);
      END_STATE();
    case 7:
      if (lookahead == '1') ADVANCE(3);
      if (lookahead == '2') ADVANCE(211);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(5);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == 's') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(116);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(46);
      if (lookahead == 'O') ADVANCE(43);
      if (lookahead == 'U') ADVANCE(47);
      END_STATE();
    case 14:
      if (lookahead == 'B') ADVANCE(61);
      if (lookahead == 'C') ADVANCE(91);
      if (lookahead == 'F') ADVANCE(88);
      if (lookahead == 'M') ADVANCE(114);
      if (lookahead == 'Q') ADVANCE(115);
      END_STATE();
    case 15:
      if (lookahead == 'C') ADVANCE(28);
      END_STATE();
    case 16:
      if (lookahead == 'C') ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == 'C') ADVANCE(49);
      END_STATE();
    case 18:
      if (lookahead == 'D') ADVANCE(131);
      END_STATE();
    case 19:
      if (lookahead == 'D') ADVANCE(66);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(30);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(44);
      END_STATE();
    case 22:
      if (lookahead == 'E') ADVANCE(143);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(137);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(10);
      if (lookahead == 'T') ADVANCE(50);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(17);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(51);
      END_STATE();
    case 27:
      if (lookahead == 'F') ADVANCE(92);
      END_STATE();
    case 28:
      if (lookahead == 'H') ADVANCE(145);
      END_STATE();
    case 29:
      if (lookahead == 'I') ADVANCE(35);
      END_STATE();
    case 30:
      if (lookahead == 'L') ADVANCE(26);
      END_STATE();
    case 31:
      if (lookahead == 'N') ADVANCE(33);
      END_STATE();
    case 32:
      if (lookahead == 'N') ADVANCE(41);
      END_STATE();
    case 33:
      if (lookahead == 'N') ADVANCE(25);
      END_STATE();
    case 34:
      if (lookahead == 'O') ADVANCE(31);
      END_STATE();
    case 35:
      if (lookahead == 'O') ADVANCE(32);
      END_STATE();
    case 36:
      if (lookahead == 'P') ADVANCE(212);
      END_STATE();
    case 37:
      if (lookahead == 'P') ADVANCE(62);
      END_STATE();
    case 38:
      if (lookahead == 'P') ADVANCE(45);
      END_STATE();
    case 39:
      if (lookahead == 'P') ADVANCE(68);
      END_STATE();
    case 40:
      if (lookahead == 'R') ADVANCE(11);
      END_STATE();
    case 41:
      if (lookahead == 'S') ADVANCE(141);
      END_STATE();
    case 42:
      if (lookahead == 'S') ADVANCE(112);
      END_STATE();
    case 43:
      if (lookahead == 'S') ADVANCE(48);
      END_STATE();
    case 44:
      if (lookahead == 'T') ADVANCE(129);
      END_STATE();
    case 45:
      if (lookahead == 'T') ADVANCE(29);
      END_STATE();
    case 46:
      if (lookahead == 'T') ADVANCE(15);
      END_STATE();
    case 47:
      if (lookahead == 'T') ADVANCE(135);
      END_STATE();
    case 48:
      if (lookahead == 'T') ADVANCE(133);
      END_STATE();
    case 49:
      if (lookahead == 'T') ADVANCE(139);
      END_STATE();
    case 50:
      if (lookahead == 'T') ADVANCE(36);
      END_STATE();
    case 51:
      if (lookahead == 'T') ADVANCE(23);
      END_STATE();
    case 52:
      if (lookahead == ']') ADVANCE(152);
      END_STATE();
    case 53:
      if (lookahead == ']') ADVANCE(151);
      END_STATE();
    case 54:
      if (lookahead == ']') ADVANCE(150);
      END_STATE();
    case 55:
      if (lookahead == ']') ADVANCE(153);
      END_STATE();
    case 56:
      if (lookahead == ']') ADVANCE(149);
      END_STATE();
    case 57:
      if (lookahead == '`') ADVANCE(202);
      END_STATE();
    case 58:
      if (lookahead == '`') ADVANCE(201);
      END_STATE();
    case 59:
      if (lookahead == '`') ADVANCE(57);
      END_STATE();
    case 60:
      if (lookahead == '`') ADVANCE(58);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(12);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 72:
      if (lookahead == 'g') ADVANCE(39);
      END_STATE();
    case 73:
      if (lookahead == 'h') ADVANCE(53);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 78:
      if (lookahead == 'k') ADVANCE(76);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(204);
      END_STATE();
    case 81:
      if (lookahead == 'm') ADVANCE(37);
      END_STATE();
    case 82:
      if (lookahead == 'm') ADVANCE(19);
      END_STATE();
    case 83:
      if (lookahead == 'm') ADVANCE(80);
      END_STATE();
    case 84:
      if (lookahead == 'm') ADVANCE(104);
      END_STATE();
    case 85:
      if (lookahead == 'm') ADVANCE(106);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 93:
      if (lookahead == 'p') ADVANCE(9);
      END_STATE();
    case 94:
      if (lookahead == 'p') ADVANCE(64);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 102:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 103:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 104:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 114:
      if (lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 115:
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 116:
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 117:
      if (lookahead == 'y') ADVANCE(42);
      END_STATE();
    case 118:
      if (lookahead == '{') ADVANCE(123);
      END_STATE();
    case 119:
      if (lookahead == '}') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(120);
      END_STATE();
    case 120:
      if (lookahead == '}') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(120);
      END_STATE();
    case 121:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      END_STATE();
    case 122:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 123:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(120);
      END_STATE();
    case 124:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(147);
      END_STATE();
    case 125:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(125);
      if (lookahead == '}') ADVANCE(208);
      END_STATE();
    case 126:
      if (eof) ADVANCE(128);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == 'C') ADVANCE(34);
      if (lookahead == 'D') ADVANCE(20);
      if (lookahead == 'G') ADVANCE(21);
      if (lookahead == 'H') ADVANCE(24);
      if (lookahead == 'O') ADVANCE(38);
      if (lookahead == 'P') ADVANCE(13);
      if (lookahead == 'T') ADVANCE(40);
      if (lookahead == '`') ADVANCE(60);
      if (lookahead == 'h') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(126)
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(122);
      END_STATE();
    case 127:
      if (eof) ADVANCE(128);
      if (lookahead == '#') ADVANCE(215);
      if (sym_key_character_set_2(lookahead)) ADVANCE(193);
      if (lookahead == 'C') ADVANCE(176);
      if (lookahead == 'D') ADVANCE(164);
      if (lookahead == 'G') ADVANCE(165);
      if (lookahead == 'H') ADVANCE(159);
      if (lookahead == 'O') ADVANCE(179);
      if (lookahead == 'P') ADVANCE(158);
      if (lookahead == 'T') ADVANCE(180);
      if (lookahead == '[') ADVANCE(14);
      if (lookahead == '`') ADVANCE(59);
      if (lookahead == '{') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(127)
      END_STATE();
    case 128:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_GET);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_POST);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_PATCH);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_LBRACKQueryStringParams_RBRACK);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_LBRACKFormParams_RBRACK);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_LBRACKBasicAuth_RBRACK);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_LBRACKCookies_RBRACK);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_LBRACKMultipartFormData_RBRACK);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == ' ') ADVANCE(199);
      if (('!' <= lookahead && lookahead <= '|') ||
          lookahead == '~') ADVANCE(196);
      if (lookahead == '}') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '}') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(120);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= 'T') ||
          ('V' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (lookahead == 'A') ADVANCE(185);
      if (lookahead == 'O') ADVANCE(182);
      if (lookahead == 'U') ADVANCE(186);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (lookahead == 'E') ADVANCE(191);
      if (lookahead == 'T') ADVANCE(189);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'A' ||
          lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (lookahead == 'C') ADVANCE(170);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'A' ||
          lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (lookahead == 'C') ADVANCE(166);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'A' ||
          lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (lookahead == 'C') ADVANCE(188);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('E' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (lookahead == 'D') ADVANCE(132);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (lookahead == 'E') ADVANCE(172);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (lookahead == 'E') ADVANCE(183);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (lookahead == 'E') ADVANCE(144);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (lookahead == 'E') ADVANCE(138);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (lookahead == 'E') ADVANCE(162);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (lookahead == 'E') ADVANCE(190);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'G') ||
          ('I' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (lookahead == 'H') ADVANCE(146);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'H') ||
          ('J' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (lookahead == 'I') ADVANCE(177);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'K') ||
          ('M' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (lookahead == 'L') ADVANCE(169);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (lookahead == 'N') ADVANCE(175);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (lookahead == 'N') ADVANCE(181);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (lookahead == 'N') ADVANCE(168);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (lookahead == 'O') ADVANCE(173);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (lookahead == 'O') ADVANCE(174);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (lookahead == 'P') ADVANCE(213);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (lookahead == 'P') ADVANCE(184);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Q') ||
          ('S' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (lookahead == 'R') ADVANCE(192);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (lookahead == 'S') ADVANCE(142);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (lookahead == 'S') ADVANCE(187);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (lookahead == 'T') ADVANCE(130);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (lookahead == 'T') ADVANCE(171);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (lookahead == 'T') ADVANCE(160);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (lookahead == 'T') ADVANCE(136);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (lookahead == 'T') ADVANCE(134);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (lookahead == 'T') ADVANCE(140);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (lookahead == 'T') ADVANCE(178);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (lookahead == 'T') ADVANCE(167);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (lookahead == 'A') ADVANCE(163);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (lookahead == 'A') ADVANCE(161);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == ' ') ADVANCE(194);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('$' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(199);
      if (lookahead == '#') ADVANCE(200);
      if (lookahead == '{') ADVANCE(198);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == ' ') ADVANCE(199);
      if (('!' <= lookahead && lookahead <= '|') ||
          lookahead == '~') ADVANCE(196);
      if (lookahead == '}') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == ' ') ADVANCE(199);
      if (('!' <= lookahead && lookahead <= '|') ||
          lookahead == '~') ADVANCE(196);
      if (lookahead == '}') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == ' ') ADVANCE(199);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if ((' ' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(199);
      if (lookahead == '{') ADVANCE(197);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      if (lookahead == 'j') ADVANCE(105);
      if (lookahead == 'x') ADVANCE(83);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTEjson);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTExml);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead == '\n') ADVANCE(207);
      if (lookahead == '`') ADVANCE(215);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(207);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_json);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(125);
      if (lookahead == '}') ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT0);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT1);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH2);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_HTTP);
      if (lookahead == '/') ADVANCE(7);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_HTTP);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (lookahead == '/') ADVANCE(7);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_status);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 126},
  [2] = {.lex_state = 127},
  [3] = {.lex_state = 127},
  [4] = {.lex_state = 127},
  [5] = {.lex_state = 127},
  [6] = {.lex_state = 127},
  [7] = {.lex_state = 127},
  [8] = {.lex_state = 126},
  [9] = {.lex_state = 126},
  [10] = {.lex_state = 126},
  [11] = {.lex_state = 126},
  [12] = {.lex_state = 126},
  [13] = {.lex_state = 126},
  [14] = {.lex_state = 126},
  [15] = {.lex_state = 126},
  [16] = {.lex_state = 126},
  [17] = {.lex_state = 126},
  [18] = {.lex_state = 126},
  [19] = {.lex_state = 126},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 126},
  [25] = {.lex_state = 126},
  [26] = {.lex_state = 126},
  [27] = {.lex_state = 126},
  [28] = {.lex_state = 126},
  [29] = {.lex_state = 126},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 126},
  [32] = {.lex_state = 126},
  [33] = {.lex_state = 126},
  [34] = {.lex_state = 0},
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
    [sym_variable] = ACTIONS(1),
    [sym_key] = ACTIONS(1),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE_BQUOTE_BQUOTEjson] = ACTIONS(1),
    [anon_sym_BQUOTE_BQUOTE_BQUOTExml] = ACTIONS(1),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(1),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(1),
    [anon_sym_HTTP_SLASH2] = ACTIONS(1),
    [anon_sym_HTTP] = ACTIONS(1),
    [sym_status] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(34),
    [sym_request_response] = STATE(9),
    [sym_request] = STATE(8),
    [sym_http_method] = STATE(33),
    [aux_sym_source_file_repeat1] = STATE(9),
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
    [sym_pair] = STATE(3),
    [sym_request_param_keyword] = STATE(3),
    [sym_input] = STATE(15),
    [sym__multiline_string_body] = STATE(14),
    [sym__json_language_hint] = STATE(14),
    [sym__xml_language_hint] = STATE(14),
    [aux_sym_request_repeat1] = STATE(3),
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
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(15),
    [anon_sym_BQUOTE_BQUOTE_BQUOTEjson] = ACTIONS(17),
    [anon_sym_BQUOTE_BQUOTE_BQUOTExml] = ACTIONS(19),
    [sym_json] = ACTIONS(21),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(7),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(7),
    [anon_sym_HTTP_SLASH2] = ACTIONS(7),
    [anon_sym_HTTP] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_pair] = STATE(4),
    [sym_request_param_keyword] = STATE(4),
    [sym_input] = STATE(13),
    [sym__multiline_string_body] = STATE(14),
    [sym__json_language_hint] = STATE(14),
    [sym__xml_language_hint] = STATE(14),
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
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(11),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(11),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(11),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(11),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(11),
    [sym_key] = ACTIONS(13),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(15),
    [anon_sym_BQUOTE_BQUOTE_BQUOTEjson] = ACTIONS(17),
    [anon_sym_BQUOTE_BQUOTE_BQUOTExml] = ACTIONS(19),
    [sym_json] = ACTIONS(21),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(23),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(23),
    [anon_sym_HTTP_SLASH2] = ACTIONS(23),
    [anon_sym_HTTP] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_pair] = STATE(4),
    [sym_request_param_keyword] = STATE(4),
    [aux_sym_request_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_GET] = ACTIONS(29),
    [anon_sym_HEAD] = ACTIONS(29),
    [anon_sym_POST] = ACTIONS(29),
    [anon_sym_PUT] = ACTIONS(29),
    [anon_sym_DELETE] = ACTIONS(29),
    [anon_sym_CONNECT] = ACTIONS(29),
    [anon_sym_OPTIONS] = ACTIONS(29),
    [anon_sym_TRACE] = ACTIONS(29),
    [anon_sym_PATCH] = ACTIONS(29),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(31),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(31),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(31),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(31),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(31),
    [sym_key] = ACTIONS(34),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE_BQUOTE_BQUOTEjson] = ACTIONS(27),
    [anon_sym_BQUOTE_BQUOTE_BQUOTExml] = ACTIONS(27),
    [sym_json] = ACTIONS(27),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(27),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(27),
    [anon_sym_HTTP_SLASH2] = ACTIONS(27),
    [anon_sym_HTTP] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
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
    [sym_key] = ACTIONS(39),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(39),
    [anon_sym_BQUOTE_BQUOTE_BQUOTEjson] = ACTIONS(37),
    [anon_sym_BQUOTE_BQUOTE_BQUOTExml] = ACTIONS(37),
    [sym_json] = ACTIONS(37),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(37),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(37),
    [anon_sym_HTTP_SLASH2] = ACTIONS(37),
    [anon_sym_HTTP] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
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
    [sym_key] = ACTIONS(43),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(43),
    [anon_sym_BQUOTE_BQUOTE_BQUOTEjson] = ACTIONS(41),
    [anon_sym_BQUOTE_BQUOTE_BQUOTExml] = ACTIONS(41),
    [sym_json] = ACTIONS(41),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(41),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(41),
    [anon_sym_HTTP_SLASH2] = ACTIONS(41),
    [anon_sym_HTTP] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_GET] = ACTIONS(47),
    [anon_sym_HEAD] = ACTIONS(47),
    [anon_sym_POST] = ACTIONS(47),
    [anon_sym_PUT] = ACTIONS(47),
    [anon_sym_DELETE] = ACTIONS(47),
    [anon_sym_CONNECT] = ACTIONS(47),
    [anon_sym_OPTIONS] = ACTIONS(47),
    [anon_sym_TRACE] = ACTIONS(47),
    [anon_sym_PATCH] = ACTIONS(47),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(45),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(45),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(45),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(45),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(45),
    [sym_key] = ACTIONS(47),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE_BQUOTE_BQUOTEjson] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTExml] = ACTIONS(45),
    [sym_json] = ACTIONS(45),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(45),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(45),
    [anon_sym_HTTP_SLASH2] = ACTIONS(45),
    [anon_sym_HTTP] = ACTIONS(47),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_HTTP,
    STATE(17), 1,
      sym_response,
    STATE(18), 1,
      sym_version_and_status,
    STATE(31), 1,
      sym_http_version,
    ACTIONS(51), 3,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
    ACTIONS(49), 10,
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
  [33] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_request,
    STATE(33), 1,
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
  [61] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_HTTP,
    ACTIONS(57), 13,
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
  [83] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_request,
    STATE(33), 1,
      sym_http_method,
    STATE(11), 2,
      sym_request_response,
      aux_sym_source_file_repeat1,
    ACTIONS(63), 9,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
  [111] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_HTTP,
    ACTIONS(66), 13,
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
  [133] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_HTTP,
    ACTIONS(70), 13,
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
  [155] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_HTTP,
    ACTIONS(74), 13,
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
  [177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_HTTP,
    ACTIONS(23), 13,
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
  [199] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_HTTP,
    ACTIONS(78), 13,
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
  [221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 10,
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
  [237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 10,
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
  [253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 10,
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
  [269] = 3,
    ACTIONS(90), 1,
      sym_comment,
    STATE(6), 1,
      sym_value,
    ACTIONS(88), 2,
      sym_variable,
      aux_sym_value_token1,
  [280] = 3,
    ACTIONS(90), 1,
      sym_comment,
    ACTIONS(92), 1,
      aux_sym_multiline_string_token1,
    STATE(25), 1,
      sym_multiline_string,
  [290] = 3,
    ACTIONS(90), 1,
      sym_comment,
    ACTIONS(94), 1,
      aux_sym_multiline_string_token1,
    STATE(28), 1,
      sym_inner_language_hint,
  [300] = 3,
    ACTIONS(90), 1,
      sym_comment,
    ACTIONS(94), 1,
      aux_sym_multiline_string_token1,
    STATE(27), 1,
      sym_inner_language_hint,
  [310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      sym_url,
  [352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_COLON,
  [359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      sym_status,
  [366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      sym_status,
  [373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_url,
  [380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 33,
  [SMALL_STATE(10)] = 61,
  [SMALL_STATE(11)] = 83,
  [SMALL_STATE(12)] = 111,
  [SMALL_STATE(13)] = 133,
  [SMALL_STATE(14)] = 155,
  [SMALL_STATE(15)] = 177,
  [SMALL_STATE(16)] = 199,
  [SMALL_STATE(17)] = 221,
  [SMALL_STATE(18)] = 237,
  [SMALL_STATE(19)] = 253,
  [SMALL_STATE(20)] = 269,
  [SMALL_STATE(21)] = 280,
  [SMALL_STATE(22)] = 290,
  [SMALL_STATE(23)] = 300,
  [SMALL_STATE(24)] = 310,
  [SMALL_STATE(25)] = 317,
  [SMALL_STATE(26)] = 324,
  [SMALL_STATE(27)] = 331,
  [SMALL_STATE(28)] = 338,
  [SMALL_STATE(29)] = 345,
  [SMALL_STATE(30)] = 352,
  [SMALL_STATE(31)] = 359,
  [SMALL_STATE(32)] = 366,
  [SMALL_STATE(33)] = 373,
  [SMALL_STATE(34)] = 380,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(7),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(30),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_param_keyword, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_param_keyword, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_response, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xml_language_hint, 3, .production_id = 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xml_language_hint, 3, .production_id = 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_string_body, 3),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_string_body, 3),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 1),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_language_hint, 3),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__json_language_hint, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_response, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_and_status, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inner_language_hint, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_method, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [116] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
