#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 49
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 63
#define ALIAS_COUNT 2
#define TOKEN_COUNT 41
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
  anon_sym_hex = 31,
  sym_oneline_hex = 32,
  sym_json = 33,
  anon_sym_HTTP_SLASH1_DOT0 = 34,
  anon_sym_HTTP_SLASH1_DOT1 = 35,
  anon_sym_HTTP_SLASH2 = 36,
  anon_sym_HTTP = 37,
  sym_status = 38,
  anon_sym_COLON = 39,
  sym_comment = 40,
  sym_source_file = 41,
  sym_request_response = 42,
  sym_request = 43,
  sym_http_method = 44,
  sym_request_param_keyword = 45,
  sym_value = 46,
  sym_input = 47,
  sym__multiline_string_body = 48,
  sym__json_language_hint = 49,
  sym__xml_language_hint = 50,
  sym__graphql_language_hint = 51,
  sym_multiline_string = 52,
  sym_oneline_string = 53,
  sym__base64 = 54,
  sym__hex = 55,
  sym_inner_language_hint = 56,
  sym_response = 57,
  sym_version_and_status = 58,
  sym_http_version = 59,
  sym_pair = 60,
  aux_sym_source_file_repeat1 = 61,
  aux_sym_request_repeat1 = 62,
  alias_sym_graphql = 63,
  alias_sym_xml = 64,
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
  [anon_sym_hex] = "hex",
  [sym_oneline_hex] = "oneline_hex",
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
  [sym__hex] = "_hex",
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
  [anon_sym_hex] = anon_sym_hex,
  [sym_oneline_hex] = sym_oneline_hex,
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
  [sym__hex] = sym__hex,
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
  [anon_sym_hex] = {
    .visible = true,
    .named = false,
  },
  [sym_oneline_hex] = {
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
  [sym__hex] = {
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
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
};

static inline bool sym_key_character_set_1(int32_t c) {
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
      : (c <= 'a' || (c < 'i'
        ? (c >= 'c' && c <= 'g')
        : c <= 'z')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(142);
      if (lookahead == '#') ADVANCE(255);
      if (lookahead == ',') ADVANCE(241);
      if (lookahead == '-' ||
          ('I' <= lookahead && lookahead <= 'N') ||
          ('Q' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'g' ||
          ('i' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead == ':') ADVANCE(254);
      if (lookahead == ';') ADVANCE(242);
      if (lookahead == 'C') ADVANCE(171);
      if (lookahead == 'D') ADVANCE(173);
      if (lookahead == 'G') ADVANCE(186);
      if (lookahead == 'H') ADVANCE(179);
      if (lookahead == 'O') ADVANCE(201);
      if (lookahead == 'P') ADVANCE(178);
      if (lookahead == 'T') ADVANCE(202);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == '`') ADVANCE(236);
      if (lookahead == 'b') ADVANCE(174);
      if (lookahead == 'h') ADVANCE(215);
      if (lookahead == '{') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '0' ||
          ('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(176);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(221);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('$' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(226);
      if (lookahead == '#') ADVANCE(227);
      if (lookahead == '{') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(2)
      if (lookahead == '\n' ||
          lookahead == ' ') ADVANCE(243);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(246);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(235);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(138);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '0') ADVANCE(248);
      if (lookahead == '1') ADVANCE(249);
      END_STATE();
    case 9:
      if (lookahead == '1') ADVANCE(5);
      if (lookahead == '2') ADVANCE(250);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(7);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(20);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(130);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(48);
      if (lookahead == 'O') ADVANCE(45);
      if (lookahead == 'U') ADVANCE(49);
      END_STATE();
    case 16:
      if (lookahead == 'B') ADVANCE(63);
      if (lookahead == 'C') ADVANCE(99);
      if (lookahead == 'F') ADVANCE(95);
      if (lookahead == 'M') ADVANCE(128);
      if (lookahead == 'O') ADVANCE(101);
      if (lookahead == 'Q') ADVANCE(129);
      END_STATE();
    case 17:
      if (lookahead == 'C') ADVANCE(30);
      END_STATE();
    case 18:
      if (lookahead == 'C') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == 'C') ADVANCE(51);
      END_STATE();
    case 20:
      if (lookahead == 'D') ADVANCE(145);
      END_STATE();
    case 21:
      if (lookahead == 'D') ADVANCE(68);
      END_STATE();
    case 22:
      if (lookahead == 'E') ADVANCE(32);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(46);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(157);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(151);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(12);
      if (lookahead == 'T') ADVANCE(52);
      END_STATE();
    case 27:
      if (lookahead == 'E') ADVANCE(19);
      END_STATE();
    case 28:
      if (lookahead == 'E') ADVANCE(53);
      END_STATE();
    case 29:
      if (lookahead == 'F') ADVANCE(100);
      END_STATE();
    case 30:
      if (lookahead == 'H') ADVANCE(159);
      END_STATE();
    case 31:
      if (lookahead == 'I') ADVANCE(37);
      END_STATE();
    case 32:
      if (lookahead == 'L') ADVANCE(28);
      END_STATE();
    case 33:
      if (lookahead == 'N') ADVANCE(35);
      END_STATE();
    case 34:
      if (lookahead == 'N') ADVANCE(43);
      END_STATE();
    case 35:
      if (lookahead == 'N') ADVANCE(27);
      END_STATE();
    case 36:
      if (lookahead == 'O') ADVANCE(33);
      END_STATE();
    case 37:
      if (lookahead == 'O') ADVANCE(34);
      END_STATE();
    case 38:
      if (lookahead == 'P') ADVANCE(251);
      END_STATE();
    case 39:
      if (lookahead == 'P') ADVANCE(66);
      END_STATE();
    case 40:
      if (lookahead == 'P') ADVANCE(47);
      END_STATE();
    case 41:
      if (lookahead == 'P') ADVANCE(71);
      END_STATE();
    case 42:
      if (lookahead == 'R') ADVANCE(13);
      END_STATE();
    case 43:
      if (lookahead == 'S') ADVANCE(155);
      END_STATE();
    case 44:
      if (lookahead == 'S') ADVANCE(126);
      END_STATE();
    case 45:
      if (lookahead == 'S') ADVANCE(50);
      END_STATE();
    case 46:
      if (lookahead == 'T') ADVANCE(143);
      END_STATE();
    case 47:
      if (lookahead == 'T') ADVANCE(31);
      END_STATE();
    case 48:
      if (lookahead == 'T') ADVANCE(17);
      END_STATE();
    case 49:
      if (lookahead == 'T') ADVANCE(149);
      END_STATE();
    case 50:
      if (lookahead == 'T') ADVANCE(147);
      END_STATE();
    case 51:
      if (lookahead == 'T') ADVANCE(153);
      END_STATE();
    case 52:
      if (lookahead == 'T') ADVANCE(38);
      END_STATE();
    case 53:
      if (lookahead == 'T') ADVANCE(25);
      END_STATE();
    case 54:
      if (lookahead == ']') ADVANCE(165);
      END_STATE();
    case 55:
      if (lookahead == ']') ADVANCE(167);
      END_STATE();
    case 56:
      if (lookahead == ']') ADVANCE(164);
      END_STATE();
    case 57:
      if (lookahead == ']') ADVANCE(163);
      END_STATE();
    case 58:
      if (lookahead == ']') ADVANCE(166);
      END_STATE();
    case 59:
      if (lookahead == ']') ADVANCE(162);
      END_STATE();
    case 60:
      if (lookahead == '`') ADVANCE(229);
      END_STATE();
    case 61:
      if (lookahead == '`') ADVANCE(228);
      END_STATE();
    case 62:
      if (lookahead == '`') ADVANCE(61);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(14);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 75:
      if (lookahead == 'g') ADVANCE(41);
      END_STATE();
    case 76:
      if (lookahead == 'h') ADVANCE(105);
      END_STATE();
    case 77:
      if (lookahead == 'h') ADVANCE(56);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 83:
      if (lookahead == 'k') ADVANCE(80);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(231);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(232);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 87:
      if (lookahead == 'm') ADVANCE(39);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(84);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(117);
      END_STATE();
    case 91:
      if (lookahead == 'm') ADVANCE(119);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(230);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 101:
      if (lookahead == 'p') ADVANCE(121);
      END_STATE();
    case 102:
      if (lookahead == 'p') ADVANCE(76);
      END_STATE();
    case 103:
      if (lookahead == 'p') ADVANCE(11);
      END_STATE();
    case 104:
      if (lookahead == 'p') ADVANCE(67);
      END_STATE();
    case 105:
      if (lookahead == 'q') ADVANCE(85);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 118:
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 119:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 128:
      if (lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 129:
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 130:
      if (lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 131:
      if (lookahead == 'y') ADVANCE(44);
      END_STATE();
    case 132:
      if (lookahead == '{') ADVANCE(137);
      END_STATE();
    case 133:
      if (lookahead == '}') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(134);
      END_STATE();
    case 134:
      if (lookahead == '}') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(134);
      END_STATE();
    case 135:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      END_STATE();
    case 136:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 137:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(134);
      END_STATE();
    case 138:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(161);
      END_STATE();
    case 139:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(139);
      if (lookahead == '}') ADVANCE(247);
      END_STATE();
    case 140:
      if (eof) ADVANCE(142);
      if (lookahead == '#') ADVANCE(255);
      if (lookahead == 'C') ADVANCE(36);
      if (lookahead == 'D') ADVANCE(22);
      if (lookahead == 'G') ADVANCE(23);
      if (lookahead == 'H') ADVANCE(26);
      if (lookahead == 'O') ADVANCE(40);
      if (lookahead == 'P') ADVANCE(15);
      if (lookahead == 'T') ADVANCE(42);
      if (lookahead == '`') ADVANCE(62);
      if (lookahead == 'h') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(140)
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(136);
      END_STATE();
    case 141:
      if (eof) ADVANCE(142);
      if (lookahead == '#') ADVANCE(255);
      if (sym_key_character_set_1(lookahead)) ADVANCE(220);
      if (lookahead == 'C') ADVANCE(198);
      if (lookahead == 'D') ADVANCE(189);
      if (lookahead == 'G') ADVANCE(186);
      if (lookahead == 'H') ADVANCE(179);
      if (lookahead == 'O') ADVANCE(201);
      if (lookahead == 'P') ADVANCE(178);
      if (lookahead == 'T') ADVANCE(202);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == '`') ADVANCE(236);
      if (lookahead == 'b') ADVANCE(219);
      if (lookahead == 'h') ADVANCE(215);
      if (lookahead == '{') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(141)
      END_STATE();
    case 142:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_GET);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_POST);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_PATCH);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LBRACKQueryStringParams_RBRACK);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_LBRACKFormParams_RBRACK);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_LBRACKBasicAuth_RBRACK);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_LBRACKCookies_RBRACK);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_LBRACKMultipartFormData_RBRACK);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_LBRACKOptions_RBRACK);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == ' ') ADVANCE(226);
      if (('!' <= lookahead && lookahead <= '|') ||
          lookahead == '~') ADVANCE(223);
      if (lookahead == '}') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(134);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '}') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(134);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'K') ||
          ('M' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead == 'L') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead == 'O') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead == 's') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead == 'E') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead == 'a') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= 'T') ||
          ('V' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead == 'A') ADVANCE(207);
      if (lookahead == 'O') ADVANCE(204);
      if (lookahead == 'U') ADVANCE(208);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead == 'E') ADVANCE(213);
      if (lookahead == 'T') ADVANCE(211);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '3') ||
          ('5' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead == '4') ADVANCE(240);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '5') ||
          ('7' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead == '6') ADVANCE(180);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'A' ||
          lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead == 'C') ADVANCE(192);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'A' ||
          lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead == 'C') ADVANCE(187);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'A' ||
          lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead == 'C') ADVANCE(210);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('E' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead == 'D') ADVANCE(146);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead == 'E') ADVANCE(205);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead == 'E') ADVANCE(158);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead == 'E') ADVANCE(152);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead == 'E') ADVANCE(194);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead == 'E') ADVANCE(184);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead == 'E') ADVANCE(212);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'G') ||
          ('I' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead == 'H') ADVANCE(160);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'H') ||
          ('J' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead == 'I') ADVANCE(199);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'K') ||
          ('M' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead == 'L') ADVANCE(191);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead == 'N') ADVANCE(190);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead == 'N') ADVANCE(195);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead == 'N') ADVANCE(203);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead == 'O') ADVANCE(196);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead == 'O') ADVANCE(197);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead == 'P') ADVANCE(252);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead == 'P') ADVANCE(206);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Q') ||
          ('S' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead == 'R') ADVANCE(214);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead == 'S') ADVANCE(156);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead == 'S') ADVANCE(209);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead == 'T') ADVANCE(144);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead == 'T') ADVANCE(193);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead == 'T') ADVANCE(182);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead == 'T') ADVANCE(150);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead == 'T') ADVANCE(148);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead == 'T') ADVANCE(154);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead == 'T') ADVANCE(200);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead == 'T') ADVANCE(188);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead == 'A') ADVANCE(185);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead == 'A') ADVANCE(183);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'w') ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(220);
      if (lookahead == 'x') ADVANCE(245);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == ' ') ADVANCE(221);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('$' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(226);
      if (lookahead == '#') ADVANCE(227);
      if (lookahead == '{') ADVANCE(225);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == ' ') ADVANCE(226);
      if (('!' <= lookahead && lookahead <= '|') ||
          lookahead == '~') ADVANCE(223);
      if (lookahead == '}') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(134);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == ' ') ADVANCE(226);
      if (('!' <= lookahead && lookahead <= '|') ||
          lookahead == '~') ADVANCE(223);
      if (lookahead == '}') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(134);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == ' ') ADVANCE(226);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(134);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if ((' ' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(226);
      if (lookahead == '{') ADVANCE(224);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      if (lookahead == 'g') ADVANCE(108);
      if (lookahead == 'j') ADVANCE(118);
      if (lookahead == 'x') ADVANCE(89);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTEjson);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTExml);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTEgraphql);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead == '\n') ADVANCE(235);
      if (lookahead == '`') ADVANCE(255);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(235);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '`') ADVANCE(60);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_oneline_string_token1);
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead == '`') ADVANCE(255);
      if (lookahead != 0) ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_oneline_string_token1);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(239);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_oneline_string_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_base64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_oneline_base64);
      if (lookahead == '\n' ||
          lookahead == ' ') ADVANCE(243);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_oneline_base64);
      if (lookahead == '\n' ||
          lookahead == ' ' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_hex);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_oneline_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_json);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(139);
      if (lookahead == '}') ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT0);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT1);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH2);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_HTTP);
      if (lookahead == '/') ADVANCE(9);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_HTTP);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead == '/') ADVANCE(9);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_status);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 140},
  [2] = {.lex_state = 141},
  [3] = {.lex_state = 141},
  [4] = {.lex_state = 141},
  [5] = {.lex_state = 141},
  [6] = {.lex_state = 141},
  [7] = {.lex_state = 141},
  [8] = {.lex_state = 140},
  [9] = {.lex_state = 140},
  [10] = {.lex_state = 140},
  [11] = {.lex_state = 140},
  [12] = {.lex_state = 140},
  [13] = {.lex_state = 140},
  [14] = {.lex_state = 140},
  [15] = {.lex_state = 140},
  [16] = {.lex_state = 140},
  [17] = {.lex_state = 140},
  [18] = {.lex_state = 140},
  [19] = {.lex_state = 140},
  [20] = {.lex_state = 140},
  [21] = {.lex_state = 140},
  [22] = {.lex_state = 140},
  [23] = {.lex_state = 140},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 140},
  [30] = {.lex_state = 140},
  [31] = {.lex_state = 140},
  [32] = {.lex_state = 140},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 140},
  [37] = {.lex_state = 140},
  [38] = {.lex_state = 140},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 238},
  [43] = {.lex_state = 140},
  [44] = {.lex_state = 140},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 140},
  [48] = {.lex_state = 0},
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
    [anon_sym_hex] = ACTIONS(1),
    [sym_oneline_hex] = ACTIONS(1),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(1),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(1),
    [anon_sym_HTTP_SLASH2] = ACTIONS(1),
    [anon_sym_HTTP] = ACTIONS(1),
    [sym_status] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(39),
    [sym_request_response] = STATE(18),
    [sym_request] = STATE(8),
    [sym_http_method] = STATE(38),
    [aux_sym_source_file_repeat1] = STATE(18),
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
    [sym_input] = STATE(9),
    [sym__multiline_string_body] = STATE(19),
    [sym__json_language_hint] = STATE(19),
    [sym__xml_language_hint] = STATE(19),
    [sym__graphql_language_hint] = STATE(19),
    [sym_oneline_string] = STATE(19),
    [sym__base64] = STATE(19),
    [sym__hex] = STATE(19),
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
    [anon_sym_hex] = ACTIONS(27),
    [sym_json] = ACTIONS(29),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(7),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(7),
    [anon_sym_HTTP_SLASH2] = ACTIONS(7),
    [anon_sym_HTTP] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_request_param_keyword] = STATE(4),
    [sym_input] = STATE(20),
    [sym__multiline_string_body] = STATE(19),
    [sym__json_language_hint] = STATE(19),
    [sym__xml_language_hint] = STATE(19),
    [sym__graphql_language_hint] = STATE(19),
    [sym_oneline_string] = STATE(19),
    [sym__base64] = STATE(19),
    [sym__hex] = STATE(19),
    [sym_pair] = STATE(4),
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
    [anon_sym_hex] = ACTIONS(27),
    [sym_json] = ACTIONS(29),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(31),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(31),
    [anon_sym_HTTP_SLASH2] = ACTIONS(31),
    [anon_sym_HTTP] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_request_param_keyword] = STATE(4),
    [sym_pair] = STATE(4),
    [aux_sym_request_repeat1] = STATE(4),
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
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(39),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(39),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(39),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(39),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(39),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(39),
    [sym_key] = ACTIONS(42),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(37),
    [anon_sym_BQUOTE_BQUOTE_BQUOTEjson] = ACTIONS(35),
    [anon_sym_BQUOTE_BQUOTE_BQUOTExml] = ACTIONS(35),
    [anon_sym_BQUOTE_BQUOTE_BQUOTEgraphql] = ACTIONS(35),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [anon_sym_base64] = ACTIONS(37),
    [anon_sym_hex] = ACTIONS(37),
    [sym_json] = ACTIONS(35),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(35),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(35),
    [anon_sym_HTTP_SLASH2] = ACTIONS(35),
    [anon_sym_HTTP] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 14,
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
    ACTIONS(47), 15,
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
      anon_sym_hex,
      anon_sym_HTTP,
  [37] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 14,
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
    ACTIONS(51), 15,
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
      anon_sym_hex,
      anon_sym_HTTP,
  [74] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 14,
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
    ACTIONS(55), 15,
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
      anon_sym_hex,
      anon_sym_HTTP,
  [111] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_HTTP,
    STATE(21), 1,
      sym_version_and_status,
    STATE(23), 1,
      sym_response,
    STATE(29), 1,
      sym_http_version,
    ACTIONS(59), 3,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
    ACTIONS(57), 10,
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
  [144] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_HTTP,
    ACTIONS(31), 13,
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
  [166] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_HTTP,
    ACTIONS(63), 13,
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
  [188] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_request,
    STATE(38), 1,
      sym_http_method,
    STATE(11), 2,
      sym_request_response,
      aux_sym_source_file_repeat1,
    ACTIONS(69), 9,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
  [216] = 3,
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
  [238] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_HTTP,
    ACTIONS(76), 13,
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
  [260] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_HTTP,
    ACTIONS(80), 13,
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
  [282] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_HTTP,
    ACTIONS(84), 13,
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
  [304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_HTTP,
    ACTIONS(88), 13,
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
  [326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_HTTP,
    ACTIONS(92), 13,
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
  [348] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_request,
    STATE(38), 1,
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
  [376] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_HTTP,
    ACTIONS(98), 13,
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
  [398] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_HTTP,
    ACTIONS(102), 13,
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
  [420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 10,
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
  [436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 10,
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
  [452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 10,
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
  [468] = 3,
    ACTIONS(114), 1,
      sym_comment,
    STATE(5), 1,
      sym_value,
    ACTIONS(112), 2,
      sym_variable,
      aux_sym_value_token1,
  [479] = 3,
    ACTIONS(114), 1,
      sym_comment,
    ACTIONS(116), 1,
      aux_sym_multiline_string_token1,
    STATE(32), 1,
      sym_inner_language_hint,
  [489] = 3,
    ACTIONS(114), 1,
      sym_comment,
    ACTIONS(116), 1,
      aux_sym_multiline_string_token1,
    STATE(31), 1,
      sym_inner_language_hint,
  [499] = 3,
    ACTIONS(114), 1,
      sym_comment,
    ACTIONS(118), 1,
      aux_sym_multiline_string_token1,
    STATE(47), 1,
      sym_multiline_string,
  [509] = 3,
    ACTIONS(114), 1,
      sym_comment,
    ACTIONS(116), 1,
      aux_sym_multiline_string_token1,
    STATE(30), 1,
      sym_inner_language_hint,
  [519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      sym_status,
  [526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_BQUOTE,
  [554] = 2,
    ACTIONS(114), 1,
      sym_comment,
    ACTIONS(130), 1,
      sym_oneline_base64,
  [561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      sym_oneline_hex,
  [568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      sym_status,
  [575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      sym_url,
  [582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      sym_url,
  [589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
  [596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_COMMA,
  [603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_COMMA,
  [610] = 2,
    ACTIONS(114), 1,
      sym_comment,
    ACTIONS(146), 1,
      aux_sym_oneline_string_token1,
  [617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_SEMI,
  [638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_SEMI,
  [645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 37,
  [SMALL_STATE(7)] = 74,
  [SMALL_STATE(8)] = 111,
  [SMALL_STATE(9)] = 144,
  [SMALL_STATE(10)] = 166,
  [SMALL_STATE(11)] = 188,
  [SMALL_STATE(12)] = 216,
  [SMALL_STATE(13)] = 238,
  [SMALL_STATE(14)] = 260,
  [SMALL_STATE(15)] = 282,
  [SMALL_STATE(16)] = 304,
  [SMALL_STATE(17)] = 326,
  [SMALL_STATE(18)] = 348,
  [SMALL_STATE(19)] = 376,
  [SMALL_STATE(20)] = 398,
  [SMALL_STATE(21)] = 420,
  [SMALL_STATE(22)] = 436,
  [SMALL_STATE(23)] = 452,
  [SMALL_STATE(24)] = 468,
  [SMALL_STATE(25)] = 479,
  [SMALL_STATE(26)] = 489,
  [SMALL_STATE(27)] = 499,
  [SMALL_STATE(28)] = 509,
  [SMALL_STATE(29)] = 519,
  [SMALL_STATE(30)] = 526,
  [SMALL_STATE(31)] = 533,
  [SMALL_STATE(32)] = 540,
  [SMALL_STATE(33)] = 547,
  [SMALL_STATE(34)] = 554,
  [SMALL_STATE(35)] = 561,
  [SMALL_STATE(36)] = 568,
  [SMALL_STATE(37)] = 575,
  [SMALL_STATE(38)] = 582,
  [SMALL_STATE(39)] = 589,
  [SMALL_STATE(40)] = 596,
  [SMALL_STATE(41)] = 603,
  [SMALL_STATE(42)] = 610,
  [SMALL_STATE(43)] = 617,
  [SMALL_STATE(44)] = 624,
  [SMALL_STATE(45)] = 631,
  [SMALL_STATE(46)] = 638,
  [SMALL_STATE(47)] = 645,
  [SMALL_STATE(48)] = 652,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(7),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(48),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_param_keyword, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_param_keyword, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_response, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hex, 4),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hex, 4),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(37),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__base64, 4),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__base64, 4),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string, 3),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__graphql_language_hint, 3, .production_id = 2),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__graphql_language_hint, 3, .production_id = 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xml_language_hint, 3, .production_id = 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xml_language_hint, 3, .production_id = 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_language_hint, 3),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__json_language_hint, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_string_body, 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_string_body, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_and_status, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_response, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_method, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [140] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inner_language_hint, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
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
