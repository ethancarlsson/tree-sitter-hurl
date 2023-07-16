#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 45
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 2
#define TOKEN_COUNT 39
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
  anon_sym_LBRACKQueryStringParams_RBRACK = 11,
  anon_sym_LBRACKFormParams_RBRACK = 12,
  anon_sym_LBRACKBasicAuth_RBRACK = 13,
  anon_sym_LBRACKCookies_RBRACK = 14,
  anon_sym_LBRACKMultipartFormData_RBRACK = 15,
  anon_sym_LBRACKOptions_RBRACK = 16,
  sym_variable = 17,
  sym_key = 18,
  aux_sym_value_token1 = 19,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 20,
  anon_sym_BQUOTE_BQUOTE_BQUOTEjson = 21,
  anon_sym_BQUOTE_BQUOTE_BQUOTExml = 22,
  anon_sym_BQUOTE_BQUOTE_BQUOTEgraphql = 23,
  aux_sym_multiline_string_token1 = 24,
  anon_sym_BQUOTE = 25,
  aux_sym_oneline_string_token1 = 26,
  anon_sym_base64 = 27,
  anon_sym_COMMA = 28,
  anon_sym_SEMI = 29,
  sym_oneline_base64 = 30,
  sym_json = 31,
  anon_sym_HTTP_SLASH1_DOT0 = 32,
  anon_sym_HTTP_SLASH1_DOT1 = 33,
  anon_sym_HTTP_SLASH2 = 34,
  anon_sym_HTTP = 35,
  sym_status = 36,
  anon_sym_COLON = 37,
  sym_comment = 38,
  sym_source_file = 39,
  sym_request_response = 40,
  sym_request = 41,
  sym_http_method = 42,
  sym_request_param_keyword = 43,
  sym_value = 44,
  sym_input = 45,
  sym__multiline_string_body = 46,
  sym__json_language_hint = 47,
  sym__xml_language_hint = 48,
  sym__graphql_language_hint = 49,
  sym_multiline_string = 50,
  sym_oneline_string = 51,
  sym__base64 = 52,
  sym_inner_language_hint = 53,
  sym_response = 54,
  sym_version_and_status = 55,
  sym_http_version = 56,
  sym_pair = 57,
  aux_sym_source_file_repeat1 = 58,
  aux_sym_request_repeat1 = 59,
  alias_sym_graphql = 60,
  alias_sym_xml = 61,
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
  [anon_sym_base64] = "base64",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [sym_oneline_base64] = "oneline_base64",
  [sym_json] = "json",
  [anon_sym_HTTP_SLASH1_DOT0] = "HTTP/1.0",
  [anon_sym_HTTP_SLASH1_DOT1] = "HTTP/1.1",
  [anon_sym_HTTP_SLASH2] = "HTTP/2",
  [anon_sym_HTTP] = "HTTP",
  [sym_status] = "status",
  [anon_sym_COLON] = ":",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_request_response] = "request_response",
  [sym_request] = "request",
  [sym_http_method] = "http_method",
  [sym_request_param_keyword] = "request_param_keyword",
  [sym_value] = "value",
  [sym_input] = "input",
  [sym__multiline_string_body] = "_multiline_string_body",
  [sym__json_language_hint] = "_json_language_hint",
  [sym__xml_language_hint] = "_xml_language_hint",
  [sym__graphql_language_hint] = "_graphql_language_hint",
  [sym_multiline_string] = "multiline_string",
  [sym_oneline_string] = "oneline_string",
  [sym__base64] = "_base64",
  [sym_inner_language_hint] = "json",
  [sym_response] = "response",
  [sym_version_and_status] = "version_and_status",
  [sym_http_version] = "http_version",
  [sym_pair] = "pair",
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
  [anon_sym_base64] = anon_sym_base64,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_oneline_base64] = sym_oneline_base64,
  [sym_json] = sym_json,
  [anon_sym_HTTP_SLASH1_DOT0] = anon_sym_HTTP_SLASH1_DOT0,
  [anon_sym_HTTP_SLASH1_DOT1] = anon_sym_HTTP_SLASH1_DOT1,
  [anon_sym_HTTP_SLASH2] = anon_sym_HTTP_SLASH2,
  [anon_sym_HTTP] = anon_sym_HTTP,
  [sym_status] = sym_status,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_request_response] = sym_request_response,
  [sym_request] = sym_request,
  [sym_http_method] = sym_http_method,
  [sym_request_param_keyword] = sym_request_param_keyword,
  [sym_value] = sym_value,
  [sym_input] = sym_input,
  [sym__multiline_string_body] = sym__multiline_string_body,
  [sym__json_language_hint] = sym__json_language_hint,
  [sym__xml_language_hint] = sym__xml_language_hint,
  [sym__graphql_language_hint] = sym__graphql_language_hint,
  [sym_multiline_string] = sym_multiline_string,
  [sym_oneline_string] = sym_oneline_string,
  [sym__base64] = sym__base64,
  [sym_inner_language_hint] = sym_json,
  [sym_response] = sym_response,
  [sym_version_and_status] = sym_version_and_status,
  [sym_http_version] = sym_http_version,
  [sym_pair] = sym_pair,
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
  [anon_sym_base64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_oneline_base64] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
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
  [sym__base64] = {
    .visible = false,
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
  [sym_pair] = {
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
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
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
      : (c <= '_' || (c < 'c'
        ? c == 'a'
        : c <= 'z')))));
}

