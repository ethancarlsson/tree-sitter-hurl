#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 41
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 55
#define ALIAS_COUNT 2
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

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
  anon_sym_LBRACKOptions_RBRACK = 17,
  sym_variable = 18,
  sym_key = 19,
  aux_sym_value_token1 = 20,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 21,
  anon_sym_BQUOTE_BQUOTE_BQUOTEjson = 22,
  anon_sym_BQUOTE_BQUOTE_BQUOTExml = 23,
  anon_sym_BQUOTE_BQUOTE_BQUOTEgraphql = 24,
  aux_sym_multiline_string_token1 = 25,
  anon_sym_BQUOTE = 26,
  aux_sym_oneline_string_token1 = 27,
  sym_json = 28,
  anon_sym_HTTP_SLASH1_DOT0 = 29,
  anon_sym_HTTP_SLASH1_DOT1 = 30,
  anon_sym_HTTP_SLASH2 = 31,
  anon_sym_HTTP = 32,
  sym_status = 33,
  sym_comment = 34,
  sym_source_file = 35,
  sym_request_response = 36,
  sym_request = 37,
  sym_http_method = 38,
  sym_pair = 39,
  sym_request_param_keyword = 40,
  sym_value = 41,
  sym_input = 42,
  sym__multiline_string_body = 43,
  sym__json_language_hint = 44,
  sym__xml_language_hint = 45,
  sym__graphql_language_hint = 46,
  sym_multiline_string = 47,
  sym_oneline_string = 48,
  sym_inner_language_hint = 49,
  sym_response = 50,
  sym_version_and_status = 51,
  sym_http_version = 52,
  aux_sym_source_file_repeat1 = 53,
  aux_sym_request_repeat1 = 54,
  alias_sym_graphql = 55,
  alias_sym_xml = 56,
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
  [anon_sym_LBRACKOptions_RBRACK] = "[Options]",
  [sym_variable] = "variable",
  [sym_key] = "key",
  [aux_sym_value_token1] = "value_token1",
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = "```",
  [anon_sym_BQUOTE_BQUOTE_BQUOTEjson] = "```json",
  [anon_sym_BQUOTE_BQUOTE_BQUOTExml] = "```xml",
  [anon_sym_BQUOTE_BQUOTE_BQUOTEgraphql] = "```graphql",
  [aux_sym_multiline_string_token1] = "multiline_string_token1",
  [anon_sym_BQUOTE] = "`",
  [aux_sym_oneline_string_token1] = "oneline_string_token1",
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
  [sym__graphql_language_hint] = "_graphql_language_hint",
  [sym_multiline_string] = "multiline_string",
  [sym_oneline_string] = "oneline_string",
  [sym_inner_language_hint] = "json",
  [sym_response] = "response",
  [sym_version_and_status] = "version_and_status",
  [sym_http_version] = "http_version",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_request_repeat1] = "request_repeat1",
  [alias_sym_graphql] = "graphql",
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
  [anon_sym_LBRACKOptions_RBRACK] = anon_sym_LBRACKOptions_RBRACK,
  [sym_variable] = sym_variable,
  [sym_key] = sym_key,
  [aux_sym_value_token1] = aux_sym_value_token1,
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [anon_sym_BQUOTE_BQUOTE_BQUOTEjson] = anon_sym_BQUOTE_BQUOTE_BQUOTEjson,
  [anon_sym_BQUOTE_BQUOTE_BQUOTExml] = anon_sym_BQUOTE_BQUOTE_BQUOTExml,
  [anon_sym_BQUOTE_BQUOTE_BQUOTEgraphql] = anon_sym_BQUOTE_BQUOTE_BQUOTEgraphql,
  [aux_sym_multiline_string_token1] = aux_sym_multiline_string_token1,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym_oneline_string_token1] = aux_sym_oneline_string_token1,
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
  [sym__graphql_language_hint] = sym__graphql_language_hint,
  [sym_multiline_string] = sym_multiline_string,
  [sym_oneline_string] = sym_oneline_string,
  [sym_inner_language_hint] = sym_json,
  [sym_response] = sym_response,
  [sym_version_and_status] = sym_version_and_status,
  [sym_http_version] = sym_http_version,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_request_repeat1] = aux_sym_request_repeat1,
  [alias_sym_graphql] = alias_sym_graphql,
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
  [anon_sym_LBRACKOptions_RBRACK] = {
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
  [anon_sym_BQUOTE_BQUOTE_BQUOTEgraphql] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_multiline_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_oneline_string_token1] = {
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
  [sym__graphql_language_hint] = {
    .visible = false,
    .named = true,
  },
  [sym_multiline_string] = {
    .visible = true,
    .named = true,
  },
  [sym_oneline_string] = {
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
  [alias_sym_graphql] = {
    .visible = true,
    .named = true,
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
  [2] = {
    [1] = alias_sym_graphql,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_inner_language_hint, 3,
    sym_json,
    alias_sym_graphql,
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
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
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
      if (eof) ADVANCE(140);
      if (lookahead == '#') ADVANCE(233);
      if (sym_key_character_set_1(lookahead)) ADVANCE(206);
      if (lookahead == ':') ADVANCE(160);
      if (lookahead == 'C') ADVANCE(189);
      if (lookahead == 'D') ADVANCE(177);
      if (lookahead == 'G') ADVANCE(178);
      if (lookahead == 'H') ADVANCE(172);
      if (lookahead == 'O') ADVANCE(192);
      if (lookahead == 'P') ADVANCE(171);
      if (lookahead == 'T') ADVANCE(193);
      if (lookahead == '[') ADVANCE(14);
      if (lookahead == '`') ADVANCE(222);
      if (lookahead == '{') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(170);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(207);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('$' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(212);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '{') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(221);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(136);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(227);
      if (lookahead == '1') ADVANCE(228);
      END_STATE();
    case 7:
      if (lookahead == '1') ADVANCE(3);
      if (lookahead == '2') ADVANCE(229);
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
      if (lookahead == 'A') ADVANCE(128);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(46);
      if (lookahead == 'O') ADVANCE(43);
      if (lookahead == 'U') ADVANCE(47);
      END_STATE();
    case 14:
      if (lookahead == 'B') ADVANCE(61);
      if (lookahead == 'C') ADVANCE(97);
      if (lookahead == 'F') ADVANCE(93);
      if (lookahead == 'M') ADVANCE(126);
      if (lookahead == 'O') ADVANCE(99);
      if (lookahead == 'Q') ADVANCE(127);
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
      if (lookahead == 'D') ADVANCE(143);
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
      if (lookahead == 'E') ADVANCE(155);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(149);
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
      if (lookahead == 'F') ADVANCE(98);
      END_STATE();
    case 28:
      if (lookahead == 'H') ADVANCE(157);
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
      if (lookahead == 'P') ADVANCE(230);
      END_STATE();
    case 37:
      if (lookahead == 'P') ADVANCE(64);
      END_STATE();
    case 38:
      if (lookahead == 'P') ADVANCE(45);
      END_STATE();
    case 39:
      if (lookahead == 'P') ADVANCE(69);
      END_STATE();
    case 40:
      if (lookahead == 'R') ADVANCE(11);
      END_STATE();
    case 41:
      if (lookahead == 'S') ADVANCE(153);
      END_STATE();
    case 42:
      if (lookahead == 'S') ADVANCE(124);
      END_STATE();
    case 43:
      if (lookahead == 'S') ADVANCE(48);
      END_STATE();
    case 44:
      if (lookahead == 'T') ADVANCE(141);
      END_STATE();
    case 45:
      if (lookahead == 'T') ADVANCE(29);
      END_STATE();
    case 46:
      if (lookahead == 'T') ADVANCE(15);
      END_STATE();
    case 47:
      if (lookahead == 'T') ADVANCE(147);
      END_STATE();
    case 48:
      if (lookahead == 'T') ADVANCE(145);
      END_STATE();
    case 49:
      if (lookahead == 'T') ADVANCE(151);
      END_STATE();
    case 50:
      if (lookahead == 'T') ADVANCE(36);
      END_STATE();
    case 51:
      if (lookahead == 'T') ADVANCE(23);
      END_STATE();
    case 52:
      if (lookahead == ']') ADVANCE(164);
      END_STATE();
    case 53:
      if (lookahead == ']') ADVANCE(166);
      END_STATE();
    case 54:
      if (lookahead == ']') ADVANCE(163);
      END_STATE();
    case 55:
      if (lookahead == ']') ADVANCE(162);
      END_STATE();
    case 56:
      if (lookahead == ']') ADVANCE(165);
      END_STATE();
    case 57:
      if (lookahead == ']') ADVANCE(161);
      END_STATE();
    case 58:
      if (lookahead == '`') ADVANCE(215);
      END_STATE();
    case 59:
      if (lookahead == '`') ADVANCE(214);
      END_STATE();
    case 60:
      if (lookahead == '`') ADVANCE(59);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(12);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 73:
      if (lookahead == 'g') ADVANCE(39);
      END_STATE();
    case 74:
      if (lookahead == 'h') ADVANCE(103);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(54);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 81:
      if (lookahead == 'k') ADVANCE(78);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(217);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(218);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 85:
      if (lookahead == 'm') ADVANCE(37);
      END_STATE();
    case 86:
      if (lookahead == 'm') ADVANCE(19);
      END_STATE();
    case 87:
      if (lookahead == 'm') ADVANCE(82);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(115);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(117);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(216);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 99:
      if (lookahead == 'p') ADVANCE(119);
      END_STATE();
    case 100:
      if (lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 101:
      if (lookahead == 'p') ADVANCE(9);
      END_STATE();
    case 102:
      if (lookahead == 'p') ADVANCE(65);
      END_STATE();
    case 103:
      if (lookahead == 'q') ADVANCE(83);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 112:
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 126:
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 127:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 128:
      if (lookahead == 'u') ADVANCE(120);
      END_STATE();
    case 129:
      if (lookahead == 'y') ADVANCE(42);
      END_STATE();
    case 130:
      if (lookahead == '{') ADVANCE(135);
      END_STATE();
    case 131:
      if (lookahead == '}') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(132);
      END_STATE();
    case 132:
      if (lookahead == '}') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(132);
      END_STATE();
    case 133:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      END_STATE();
    case 134:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 135:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(132);
      END_STATE();
    case 136:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 137:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(137);
      if (lookahead == '}') ADVANCE(226);
      END_STATE();
    case 138:
      if (eof) ADVANCE(140);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == 'C') ADVANCE(34);
      if (lookahead == 'D') ADVANCE(20);
      if (lookahead == 'G') ADVANCE(21);
      if (lookahead == 'H') ADVANCE(24);
      if (lookahead == 'O') ADVANCE(38);
      if (lookahead == 'P') ADVANCE(13);
      if (lookahead == 'T') ADVANCE(40);
      if (lookahead == '`') ADVANCE(60);
      if (lookahead == 'h') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(138)
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(134);
      END_STATE();
    case 139:
      if (eof) ADVANCE(140);
      if (lookahead == '#') ADVANCE(233);
      if (sym_key_character_set_2(lookahead)) ADVANCE(206);
      if (lookahead == 'C') ADVANCE(189);
      if (lookahead == 'D') ADVANCE(177);
      if (lookahead == 'G') ADVANCE(178);
      if (lookahead == 'H') ADVANCE(172);
      if (lookahead == 'O') ADVANCE(192);
      if (lookahead == 'P') ADVANCE(171);
      if (lookahead == 'T') ADVANCE(193);
      if (lookahead == '[') ADVANCE(14);
      if (lookahead == '`') ADVANCE(222);
      if (lookahead == '{') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(139)
      END_STATE();
    case 140:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_GET);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_POST);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_PATCH);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_LBRACKQueryStringParams_RBRACK);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LBRACKFormParams_RBRACK);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_LBRACKBasicAuth_RBRACK);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_LBRACKCookies_RBRACK);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_LBRACKMultipartFormData_RBRACK);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_LBRACKOptions_RBRACK);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == ' ') ADVANCE(212);
      if (('!' <= lookahead && lookahead <= '|') ||
          lookahead == '~') ADVANCE(209);
      if (lookahead == '}') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(132);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '}') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(132);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= 'T') ||
          ('V' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (lookahead == 'A') ADVANCE(198);
      if (lookahead == 'O') ADVANCE(195);
      if (lookahead == 'U') ADVANCE(199);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (lookahead == 'E') ADVANCE(204);
      if (lookahead == 'T') ADVANCE(202);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'A' ||
          lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (lookahead == 'C') ADVANCE(183);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'A' ||
          lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (lookahead == 'C') ADVANCE(179);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'A' ||
          lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (lookahead == 'C') ADVANCE(201);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('E' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (lookahead == 'D') ADVANCE(144);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (lookahead == 'E') ADVANCE(185);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (lookahead == 'E') ADVANCE(196);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (lookahead == 'E') ADVANCE(156);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (lookahead == 'E') ADVANCE(150);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (lookahead == 'E') ADVANCE(175);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (lookahead == 'E') ADVANCE(203);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'G') ||
          ('I' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (lookahead == 'H') ADVANCE(158);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'H') ||
          ('J' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (lookahead == 'I') ADVANCE(190);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'K') ||
          ('M' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (lookahead == 'L') ADVANCE(182);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (lookahead == 'N') ADVANCE(188);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (lookahead == 'N') ADVANCE(194);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (lookahead == 'N') ADVANCE(181);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (lookahead == 'O') ADVANCE(186);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (lookahead == 'O') ADVANCE(187);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (lookahead == 'P') ADVANCE(231);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (lookahead == 'P') ADVANCE(197);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Q') ||
          ('S' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (lookahead == 'R') ADVANCE(205);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (lookahead == 'S') ADVANCE(154);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (lookahead == 'S') ADVANCE(200);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (lookahead == 'T') ADVANCE(142);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (lookahead == 'T') ADVANCE(184);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (lookahead == 'T') ADVANCE(173);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (lookahead == 'T') ADVANCE(148);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (lookahead == 'T') ADVANCE(146);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (lookahead == 'T') ADVANCE(152);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (lookahead == 'T') ADVANCE(191);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (lookahead == 'T') ADVANCE(180);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (lookahead == 'A') ADVANCE(176);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (lookahead == 'A') ADVANCE(174);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == ' ') ADVANCE(207);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('$' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(212);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '{') ADVANCE(211);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == ' ') ADVANCE(212);
      if (('!' <= lookahead && lookahead <= '|') ||
          lookahead == '~') ADVANCE(209);
      if (lookahead == '}') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(132);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == ' ') ADVANCE(212);
      if (('!' <= lookahead && lookahead <= '|') ||
          lookahead == '~') ADVANCE(209);
      if (lookahead == '}') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(132);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == ' ') ADVANCE(212);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(132);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if ((' ' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(212);
      if (lookahead == '{') ADVANCE(210);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(233);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      if (lookahead == 'g') ADVANCE(106);
      if (lookahead == 'j') ADVANCE(116);
      if (lookahead == 'x') ADVANCE(87);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTEjson);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTExml);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTEgraphql);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '`') ADVANCE(233);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead == '#') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(221);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '`') ADVANCE(58);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_oneline_string_token1);
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead == '`') ADVANCE(233);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_oneline_string_token1);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(225);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_oneline_string_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_json);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(137);
      if (lookahead == '}') ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT0);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT1);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH2);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_HTTP);
      if (lookahead == '/') ADVANCE(7);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_HTTP);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (lookahead == '/') ADVANCE(7);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_status);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(233);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 138},
  [2] = {.lex_state = 139},
  [3] = {.lex_state = 139},
  [4] = {.lex_state = 139},
  [5] = {.lex_state = 139},
  [6] = {.lex_state = 139},
  [7] = {.lex_state = 139},
  [8] = {.lex_state = 138},
  [9] = {.lex_state = 138},
  [10] = {.lex_state = 138},
  [11] = {.lex_state = 138},
  [12] = {.lex_state = 138},
  [13] = {.lex_state = 138},
  [14] = {.lex_state = 138},
  [15] = {.lex_state = 138},
  [16] = {.lex_state = 138},
  [17] = {.lex_state = 138},
  [18] = {.lex_state = 138},
  [19] = {.lex_state = 138},
  [20] = {.lex_state = 138},
  [21] = {.lex_state = 138},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 224},
  [28] = {.lex_state = 138},
  [29] = {.lex_state = 138},
  [30] = {.lex_state = 138},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 138},
  [33] = {.lex_state = 138},
  [34] = {.lex_state = 138},
  [35] = {.lex_state = 138},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 138},
  [38] = {.lex_state = 138},
  [39] = {.lex_state = 138},
  [40] = {.lex_state = 0},
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
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [sym_key] = ACTIONS(1),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE_BQUOTE_BQUOTEjson] = ACTIONS(1),
    [anon_sym_BQUOTE_BQUOTE_BQUOTExml] = ACTIONS(1),
    [anon_sym_BQUOTE_BQUOTE_BQUOTEgraphql] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(1),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(1),
    [anon_sym_HTTP_SLASH2] = ACTIONS(1),
    [anon_sym_HTTP] = ACTIONS(1),
    [sym_status] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(40),
    [sym_request_response] = STATE(13),
    [sym_request] = STATE(8),
    [sym_http_method] = STATE(39),
    [aux_sym_source_file_repeat1] = STATE(13),
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
    [sym__graphql_language_hint] = STATE(14),
    [sym_oneline_string] = STATE(14),
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
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(11),
    [sym_key] = ACTIONS(13),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(15),
    [anon_sym_BQUOTE_BQUOTE_BQUOTEjson] = ACTIONS(17),
    [anon_sym_BQUOTE_BQUOTE_BQUOTExml] = ACTIONS(19),
    [anon_sym_BQUOTE_BQUOTE_BQUOTEgraphql] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [sym_json] = ACTIONS(25),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(7),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(7),
    [anon_sym_HTTP_SLASH2] = ACTIONS(7),
    [anon_sym_HTTP] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_pair] = STATE(4),
    [sym_request_param_keyword] = STATE(4),
    [sym_input] = STATE(17),
    [sym__multiline_string_body] = STATE(14),
    [sym__json_language_hint] = STATE(14),
    [sym__xml_language_hint] = STATE(14),
    [sym__graphql_language_hint] = STATE(14),
    [sym_oneline_string] = STATE(14),
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
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(11),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(11),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(11),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(11),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(11),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(11),
    [sym_key] = ACTIONS(13),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(15),
    [anon_sym_BQUOTE_BQUOTE_BQUOTEjson] = ACTIONS(17),
    [anon_sym_BQUOTE_BQUOTE_BQUOTExml] = ACTIONS(19),
    [anon_sym_BQUOTE_BQUOTE_BQUOTEgraphql] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [sym_json] = ACTIONS(25),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(27),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(27),
    [anon_sym_HTTP_SLASH2] = ACTIONS(27),
    [anon_sym_HTTP] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_pair] = STATE(4),
    [sym_request_param_keyword] = STATE(4),
    [aux_sym_request_repeat1] = STATE(4),
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
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(35),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(35),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(35),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(35),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(35),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(35),
    [sym_key] = ACTIONS(38),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_BQUOTE_BQUOTE_BQUOTEjson] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTExml] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTEgraphql] = ACTIONS(31),
    [anon_sym_BQUOTE] = ACTIONS(33),
    [sym_json] = ACTIONS(31),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(31),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(31),
    [anon_sym_HTTP_SLASH2] = ACTIONS(31),
    [anon_sym_HTTP] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
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
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(41),
    [sym_key] = ACTIONS(43),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(43),
    [anon_sym_BQUOTE_BQUOTE_BQUOTEjson] = ACTIONS(41),
    [anon_sym_BQUOTE_BQUOTE_BQUOTExml] = ACTIONS(41),
    [anon_sym_BQUOTE_BQUOTE_BQUOTEgraphql] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [sym_json] = ACTIONS(41),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(41),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(41),
    [anon_sym_HTTP_SLASH2] = ACTIONS(41),
    [anon_sym_HTTP] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
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
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(45),
    [sym_key] = ACTIONS(47),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE_BQUOTE_BQUOTEjson] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTExml] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTEgraphql] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [sym_json] = ACTIONS(45),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(45),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(45),
    [anon_sym_HTTP_SLASH2] = ACTIONS(45),
    [anon_sym_HTTP] = ACTIONS(47),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_GET] = ACTIONS(51),
    [anon_sym_HEAD] = ACTIONS(51),
    [anon_sym_POST] = ACTIONS(51),
    [anon_sym_PUT] = ACTIONS(51),
    [anon_sym_DELETE] = ACTIONS(51),
    [anon_sym_CONNECT] = ACTIONS(51),
    [anon_sym_OPTIONS] = ACTIONS(51),
    [anon_sym_TRACE] = ACTIONS(51),
    [anon_sym_PATCH] = ACTIONS(51),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(49),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(49),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(49),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(49),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(49),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(49),
    [sym_key] = ACTIONS(51),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(51),
    [anon_sym_BQUOTE_BQUOTE_BQUOTEjson] = ACTIONS(49),
    [anon_sym_BQUOTE_BQUOTE_BQUOTExml] = ACTIONS(49),
    [anon_sym_BQUOTE_BQUOTE_BQUOTEgraphql] = ACTIONS(49),
    [anon_sym_BQUOTE] = ACTIONS(51),
    [sym_json] = ACTIONS(49),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(49),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(49),
    [anon_sym_HTTP_SLASH2] = ACTIONS(49),
    [anon_sym_HTTP] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_HTTP,
    STATE(19), 1,
      sym_response,
    STATE(20), 1,
      sym_version_and_status,
    STATE(37), 1,
      sym_http_version,
    ACTIONS(55), 3,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
    ACTIONS(53), 10,
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
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_request,
    STATE(39), 1,
      sym_http_method,
    STATE(9), 2,
      sym_request_response,
      aux_sym_source_file_repeat1,
    ACTIONS(61), 9,
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
    ACTIONS(66), 1,
      anon_sym_HTTP,
    ACTIONS(64), 13,
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
  [83] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_HTTP,
    ACTIONS(68), 13,
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
  [105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_HTTP,
    ACTIONS(72), 13,
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
  [127] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_request,
    STATE(39), 1,
      sym_http_method,
    STATE(9), 2,
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
  [155] = 3,
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
  [177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_HTTP,
    ACTIONS(27), 13,
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
    ACTIONS(84), 1,
      anon_sym_HTTP,
    ACTIONS(82), 13,
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
  [221] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_HTTP,
    ACTIONS(86), 13,
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
  [243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_HTTP,
    ACTIONS(90), 13,
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
  [265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 10,
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
  [281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 10,
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
  [297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 10,
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
  [313] = 3,
    ACTIONS(102), 1,
      sym_comment,
    STATE(5), 1,
      sym_value,
    ACTIONS(100), 2,
      sym_variable,
      aux_sym_value_token1,
  [324] = 3,
    ACTIONS(102), 1,
      sym_comment,
    ACTIONS(104), 1,
      aux_sym_multiline_string_token1,
    STATE(33), 1,
      sym_multiline_string,
  [334] = 3,
    ACTIONS(102), 1,
      sym_comment,
    ACTIONS(106), 1,
      aux_sym_multiline_string_token1,
    STATE(28), 1,
      sym_inner_language_hint,
  [344] = 3,
    ACTIONS(102), 1,
      sym_comment,
    ACTIONS(106), 1,
      aux_sym_multiline_string_token1,
    STATE(29), 1,
      sym_inner_language_hint,
  [354] = 3,
    ACTIONS(102), 1,
      sym_comment,
    ACTIONS(106), 1,
      aux_sym_multiline_string_token1,
    STATE(30), 1,
      sym_inner_language_hint,
  [364] = 2,
    ACTIONS(102), 1,
      sym_comment,
    ACTIONS(108), 1,
      aux_sym_oneline_string_token1,
  [371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [385] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [392] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_BQUOTE,
  [399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym_url,
  [427] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_COLON,
  [434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      sym_status,
  [441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      sym_status,
  [448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      sym_url,
  [455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 33,
  [SMALL_STATE(10)] = 61,
  [SMALL_STATE(11)] = 83,
  [SMALL_STATE(12)] = 105,
  [SMALL_STATE(13)] = 127,
  [SMALL_STATE(14)] = 155,
  [SMALL_STATE(15)] = 177,
  [SMALL_STATE(16)] = 199,
  [SMALL_STATE(17)] = 221,
  [SMALL_STATE(18)] = 243,
  [SMALL_STATE(19)] = 265,
  [SMALL_STATE(20)] = 281,
  [SMALL_STATE(21)] = 297,
  [SMALL_STATE(22)] = 313,
  [SMALL_STATE(23)] = 324,
  [SMALL_STATE(24)] = 334,
  [SMALL_STATE(25)] = 344,
  [SMALL_STATE(26)] = 354,
  [SMALL_STATE(27)] = 364,
  [SMALL_STATE(28)] = 371,
  [SMALL_STATE(29)] = 378,
  [SMALL_STATE(30)] = 385,
  [SMALL_STATE(31)] = 392,
  [SMALL_STATE(32)] = 399,
  [SMALL_STATE(33)] = 406,
  [SMALL_STATE(34)] = 413,
  [SMALL_STATE(35)] = 420,
  [SMALL_STATE(36)] = 427,
  [SMALL_STATE(37)] = 434,
  [SMALL_STATE(38)] = 441,
  [SMALL_STATE(39)] = 448,
  [SMALL_STATE(40)] = 455,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(6),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(36),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_param_keyword, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_param_keyword, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_response, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_string_body, 3),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_string_body, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string, 3),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string, 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_language_hint, 3),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__json_language_hint, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xml_language_hint, 3, .production_id = 1),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xml_language_hint, 3, .production_id = 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__graphql_language_hint, 3, .production_id = 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__graphql_language_hint, 3, .production_id = 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_response, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_and_status, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inner_language_hint, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_method, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [134] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
