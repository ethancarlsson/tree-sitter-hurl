#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 55
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 69
#define ALIAS_COUNT 2
#define TOKEN_COUNT 44
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
  anon_sym_file = 33,
  sym_filename_escaped_char = 34,
  sym_filename_text = 35,
  sym_json = 36,
  anon_sym_HTTP_SLASH1_DOT0 = 37,
  anon_sym_HTTP_SLASH1_DOT1 = 38,
  anon_sym_HTTP_SLASH2 = 39,
  anon_sym_HTTP = 40,
  sym_status = 41,
  anon_sym_COLON = 42,
  sym_comment = 43,
  sym_source_file = 44,
  sym_request_response = 45,
  sym_request = 46,
  sym_http_method = 47,
  sym_request_param_keyword = 48,
  sym_value = 49,
  sym_input = 50,
  sym__multiline_string_body = 51,
  sym__json_language_hint = 52,
  sym__xml_language_hint = 53,
  sym__graphql_language_hint = 54,
  sym_multiline_string = 55,
  sym_oneline_string = 56,
  sym__base64 = 57,
  sym__hex = 58,
  sym__oneline_file = 59,
  sym_filename = 60,
  sym_inner_language_hint = 61,
  sym_response = 62,
  sym_version_and_status = 63,
  sym_http_version = 64,
  sym_pair = 65,
  aux_sym_source_file_repeat1 = 66,
  aux_sym_request_repeat1 = 67,
  aux_sym_filename_repeat1 = 68,
  alias_sym_graphql = 69,
  alias_sym_xml = 70,
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
  [anon_sym_file] = "file",
  [sym_filename_escaped_char] = "filename_escaped_char",
  [sym_filename_text] = "filename_text",
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
  [sym__oneline_file] = "_oneline_file",
  [sym_filename] = "filename",
  [sym_inner_language_hint] = "json",
  [sym_response] = "response",
  [sym_version_and_status] = "version_and_status",
  [sym_http_version] = "http_version",
  [sym_pair] = "pair",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_request_repeat1] = "request_repeat1",
  [aux_sym_filename_repeat1] = "filename_repeat1",
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
  [anon_sym_file] = anon_sym_file,
  [sym_filename_escaped_char] = sym_filename_escaped_char,
  [sym_filename_text] = sym_filename_text,
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
  [sym__oneline_file] = sym__oneline_file,
  [sym_filename] = sym_filename,
  [sym_inner_language_hint] = sym_json,
  [sym_response] = sym_response,
  [sym_version_and_status] = sym_version_and_status,
  [sym_http_version] = sym_http_version,
  [sym_pair] = sym_pair,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_request_repeat1] = aux_sym_request_repeat1,
  [aux_sym_filename_repeat1] = aux_sym_filename_repeat1,
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
  [anon_sym_file] = {
    .visible = true,
    .named = false,
  },
  [sym_filename_escaped_char] = {
    .visible = true,
    .named = true,
  },
  [sym_filename_text] = {
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
  [sym__oneline_file] = {
    .visible = false,
    .named = true,
  },
  [sym_filename] = {
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
  [aux_sym_filename_repeat1] = {
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
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
};

static inline bool sym_key_character_set_1(int32_t c) {
  return (c < 'U'
    ? (c < 'E'
      ? (c < '0'
        ? c == '-'
        : (c <= '9' || (c >= 'A' && c <= 'B')))
      : (c <= 'F' || (c < 'Q'
        ? (c >= 'I' && c <= 'N')
        : c <= 'S')))
    : (c <= 'Z' || (c < 'c'
      ? (c < 'a'
        ? c == '_'
        : c <= 'a')
      : (c <= 'e' || (c < 'i'
        ? c == 'g'
        : c <= 'z')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(144);
      if (lookahead == '#') ADVANCE(265);
      if (lookahead == ',') ADVANCE(247);
      if (lookahead == '-' ||
          ('I' <= lookahead && lookahead <= 'N') ||
          ('Q' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'g' ||
          ('i' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == ';') ADVANCE(248);
      if (lookahead == 'C') ADVANCE(173);
      if (lookahead == 'D') ADVANCE(176);
      if (lookahead == 'G') ADVANCE(189);
      if (lookahead == 'H') ADVANCE(182);
      if (lookahead == 'O') ADVANCE(204);
      if (lookahead == 'P') ADVANCE(181);
      if (lookahead == 'T') ADVANCE(205);
      if (lookahead == '[') ADVANCE(17);
      if (lookahead == '\\') ADVANCE(136);
      if (lookahead == '`') ADVANCE(242);
      if (lookahead == 'b') ADVANCE(177);
      if (lookahead == 'f') ADVANCE(174);
      if (lookahead == 'h') ADVANCE(218);
      if (lookahead == '{') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '0' ||
          ('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(180);
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(179);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(227);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('$' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(232);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '{') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(265);
      if (lookahead == ';') ADVANCE(248);
      if (lookahead == '\\') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(255);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0) ADVANCE(256);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(3)
      if (lookahead == '\n' ||
          lookahead == ' ') ADVANCE(249);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(252);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(241);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(140);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(258);
      if (lookahead == '1') ADVANCE(259);
      END_STATE();
    case 10:
      if (lookahead == '1') ADVANCE(6);
      if (lookahead == '2') ADVANCE(260);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(8);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(19);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(131);
      END_STATE();
    case 16:
      if (lookahead == 'A') ADVANCE(49);
      if (lookahead == 'O') ADVANCE(46);
      if (lookahead == 'U') ADVANCE(50);
      END_STATE();
    case 17:
      if (lookahead == 'B') ADVANCE(64);
      if (lookahead == 'C') ADVANCE(100);
      if (lookahead == 'F') ADVANCE(96);
      if (lookahead == 'M') ADVANCE(129);
      if (lookahead == 'O') ADVANCE(102);
      if (lookahead == 'Q') ADVANCE(130);
      END_STATE();
    case 18:
      if (lookahead == 'C') ADVANCE(31);
      END_STATE();
    case 19:
      if (lookahead == 'C') ADVANCE(25);
      END_STATE();
    case 20:
      if (lookahead == 'C') ADVANCE(52);
      END_STATE();
    case 21:
      if (lookahead == 'D') ADVANCE(147);
      END_STATE();
    case 22:
      if (lookahead == 'D') ADVANCE(69);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(33);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(47);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(159);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(153);
      END_STATE();
    case 27:
      if (lookahead == 'E') ADVANCE(13);
      if (lookahead == 'T') ADVANCE(53);
      END_STATE();
    case 28:
      if (lookahead == 'E') ADVANCE(20);
      END_STATE();
    case 29:
      if (lookahead == 'E') ADVANCE(54);
      END_STATE();
    case 30:
      if (lookahead == 'F') ADVANCE(101);
      END_STATE();
    case 31:
      if (lookahead == 'H') ADVANCE(161);
      END_STATE();
    case 32:
      if (lookahead == 'I') ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == 'L') ADVANCE(29);
      END_STATE();
    case 34:
      if (lookahead == 'N') ADVANCE(36);
      END_STATE();
    case 35:
      if (lookahead == 'N') ADVANCE(44);
      END_STATE();
    case 36:
      if (lookahead == 'N') ADVANCE(28);
      END_STATE();
    case 37:
      if (lookahead == 'O') ADVANCE(34);
      END_STATE();
    case 38:
      if (lookahead == 'O') ADVANCE(35);
      END_STATE();
    case 39:
      if (lookahead == 'P') ADVANCE(261);
      END_STATE();
    case 40:
      if (lookahead == 'P') ADVANCE(67);
      END_STATE();
    case 41:
      if (lookahead == 'P') ADVANCE(48);
      END_STATE();
    case 42:
      if (lookahead == 'P') ADVANCE(72);
      END_STATE();
    case 43:
      if (lookahead == 'R') ADVANCE(14);
      END_STATE();
    case 44:
      if (lookahead == 'S') ADVANCE(157);
      END_STATE();
    case 45:
      if (lookahead == 'S') ADVANCE(127);
      END_STATE();
    case 46:
      if (lookahead == 'S') ADVANCE(51);
      END_STATE();
    case 47:
      if (lookahead == 'T') ADVANCE(145);
      END_STATE();
    case 48:
      if (lookahead == 'T') ADVANCE(32);
      END_STATE();
    case 49:
      if (lookahead == 'T') ADVANCE(18);
      END_STATE();
    case 50:
      if (lookahead == 'T') ADVANCE(151);
      END_STATE();
    case 51:
      if (lookahead == 'T') ADVANCE(149);
      END_STATE();
    case 52:
      if (lookahead == 'T') ADVANCE(155);
      END_STATE();
    case 53:
      if (lookahead == 'T') ADVANCE(39);
      END_STATE();
    case 54:
      if (lookahead == 'T') ADVANCE(26);
      END_STATE();
    case 55:
      if (lookahead == ']') ADVANCE(167);
      END_STATE();
    case 56:
      if (lookahead == ']') ADVANCE(169);
      END_STATE();
    case 57:
      if (lookahead == ']') ADVANCE(166);
      END_STATE();
    case 58:
      if (lookahead == ']') ADVANCE(165);
      END_STATE();
    case 59:
      if (lookahead == ']') ADVANCE(168);
      END_STATE();
    case 60:
      if (lookahead == ']') ADVANCE(164);
      END_STATE();
    case 61:
      if (lookahead == '`') ADVANCE(235);
      END_STATE();
    case 62:
      if (lookahead == '`') ADVANCE(234);
      END_STATE();
    case 63:
      if (lookahead == '`') ADVANCE(62);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(15);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 76:
      if (lookahead == 'g') ADVANCE(42);
      END_STATE();
    case 77:
      if (lookahead == 'h') ADVANCE(106);
      END_STATE();
    case 78:
      if (lookahead == 'h') ADVANCE(57);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 84:
      if (lookahead == 'k') ADVANCE(81);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(237);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(238);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(22);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(85);
      END_STATE();
    case 91:
      if (lookahead == 'm') ADVANCE(118);
      END_STATE();
    case 92:
      if (lookahead == 'm') ADVANCE(120);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(236);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 102:
      if (lookahead == 'p') ADVANCE(122);
      END_STATE();
    case 103:
      if (lookahead == 'p') ADVANCE(77);
      END_STATE();
    case 104:
      if (lookahead == 'p') ADVANCE(12);
      END_STATE();
    case 105:
      if (lookahead == 'p') ADVANCE(68);
      END_STATE();
    case 106:
      if (lookahead == 'q') ADVANCE(86);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 118:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 119:
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 120:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 129:
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 130:
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 131:
      if (lookahead == 'u') ADVANCE(123);
      END_STATE();
    case 132:
      if (lookahead == 'y') ADVANCE(45);
      END_STATE();
    case 133:
      if (lookahead == '{') ADVANCE(139);
      END_STATE();
    case 134:
      if (lookahead == '}') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(135);
      END_STATE();
    case 135:
      if (lookahead == '}') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(135);
      END_STATE();
    case 136:
      if (lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';') ADVANCE(254);
      END_STATE();
    case 137:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 138:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 139:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(135);
      END_STATE();
    case 140:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(163);
      END_STATE();
    case 141:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(141);
      if (lookahead == '}') ADVANCE(257);
      END_STATE();
    case 142:
      if (eof) ADVANCE(144);
      if (lookahead == '#') ADVANCE(265);
      if (lookahead == 'C') ADVANCE(37);
      if (lookahead == 'D') ADVANCE(23);
      if (lookahead == 'G') ADVANCE(24);
      if (lookahead == 'H') ADVANCE(27);
      if (lookahead == 'O') ADVANCE(41);
      if (lookahead == 'P') ADVANCE(16);
      if (lookahead == 'T') ADVANCE(43);
      if (lookahead == '`') ADVANCE(63);
      if (lookahead == 'h') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(142)
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(138);
      END_STATE();
    case 143:
      if (eof) ADVANCE(144);
      if (lookahead == '#') ADVANCE(265);
      if (sym_key_character_set_1(lookahead)) ADVANCE(226);
      if (lookahead == 'C') ADVANCE(201);
      if (lookahead == 'D') ADVANCE(192);
      if (lookahead == 'G') ADVANCE(189);
      if (lookahead == 'H') ADVANCE(182);
      if (lookahead == 'O') ADVANCE(204);
      if (lookahead == 'P') ADVANCE(181);
      if (lookahead == 'T') ADVANCE(205);
      if (lookahead == '[') ADVANCE(17);
      if (lookahead == '`') ADVANCE(242);
      if (lookahead == 'b') ADVANCE(225);
      if (lookahead == 'f') ADVANCE(221);
      if (lookahead == 'h') ADVANCE(218);
      if (lookahead == '{') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(143)
      END_STATE();
    case 144:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_GET);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_POST);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_PATCH);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_LBRACKQueryStringParams_RBRACK);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_LBRACKFormParams_RBRACK);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_LBRACKBasicAuth_RBRACK);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_LBRACKCookies_RBRACK);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_LBRACKMultipartFormData_RBRACK);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_LBRACKOptions_RBRACK);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == ' ') ADVANCE(232);
      if (('!' <= lookahead && lookahead <= '|') ||
          lookahead == '~') ADVANCE(229);
      if (lookahead == '}') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(135);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '}') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(135);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'K') ||
          ('M' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == 'L') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == 'O') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'g' ||
          lookahead == 'h' ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == 'i') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == 's') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == 'E') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == 'a') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= 'T') ||
          ('V' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == 'A') ADVANCE(210);
      if (lookahead == 'O') ADVANCE(207);
      if (lookahead == 'U') ADVANCE(211);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == 'E') ADVANCE(216);
      if (lookahead == 'T') ADVANCE(214);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '3') ||
          ('5' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == '4') ADVANCE(246);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '5') ||
          ('7' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == '6') ADVANCE(183);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'A' ||
          lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == 'C') ADVANCE(195);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'A' ||
          lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == 'C') ADVANCE(190);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'A' ||
          lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == 'C') ADVANCE(213);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('E' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == 'D') ADVANCE(148);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == 'E') ADVANCE(208);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == 'E') ADVANCE(160);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == 'E') ADVANCE(154);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == 'E') ADVANCE(197);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == 'E') ADVANCE(187);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == 'E') ADVANCE(215);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'G') ||
          ('I' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == 'H') ADVANCE(162);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'H') ||
          ('J' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == 'I') ADVANCE(202);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'K') ||
          ('M' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == 'L') ADVANCE(194);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == 'N') ADVANCE(193);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == 'N') ADVANCE(198);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == 'N') ADVANCE(206);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == 'O') ADVANCE(199);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == 'O') ADVANCE(200);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == 'P') ADVANCE(262);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == 'P') ADVANCE(209);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Q') ||
          ('S' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == 'R') ADVANCE(217);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == 'S') ADVANCE(158);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == 'S') ADVANCE(212);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == 'T') ADVANCE(146);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == 'T') ADVANCE(196);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == 'T') ADVANCE(185);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == 'T') ADVANCE(152);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == 'T') ADVANCE(150);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == 'T') ADVANCE(156);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == 'T') ADVANCE(203);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == 'T') ADVANCE(191);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == 'A') ADVANCE(188);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == 'A') ADVANCE(186);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == 'i') ADVANCE(222);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == 'l') ADVANCE(220);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == 's') ADVANCE(219);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'w') ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(226);
      if (lookahead == 'x') ADVANCE(251);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == 'a') ADVANCE(223);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == ' ') ADVANCE(227);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('$' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(232);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '{') ADVANCE(231);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == ' ') ADVANCE(232);
      if (('!' <= lookahead && lookahead <= '|') ||
          lookahead == '~') ADVANCE(229);
      if (lookahead == '}') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(135);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == ' ') ADVANCE(232);
      if (('!' <= lookahead && lookahead <= '|') ||
          lookahead == '~') ADVANCE(229);
      if (lookahead == '}') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(135);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == ' ') ADVANCE(232);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(135);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if ((' ' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(232);
      if (lookahead == '{') ADVANCE(230);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      if (lookahead == 'g') ADVANCE(109);
      if (lookahead == 'j') ADVANCE(119);
      if (lookahead == 'x') ADVANCE(90);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTEjson);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTExml);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTEgraphql);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead == '\n') ADVANCE(241);
      if (lookahead == '`') ADVANCE(265);
      if (lookahead != 0) ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(241);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '`') ADVANCE(61);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_oneline_string_token1);
      if (lookahead == '\n') ADVANCE(245);
      if (lookahead == '`') ADVANCE(265);
      if (lookahead != 0) ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_oneline_string_token1);
      if (lookahead == '#') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(245);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_oneline_string_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_base64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_oneline_base64);
      if (lookahead == '\n' ||
          lookahead == ' ') ADVANCE(249);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_oneline_base64);
      if (lookahead == '\n' ||
          lookahead == ' ' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_hex);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_oneline_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_file);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_filename_escaped_char);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(256);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_json);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(141);
      if (lookahead == '}') ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT0);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT1);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH2);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_HTTP);
      if (lookahead == '/') ADVANCE(10);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_HTTP);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead == '/') ADVANCE(10);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_status);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 142},
  [2] = {.lex_state = 143},
  [3] = {.lex_state = 143},
  [4] = {.lex_state = 143},
  [5] = {.lex_state = 143},
  [6] = {.lex_state = 143},
  [7] = {.lex_state = 143},
  [8] = {.lex_state = 142},
  [9] = {.lex_state = 142},
  [10] = {.lex_state = 142},
  [11] = {.lex_state = 142},
  [12] = {.lex_state = 142},
  [13] = {.lex_state = 142},
  [14] = {.lex_state = 142},
  [15] = {.lex_state = 142},
  [16] = {.lex_state = 142},
  [17] = {.lex_state = 142},
  [18] = {.lex_state = 142},
  [19] = {.lex_state = 142},
  [20] = {.lex_state = 142},
  [21] = {.lex_state = 142},
  [22] = {.lex_state = 142},
  [23] = {.lex_state = 142},
  [24] = {.lex_state = 142},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 142},
  [38] = {.lex_state = 142},
  [39] = {.lex_state = 142},
  [40] = {.lex_state = 142},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 142},
  [43] = {.lex_state = 142},
  [44] = {.lex_state = 142},
  [45] = {.lex_state = 142},
  [46] = {.lex_state = 142},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 142},
  [53] = {.lex_state = 244},
  [54] = {.lex_state = 0},
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
    [anon_sym_file] = ACTIONS(1),
    [sym_filename_escaped_char] = ACTIONS(1),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(1),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(1),
    [anon_sym_HTTP_SLASH2] = ACTIONS(1),
    [anon_sym_HTTP] = ACTIONS(1),
    [sym_status] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(41),
    [sym_request_response] = STATE(12),
    [sym_request] = STATE(8),
    [sym_http_method] = STATE(40),
    [aux_sym_source_file_repeat1] = STATE(12),
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
    [sym_request_param_keyword] = STATE(4),
    [sym_input] = STATE(11),
    [sym__multiline_string_body] = STATE(19),
    [sym__json_language_hint] = STATE(19),
    [sym__xml_language_hint] = STATE(19),
    [sym__graphql_language_hint] = STATE(19),
    [sym_oneline_string] = STATE(19),
    [sym__base64] = STATE(19),
    [sym__hex] = STATE(19),
    [sym__oneline_file] = STATE(19),
    [sym_pair] = STATE(4),
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
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(11),
    [sym_key] = ACTIONS(13),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(15),
    [anon_sym_BQUOTE_BQUOTE_BQUOTEjson] = ACTIONS(17),
    [anon_sym_BQUOTE_BQUOTE_BQUOTExml] = ACTIONS(19),
    [anon_sym_BQUOTE_BQUOTE_BQUOTEgraphql] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_base64] = ACTIONS(25),
    [anon_sym_hex] = ACTIONS(27),
    [anon_sym_file] = ACTIONS(29),
    [sym_json] = ACTIONS(31),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(7),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(7),
    [anon_sym_HTTP_SLASH2] = ACTIONS(7),
    [anon_sym_HTTP] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_request_param_keyword] = STATE(2),
    [sym_input] = STATE(18),
    [sym__multiline_string_body] = STATE(19),
    [sym__json_language_hint] = STATE(19),
    [sym__xml_language_hint] = STATE(19),
    [sym__graphql_language_hint] = STATE(19),
    [sym_oneline_string] = STATE(19),
    [sym__base64] = STATE(19),
    [sym__hex] = STATE(19),
    [sym__oneline_file] = STATE(19),
    [sym_pair] = STATE(2),
    [aux_sym_request_repeat1] = STATE(2),
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
    [anon_sym_file] = ACTIONS(29),
    [sym_json] = ACTIONS(31),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(33),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(33),
    [anon_sym_HTTP_SLASH2] = ACTIONS(33),
    [anon_sym_HTTP] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      sym_key,
    STATE(4), 3,
      sym_request_param_keyword,
      sym_pair,
      aux_sym_request_repeat1,
    ACTIONS(41), 6,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
    ACTIONS(37), 8,
      ts_builtin_sym_end,
      anon_sym_BQUOTE_BQUOTE_BQUOTEjson,
      anon_sym_BQUOTE_BQUOTE_BQUOTExml,
      anon_sym_BQUOTE_BQUOTE_BQUOTEgraphql,
      sym_json,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
    ACTIONS(39), 15,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_BQUOTE,
      anon_sym_base64,
      anon_sym_hex,
      anon_sym_file,
      anon_sym_HTTP,
  [47] = 3,
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
    ACTIONS(49), 16,
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
      anon_sym_file,
      anon_sym_HTTP,
  [85] = 3,
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
    ACTIONS(53), 16,
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
      anon_sym_file,
      anon_sym_HTTP,
  [123] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 14,
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
    ACTIONS(57), 16,
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
      anon_sym_file,
      anon_sym_HTTP,
  [161] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_HTTP,
    STATE(23), 1,
      sym_version_and_status,
    STATE(24), 1,
      sym_response,
    STATE(37), 1,
      sym_http_version,
    ACTIONS(61), 3,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
    ACTIONS(59), 10,
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
  [194] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_request,
    STATE(40), 1,
      sym_http_method,
    STATE(9), 2,
      sym_request_response,
      aux_sym_source_file_repeat1,
    ACTIONS(67), 9,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
  [222] = 3,
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
  [244] = 3,
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
  [266] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_request,
    STATE(40), 1,
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
  [294] = 3,
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
  [316] = 3,
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
  [338] = 3,
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
  [360] = 3,
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
  [382] = 3,
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
  [404] = 3,
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
  [426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_HTTP,
    ACTIONS(100), 13,
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
  [448] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_HTTP,
    ACTIONS(104), 13,
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
  [470] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_HTTP,
    ACTIONS(108), 13,
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
  [492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 10,
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
  [508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 10,
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
  [524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 10,
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
  [540] = 5,
    ACTIONS(118), 1,
      anon_sym_SEMI,
    ACTIONS(120), 1,
      sym_filename_escaped_char,
    ACTIONS(122), 1,
      sym_filename_text,
    ACTIONS(124), 1,
      sym_comment,
    STATE(27), 1,
      aux_sym_filename_repeat1,
  [556] = 5,
    ACTIONS(124), 1,
      sym_comment,
    ACTIONS(126), 1,
      sym_filename_escaped_char,
    ACTIONS(128), 1,
      sym_filename_text,
    STATE(25), 1,
      aux_sym_filename_repeat1,
    STATE(49), 1,
      sym_filename,
  [572] = 5,
    ACTIONS(124), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_SEMI,
    ACTIONS(132), 1,
      sym_filename_escaped_char,
    ACTIONS(135), 1,
      sym_filename_text,
    STATE(27), 1,
      aux_sym_filename_repeat1,
  [588] = 3,
    ACTIONS(124), 1,
      sym_comment,
    STATE(5), 1,
      sym_value,
    ACTIONS(138), 2,
      sym_variable,
      aux_sym_value_token1,
  [599] = 3,
    ACTIONS(124), 1,
      sym_comment,
    ACTIONS(140), 1,
      aux_sym_multiline_string_token1,
    STATE(38), 1,
      sym_inner_language_hint,
  [609] = 3,
    ACTIONS(124), 1,
      sym_comment,
    ACTIONS(140), 1,
      aux_sym_multiline_string_token1,
    STATE(39), 1,
      sym_inner_language_hint,
  [619] = 3,
    ACTIONS(124), 1,
      sym_comment,
    ACTIONS(140), 1,
      aux_sym_multiline_string_token1,
    STATE(42), 1,
      sym_inner_language_hint,
  [629] = 3,
    ACTIONS(124), 1,
      sym_comment,
    ACTIONS(142), 1,
      aux_sym_multiline_string_token1,
    STATE(44), 1,
      sym_multiline_string,
  [639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_COMMA,
  [646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_BQUOTE,
  [653] = 2,
    ACTIONS(124), 1,
      sym_comment,
    ACTIONS(148), 1,
      sym_oneline_base64,
  [660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      sym_oneline_hex,
  [667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      sym_status,
  [674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      sym_url,
  [695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
  [702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [709] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [716] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      sym_url,
  [737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_SEMI,
  [744] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_SEMI,
  [751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_SEMI,
  [758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_COMMA,
  [765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_COMMA,
  [772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      sym_status,
  [779] = 2,
    ACTIONS(124), 1,
      sym_comment,
    ACTIONS(184), 1,
      aux_sym_oneline_string_token1,
  [786] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 47,
  [SMALL_STATE(6)] = 85,
  [SMALL_STATE(7)] = 123,
  [SMALL_STATE(8)] = 161,
  [SMALL_STATE(9)] = 194,
  [SMALL_STATE(10)] = 222,
  [SMALL_STATE(11)] = 244,
  [SMALL_STATE(12)] = 266,
  [SMALL_STATE(13)] = 294,
  [SMALL_STATE(14)] = 316,
  [SMALL_STATE(15)] = 338,
  [SMALL_STATE(16)] = 360,
  [SMALL_STATE(17)] = 382,
  [SMALL_STATE(18)] = 404,
  [SMALL_STATE(19)] = 426,
  [SMALL_STATE(20)] = 448,
  [SMALL_STATE(21)] = 470,
  [SMALL_STATE(22)] = 492,
  [SMALL_STATE(23)] = 508,
  [SMALL_STATE(24)] = 524,
  [SMALL_STATE(25)] = 540,
  [SMALL_STATE(26)] = 556,
  [SMALL_STATE(27)] = 572,
  [SMALL_STATE(28)] = 588,
  [SMALL_STATE(29)] = 599,
  [SMALL_STATE(30)] = 609,
  [SMALL_STATE(31)] = 619,
  [SMALL_STATE(32)] = 629,
  [SMALL_STATE(33)] = 639,
  [SMALL_STATE(34)] = 646,
  [SMALL_STATE(35)] = 653,
  [SMALL_STATE(36)] = 660,
  [SMALL_STATE(37)] = 667,
  [SMALL_STATE(38)] = 674,
  [SMALL_STATE(39)] = 681,
  [SMALL_STATE(40)] = 688,
  [SMALL_STATE(41)] = 695,
  [SMALL_STATE(42)] = 702,
  [SMALL_STATE(43)] = 709,
  [SMALL_STATE(44)] = 716,
  [SMALL_STATE(45)] = 723,
  [SMALL_STATE(46)] = 730,
  [SMALL_STATE(47)] = 737,
  [SMALL_STATE(48)] = 744,
  [SMALL_STATE(49)] = 751,
  [SMALL_STATE(50)] = 758,
  [SMALL_STATE(51)] = 765,
  [SMALL_STATE(52)] = 772,
  [SMALL_STATE(53)] = 779,
  [SMALL_STATE(54)] = 786,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(7),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(54),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_param_keyword, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_param_keyword, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_response, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hex, 4),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hex, 4),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_string_body, 3),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_string_body, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_language_hint, 3),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__json_language_hint, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__oneline_file, 4),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__oneline_file, 4),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xml_language_hint, 3, .production_id = 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xml_language_hint, 3, .production_id = 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__graphql_language_hint, 3, .production_id = 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__graphql_language_hint, 3, .production_id = 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string, 3),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__base64, 4),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__base64, 4),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_and_status, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_response, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(27),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(27),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [160] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inner_language_hint, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_method, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
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