static inline bool sym_key_character_set_2(int32_t c) {
  return (c < 'Q'
    ? (c < 'A'
      ? (c < '0'
        ? c == '-'
        : c <= '9')
      : (c <= 'B' || (c < 'I'
        ? (c >= 'E' && c <= 'F')
        : c <= 'N')))
    : (c <= 'S' || (c < 'a'
      ? (c < '_'
        ? (c >= 'U' && c <= 'Z')
        : c <= '_')
      : (c <= 'a' || (c >= 'c' && c <= 'z')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(141);
      if (lookahead == '#') ADVANCE(244);
      if (lookahead == ',') ADVANCE(232);
      if (sym_key_character_set_1(lookahead)) ADVANCE(211);
      if (lookahead == ':') ADVANCE(243);
      if (lookahead == ';') ADVANCE(233);
      if (lookahead == 'C') ADVANCE(191);
      if (lookahead == 'D') ADVANCE(179);
      if (lookahead == 'G') ADVANCE(180);
      if (lookahead == 'H') ADVANCE(172);
      if (lookahead == 'O') ADVANCE(194);
      if (lookahead == 'P') ADVANCE(171);
      if (lookahead == 'T') ADVANCE(195);
      if (lookahead == '[') ADVANCE(15);
      if (lookahead == '`') ADVANCE(227);
      if (lookahead == 'b') ADVANCE(210);
      if (lookahead == '{') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(170);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(212);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('$' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(217);
      if (lookahead == '#') ADVANCE(218);
      if (lookahead == '{') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(2)
      if (lookahead == '\n' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(226);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(137);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(237);
      if (lookahead == '1') ADVANCE(238);
      END_STATE();
    case 8:
      if (lookahead == '1') ADVANCE(4);
      if (lookahead == '2') ADVANCE(239);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(6);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(129);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(47);
      if (lookahead == 'O') ADVANCE(44);
      if (lookahead == 'U') ADVANCE(48);
      END_STATE();
    case 15:
      if (lookahead == 'B') ADVANCE(62);
      if (lookahead == 'C') ADVANCE(98);
      if (lookahead == 'F') ADVANCE(94);
      if (lookahead == 'M') ADVANCE(127);
      if (lookahead == 'O') ADVANCE(100);
      if (lookahead == 'Q') ADVANCE(128);
      END_STATE();
    case 16:
      if (lookahead == 'C') ADVANCE(29);
      END_STATE();
    case 17:
      if (lookahead == 'C') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'C') ADVANCE(50);
      END_STATE();
    case 19:
      if (lookahead == 'D') ADVANCE(144);
      END_STATE();
    case 20:
      if (lookahead == 'D') ADVANCE(67);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == 'E') ADVANCE(45);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(156);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(150);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(11);
      if (lookahead == 'T') ADVANCE(51);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(18);
      END_STATE();
    case 27:
      if (lookahead == 'E') ADVANCE(52);
      END_STATE();
    case 28:
      if (lookahead == 'F') ADVANCE(99);
      END_STATE();
    case 29:
      if (lookahead == 'H') ADVANCE(158);
      END_STATE();
    case 30:
      if (lookahead == 'I') ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == 'L') ADVANCE(27);
      END_STATE();
    case 32:
      if (lookahead == 'N') ADVANCE(34);
      END_STATE();
    case 33:
      if (lookahead == 'N') ADVANCE(42);
      END_STATE();
    case 34:
      if (lookahead == 'N') ADVANCE(26);
      END_STATE();
    case 35:
      if (lookahead == 'O') ADVANCE(32);
      END_STATE();
    case 36:
      if (lookahead == 'O') ADVANCE(33);
      END_STATE();
    case 37:
      if (lookahead == 'P') ADVANCE(240);
      END_STATE();
    case 38:
      if (lookahead == 'P') ADVANCE(65);
      END_STATE();
    case 39:
      if (lookahead == 'P') ADVANCE(46);
      END_STATE();
    case 40:
      if (lookahead == 'P') ADVANCE(70);
      END_STATE();
    case 41:
      if (lookahead == 'R') ADVANCE(12);
      END_STATE();
    case 42:
      if (lookahead == 'S') ADVANCE(154);
      END_STATE();
    case 43:
      if (lookahead == 'S') ADVANCE(125);
      END_STATE();
    case 44:
      if (lookahead == 'S') ADVANCE(49);
      END_STATE();
    case 45:
      if (lookahead == 'T') ADVANCE(142);
      END_STATE();
    case 46:
      if (lookahead == 'T') ADVANCE(30);
      END_STATE();
    case 47:
      if (lookahead == 'T') ADVANCE(16);
      END_STATE();
    case 48:
      if (lookahead == 'T') ADVANCE(148);
      END_STATE();
    case 49:
      if (lookahead == 'T') ADVANCE(146);
      END_STATE();
    case 50:
      if (lookahead == 'T') ADVANCE(152);
      END_STATE();
    case 51:
      if (lookahead == 'T') ADVANCE(37);
      END_STATE();
    case 52:
      if (lookahead == 'T') ADVANCE(24);
      END_STATE();
    case 53:
      if (lookahead == ']') ADVANCE(164);
      END_STATE();
    case 54:
      if (lookahead == ']') ADVANCE(166);
      END_STATE();
    case 55:
      if (lookahead == ']') ADVANCE(163);
      END_STATE();
    case 56:
      if (lookahead == ']') ADVANCE(162);
      END_STATE();
    case 57:
      if (lookahead == ']') ADVANCE(165);
      END_STATE();
    case 58:
      if (lookahead == ']') ADVANCE(161);
      END_STATE();
    case 59:
      if (lookahead == '`') ADVANCE(220);
      END_STATE();
    case 60:
      if (lookahead == '`') ADVANCE(219);
      END_STATE();
    case 61:
      if (lookahead == '`') ADVANCE(60);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(13);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 74:
      if (lookahead == 'g') ADVANCE(40);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(104);
      END_STATE();
    case 76:
      if (lookahead == 'h') ADVANCE(55);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 82:
      if (lookahead == 'k') ADVANCE(79);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(222);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(223);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 86:
      if (lookahead == 'm') ADVANCE(38);
      END_STATE();
    case 87:
      if (lookahead == 'm') ADVANCE(20);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(83);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(116);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(118);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 100:
      if (lookahead == 'p') ADVANCE(120);
      END_STATE();
    case 101:
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 102:
      if (lookahead == 'p') ADVANCE(10);
      END_STATE();
    case 103:
      if (lookahead == 'p') ADVANCE(66);
      END_STATE();
    case 104:
      if (lookahead == 'q') ADVANCE(84);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(97);
      END_STATE();
    case 118:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 127:
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 128:
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 129:
      if (lookahead == 'u') ADVANCE(121);
      END_STATE();
    case 130:
      if (lookahead == 'y') ADVANCE(43);
      END_STATE();
    case 131:
      if (lookahead == '{') ADVANCE(136);
      END_STATE();
    case 132:
      if (lookahead == '}') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(133);
      END_STATE();
    case 133:
      if (lookahead == '}') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(133);
      END_STATE();
    case 134:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      END_STATE();
    case 135:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 136:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(133);
      END_STATE();
    case 137:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    case 138:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(138);
      if (lookahead == '}') ADVANCE(236);
      END_STATE();
    case 139:
      if (eof) ADVANCE(141);
      if (lookahead == '#') ADVANCE(244);
      if (lookahead == 'C') ADVANCE(35);
      if (lookahead == 'D') ADVANCE(21);
      if (lookahead == 'G') ADVANCE(22);
      if (lookahead == 'H') ADVANCE(25);
      if (lookahead == 'O') ADVANCE(39);
      if (lookahead == 'P') ADVANCE(14);
      if (lookahead == 'T') ADVANCE(41);
      if (lookahead == '`') ADVANCE(61);
      if (lookahead == 'h') ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(139)
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(135);
      END_STATE();
    case 140:
      if (eof) ADVANCE(141);
      if (lookahead == '#') ADVANCE(244);
      if (sym_key_character_set_2(lookahead)) ADVANCE(211);
      if (lookahead == 'C') ADVANCE(191);
      if (lookahead == 'D') ADVANCE(179);
      if (lookahead == 'G') ADVANCE(180);
      if (lookahead == 'H') ADVANCE(172);
      if (lookahead == 'O') ADVANCE(194);
      if (lookahead == 'P') ADVANCE(171);
      if (lookahead == 'T') ADVANCE(195);
      if (lookahead == '[') ADVANCE(15);
      if (lookahead == '`') ADVANCE(227);
      if (lookahead == 'b') ADVANCE(210);
      if (lookahead == '{') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(140)
      END_STATE();
    case 141:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_GET);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_POST);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_PATCH);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(160);
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
      if (lookahead == ' ') ADVANCE(217);
      if (('!' <= lookahead && lookahead <= '|') ||
          lookahead == '~') ADVANCE(214);
      if (lookahead == '}') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(133);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '}') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(133);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead == 'A') ADVANCE(200);
      if (lookahead == 'O') ADVANCE(197);
      if (lookahead == 'U') ADVANCE(201);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead == 'E') ADVANCE(206);
      if (lookahead == 'T') ADVANCE(204);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '3') ||
          ('5' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead == '4') ADVANCE(231);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '5') ||
          ('7' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead == '6') ADVANCE(173);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'A' ||
          lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead == 'C') ADVANCE(185);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'A' ||
          lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead == 'C') ADVANCE(181);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'A' ||
          lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead == 'C') ADVANCE(203);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('E' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead == 'D') ADVANCE(145);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead == 'E') ADVANCE(187);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead == 'E') ADVANCE(198);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead == 'E') ADVANCE(157);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead == 'E') ADVANCE(151);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead == 'E') ADVANCE(177);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead == 'E') ADVANCE(205);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'G') ||
          ('I' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead == 'H') ADVANCE(159);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'H') ||
          ('J' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead == 'I') ADVANCE(192);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'K') ||
          ('M' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead == 'L') ADVANCE(184);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead == 'N') ADVANCE(190);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead == 'N') ADVANCE(196);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead == 'N') ADVANCE(183);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead == 'O') ADVANCE(188);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead == 'O') ADVANCE(189);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead == 'P') ADVANCE(241);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead == 'P') ADVANCE(199);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Q') ||
          ('S' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead == 'R') ADVANCE(207);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead == 'S') ADVANCE(155);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead == 'S') ADVANCE(202);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead == 'T') ADVANCE(143);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead == 'T') ADVANCE(186);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead == 'T') ADVANCE(175);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead == 'T') ADVANCE(149);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead == 'T') ADVANCE(147);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead == 'T') ADVANCE(153);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead == 'T') ADVANCE(193);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead == 'T') ADVANCE(182);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead == 'A') ADVANCE(178);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead == 'A') ADVANCE(176);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == ' ') ADVANCE(212);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('$' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(217);
      if (lookahead == '#') ADVANCE(218);
      if (lookahead == '{') ADVANCE(216);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == ' ') ADVANCE(217);
      if (('!' <= lookahead && lookahead <= '|') ||
          lookahead == '~') ADVANCE(214);
      if (lookahead == '}') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(133);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == ' ') ADVANCE(217);
      if (('!' <= lookahead && lookahead <= '|') ||
          lookahead == '~') ADVANCE(214);
      if (lookahead == '}') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(133);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == ' ') ADVANCE(217);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(133);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if ((' ' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(217);
      if (lookahead == '{') ADVANCE(215);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(244);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      if (lookahead == 'g') ADVANCE(107);
      if (lookahead == 'j') ADVANCE(117);
      if (lookahead == 'x') ADVANCE(88);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTEjson);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTExml);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTEgraphql);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '`') ADVANCE(244);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead == '#') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '`') ADVANCE(59);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_oneline_string_token1);
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == '`') ADVANCE(244);
      if (lookahead != 0) ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_oneline_string_token1);
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(230);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_oneline_string_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_base64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_oneline_base64);
      if (lookahead == '\n' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_oneline_base64);
      if (lookahead == '\n' ||
          lookahead == ' ' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_json);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(138);
      if (lookahead == '}') ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT0);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT1);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH2);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_HTTP);
      if (lookahead == '/') ADVANCE(8);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_HTTP);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead == '/') ADVANCE(8);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_status);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(244);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 139},
  [2] = {.lex_state = 140},
  [3] = {.lex_state = 140},
  [4] = {.lex_state = 140},
  [5] = {.lex_state = 140},
  [6] = {.lex_state = 140},
  [7] = {.lex_state = 140},
  [8] = {.lex_state = 139},
  [9] = {.lex_state = 139},
  [10] = {.lex_state = 139},
  [11] = {.lex_state = 139},
  [12] = {.lex_state = 139},
  [13] = {.lex_state = 139},
  [14] = {.lex_state = 139},
  [15] = {.lex_state = 139},
  [16] = {.lex_state = 139},
  [17] = {.lex_state = 139},
  [18] = {.lex_state = 139},
  [19] = {.lex_state = 139},
  [20] = {.lex_state = 139},
  [21] = {.lex_state = 139},
  [22] = {.lex_state = 139},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 139},
  [29] = {.lex_state = 139},
  [30] = {.lex_state = 139},
  [31] = {.lex_state = 139},
  [32] = {.lex_state = 139},
  [33] = {.lex_state = 139},
  [34] = {.lex_state = 139},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 139},
  [38] = {.lex_state = 139},
  [39] = {.lex_state = 139},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 229},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
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
    [anon_sym_base64] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(1),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(1),
    [anon_sym_HTTP_SLASH2] = ACTIONS(1),
    [anon_sym_HTTP] = ACTIONS(1),
    [sym_status] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(40),
    [sym_request_response] = STATE(17),
    [sym_request] = STATE(8),
    [sym_http_method] = STATE(39),
    [aux_sym_source_file_repeat1] = STATE(17),
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
    [sym_request_param_keyword] = STATE(3),
    [sym_input] = STATE(19),
    [sym__multiline_string_body] = STATE(9),
    [sym__json_language_hint] = STATE(9),
    [sym__xml_language_hint] = STATE(9),
    [sym__graphql_language_hint] = STATE(9),
    [sym_oneline_string] = STATE(9),
    [sym__base64] = STATE(9),
    [sym_pair] = STATE(3),
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
    [anon_sym_base64] = ACTIONS(25),
    [sym_json] = ACTIONS(27),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(7),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(7),
    [anon_sym_HTTP_SLASH2] = ACTIONS(7),
    [anon_sym_HTTP] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_request_param_keyword] = STATE(4),
    [sym_input] = STATE(18),
    [sym__multiline_string_body] = STATE(9),
    [sym__json_language_hint] = STATE(9),
    [sym__xml_language_hint] = STATE(9),
    [sym__graphql_language_hint] = STATE(9),
    [sym_oneline_string] = STATE(9),
    [sym__base64] = STATE(9),
    [sym_pair] = STATE(4),
    [aux_sym_request_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_GET] = ACTIONS(31),
    [anon_sym_HEAD] = ACTIONS(31),
    [anon_sym_POST] = ACTIONS(31),
    [anon_sym_PUT] = ACTIONS(31),
    [anon_sym_DELETE] = ACTIONS(31),
    [anon_sym_CONNECT] = ACTIONS(31),
    [anon_sym_OPTIONS] = ACTIONS(31),
    [anon_sym_TRACE] = ACTIONS(31),
    [anon_sym_PATCH] = ACTIONS(31),
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
    [anon_sym_base64] = ACTIONS(25),
    [sym_json] = ACTIONS(27),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(29),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(29),
    [anon_sym_HTTP_SLASH2] = ACTIONS(29),
    [anon_sym_HTTP] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_request_param_keyword] = STATE(4),
    [sym_pair] = STATE(4),
    [aux_sym_request_repeat1] = STATE(4),
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
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(37),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(37),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(37),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(37),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(37),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(37),
    [sym_key] = ACTIONS(40),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(35),
    [anon_sym_BQUOTE_BQUOTE_BQUOTEjson] = ACTIONS(33),
    [anon_sym_BQUOTE_BQUOTE_BQUOTExml] = ACTIONS(33),
    [anon_sym_BQUOTE_BQUOTE_BQUOTEgraphql] = ACTIONS(33),
    [anon_sym_BQUOTE] = ACTIONS(35),
    [anon_sym_base64] = ACTIONS(35),
    [sym_json] = ACTIONS(33),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(33),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(33),
    [anon_sym_HTTP_SLASH2] = ACTIONS(33),
    [anon_sym_HTTP] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 14,
      ts_builtin_sym_end,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_BQUOTE_BQUOTE_BQUOTEjson,
      anon_sym_BQUOTE_BQUOTE_BQUOTExml,
      anon_sym_BQUOTE_BQUOTE_BQUOTEgraphql,
      sym_json,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
    ACTIONS(45), 14,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      sym_key,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_BQUOTE,
      anon_sym_base64,
      anon_sym_HTTP,
  [36] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 14,
      ts_builtin_sym_end,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_BQUOTE_BQUOTE_BQUOTEjson,
      anon_sym_BQUOTE_BQUOTE_BQUOTExml,
      anon_sym_BQUOTE_BQUOTE_BQUOTEgraphql,
      sym_json,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
    ACTIONS(49), 14,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      sym_key,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_BQUOTE,
      anon_sym_base64,
      anon_sym_HTTP,
  [72] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 14,
      ts_builtin_sym_end,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_BQUOTE_BQUOTE_BQUOTEjson,
      anon_sym_BQUOTE_BQUOTE_BQUOTExml,
      anon_sym_BQUOTE_BQUOTE_BQUOTEgraphql,
      sym_json,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
    ACTIONS(53), 14,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      sym_key,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_BQUOTE,
      anon_sym_base64,
      anon_sym_HTTP,
  [108] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_HTTP,
    STATE(20), 1,
      sym_version_and_status,
    STATE(22), 1,
      sym_response,
    STATE(37), 1,
      sym_http_version,
    ACTIONS(57), 3,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
    ACTIONS(55), 10,
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
  [141] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_HTTP,
    ACTIONS(61), 13,
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
  [163] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_HTTP,
    ACTIONS(65), 13,
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
  [185] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_request,
    STATE(39), 1,
      sym_http_method,
    STATE(11), 2,
      sym_request_response,
      aux_sym_source_file_repeat1,
    ACTIONS(71), 9,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
  [213] = 3,
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
  [235] = 3,
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
  [257] = 3,
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
  [279] = 3,
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
  [301] = 3,
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
  [323] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_request,
    STATE(39), 1,
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
  [351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_HTTP,
    ACTIONS(96), 13,
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
  [373] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_HTTP,
    ACTIONS(29), 13,
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
  [395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 10,
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
  [411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 10,
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
  [427] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 10,
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
  [443] = 3,
    ACTIONS(108), 1,
      sym_comment,
    STATE(5), 1,
      sym_value,
    ACTIONS(106), 2,
      sym_variable,
      aux_sym_value_token1,
  [454] = 3,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(110), 1,
      aux_sym_multiline_string_token1,
    STATE(33), 1,
      sym_inner_language_hint,
  [464] = 3,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(110), 1,
      aux_sym_multiline_string_token1,
    STATE(34), 1,
      sym_inner_language_hint,
  [474] = 3,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(110), 1,
      aux_sym_multiline_string_token1,
    STATE(32), 1,
      sym_inner_language_hint,
  [484] = 3,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(112), 1,
      aux_sym_multiline_string_token1,
    STATE(30), 1,
      sym_multiline_string,
  [494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_status,
  [501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_BQUOTE,
  [550] = 2,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(130), 1,
      sym_oneline_base64,
  [557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      sym_status,
  [564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      sym_url,
  [571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      sym_url,
  [578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
  [585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_COMMA,
  [592] = 2,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(142), 1,
      aux_sym_oneline_string_token1,
  [599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_SEMI,
  [606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 36,
  [SMALL_STATE(7)] = 72,
  [SMALL_STATE(8)] = 108,
  [SMALL_STATE(9)] = 141,
  [SMALL_STATE(10)] = 163,
  [SMALL_STATE(11)] = 185,
  [SMALL_STATE(12)] = 213,
  [SMALL_STATE(13)] = 235,
  [SMALL_STATE(14)] = 257,
  [SMALL_STATE(15)] = 279,
  [SMALL_STATE(16)] = 301,
  [SMALL_STATE(17)] = 323,
  [SMALL_STATE(18)] = 351,
  [SMALL_STATE(19)] = 373,
  [SMALL_STATE(20)] = 395,
  [SMALL_STATE(21)] = 411,
  [SMALL_STATE(22)] = 427,
  [SMALL_STATE(23)] = 443,
  [SMALL_STATE(24)] = 454,
  [SMALL_STATE(25)] = 464,
  [SMALL_STATE(26)] = 474,
  [SMALL_STATE(27)] = 484,
  [SMALL_STATE(28)] = 494,
  [SMALL_STATE(29)] = 501,
  [SMALL_STATE(30)] = 508,
  [SMALL_STATE(31)] = 515,
  [SMALL_STATE(32)] = 522,
  [SMALL_STATE(33)] = 529,
  [SMALL_STATE(34)] = 536,
  [SMALL_STATE(35)] = 543,
  [SMALL_STATE(36)] = 550,
  [SMALL_STATE(37)] = 557,
  [SMALL_STATE(38)] = 564,
  [SMALL_STATE(39)] = 571,
  [SMALL_STATE(40)] = 578,
  [SMALL_STATE(41)] = 585,
  [SMALL_STATE(42)] = 592,
  [SMALL_STATE(43)] = 599,
  [SMALL_STATE(44)] = 606,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(7),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(44),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_param_keyword, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_param_keyword, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_response, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__base64, 4),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__base64, 4),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string, 3),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__graphql_language_hint, 3, .production_id = 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__graphql_language_hint, 3, .production_id = 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xml_language_hint, 3, .production_id = 1),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xml_language_hint, 3, .production_id = 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_language_hint, 3),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__json_language_hint, 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_string_body, 3),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_string_body, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_and_status, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_response, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inner_language_hint, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_method, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [138] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
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
