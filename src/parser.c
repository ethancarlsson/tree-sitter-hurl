#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 56
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 70
#define ALIAS_COUNT 2
#define TOKEN_COUNT 45
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
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
  sym__sp = 10,
  sym_url = 11,
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
  anon_sym_base64 = 28,
  anon_sym_COMMA = 29,
  anon_sym_SEMI = 30,
  sym_oneline_base64 = 31,
  anon_sym_hex = 32,
  sym_oneline_hex = 33,
  anon_sym_file = 34,
  sym_filename_escaped_char = 35,
  sym_filename_text = 36,
  sym_json = 37,
  anon_sym_HTTP_SLASH1_DOT0 = 38,
  anon_sym_HTTP_SLASH1_DOT1 = 39,
  anon_sym_HTTP_SLASH2 = 40,
  anon_sym_HTTP = 41,
  sym_status = 42,
  anon_sym_COLON = 43,
  sym_comment = 44,
  sym_entry = 45,
  sym__request_response = 46,
  sym_request = 47,
  sym_http_method = 48,
  sym_request_param_keyword = 49,
  sym_value = 50,
  sym_input = 51,
  sym__multiline_string_body = 52,
  sym__json_language_hint = 53,
  sym__xml_language_hint = 54,
  sym__graphql_language_hint = 55,
  sym_multiline_string = 56,
  sym_oneline_string = 57,
  sym__base64 = 58,
  sym__hex = 59,
  sym__oneline_file = 60,
  sym_filename = 61,
  sym_inner_language_hint = 62,
  sym_response = 63,
  sym_version_and_status = 64,
  sym_http_version = 65,
  sym_pair = 66,
  aux_sym_entry_repeat1 = 67,
  aux_sym_request_repeat1 = 68,
  aux_sym_filename_repeat1 = 69,
  alias_sym_graphql = 70,
  alias_sym_xml = 71,
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
  [sym__sp] = "_sp",
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
  [sym_entry] = "entry",
  [sym__request_response] = "_request_response",
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
  [aux_sym_entry_repeat1] = "entry_repeat1",
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
  [sym__sp] = sym__sp,
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
  [sym_entry] = sym_entry,
  [sym__request_response] = sym__request_response,
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
  [aux_sym_entry_repeat1] = aux_sym_entry_repeat1,
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
  [sym__sp] = {
    .visible = false,
    .named = true,
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
  [sym_entry] = {
    .visible = true,
    .named = true,
  },
  [sym__request_response] = {
    .visible = false,
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
  [aux_sym_entry_repeat1] = {
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
  [55] = 55,
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
      if (eof) ADVANCE(145);
      if (lookahead == '#') ADVANCE(267);
      if (lookahead == ',') ADVANCE(249);
      if (lookahead == '-' ||
          ('I' <= lookahead && lookahead <= 'N') ||
          ('Q' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'g' ||
          ('i' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == ';') ADVANCE(250);
      if (lookahead == 'C') ADVANCE(175);
      if (lookahead == 'D') ADVANCE(178);
      if (lookahead == 'G') ADVANCE(191);
      if (lookahead == 'H') ADVANCE(184);
      if (lookahead == 'O') ADVANCE(206);
      if (lookahead == 'P') ADVANCE(183);
      if (lookahead == 'T') ADVANCE(207);
      if (lookahead == '[') ADVANCE(18);
      if (lookahead == '\\') ADVANCE(137);
      if (lookahead == '`') ADVANCE(244);
      if (lookahead == 'b') ADVANCE(179);
      if (lookahead == 'f') ADVANCE(176);
      if (lookahead == 'h') ADVANCE(220);
      if (lookahead == '{') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '0' ||
          ('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(182);
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(181);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(229);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('$' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(234);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '{') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(267);
      if (lookahead == ';') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(257);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0) ADVANCE(258);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(267);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == 'h') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(4)
      if (lookahead == '\n' ||
          lookahead == ' ') ADVANCE(251);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(139);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(241);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(243);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(141);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(260);
      if (lookahead == '1') ADVANCE(261);
      END_STATE();
    case 11:
      if (lookahead == '1') ADVANCE(7);
      if (lookahead == '2') ADVANCE(262);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(9);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == 'A') ADVANCE(132);
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(50);
      if (lookahead == 'O') ADVANCE(47);
      if (lookahead == 'U') ADVANCE(51);
      END_STATE();
    case 18:
      if (lookahead == 'B') ADVANCE(65);
      if (lookahead == 'C') ADVANCE(101);
      if (lookahead == 'F') ADVANCE(97);
      if (lookahead == 'M') ADVANCE(130);
      if (lookahead == 'O') ADVANCE(103);
      if (lookahead == 'Q') ADVANCE(131);
      END_STATE();
    case 19:
      if (lookahead == 'C') ADVANCE(32);
      END_STATE();
    case 20:
      if (lookahead == 'C') ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == 'C') ADVANCE(53);
      END_STATE();
    case 22:
      if (lookahead == 'D') ADVANCE(148);
      END_STATE();
    case 23:
      if (lookahead == 'D') ADVANCE(70);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(34);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(48);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(160);
      END_STATE();
    case 27:
      if (lookahead == 'E') ADVANCE(154);
      END_STATE();
    case 28:
      if (lookahead == 'E') ADVANCE(14);
      if (lookahead == 'T') ADVANCE(54);
      END_STATE();
    case 29:
      if (lookahead == 'E') ADVANCE(21);
      END_STATE();
    case 30:
      if (lookahead == 'E') ADVANCE(55);
      END_STATE();
    case 31:
      if (lookahead == 'F') ADVANCE(102);
      END_STATE();
    case 32:
      if (lookahead == 'H') ADVANCE(162);
      END_STATE();
    case 33:
      if (lookahead == 'I') ADVANCE(39);
      END_STATE();
    case 34:
      if (lookahead == 'L') ADVANCE(30);
      END_STATE();
    case 35:
      if (lookahead == 'N') ADVANCE(37);
      END_STATE();
    case 36:
      if (lookahead == 'N') ADVANCE(45);
      END_STATE();
    case 37:
      if (lookahead == 'N') ADVANCE(29);
      END_STATE();
    case 38:
      if (lookahead == 'O') ADVANCE(35);
      END_STATE();
    case 39:
      if (lookahead == 'O') ADVANCE(36);
      END_STATE();
    case 40:
      if (lookahead == 'P') ADVANCE(263);
      END_STATE();
    case 41:
      if (lookahead == 'P') ADVANCE(68);
      END_STATE();
    case 42:
      if (lookahead == 'P') ADVANCE(49);
      END_STATE();
    case 43:
      if (lookahead == 'P') ADVANCE(73);
      END_STATE();
    case 44:
      if (lookahead == 'R') ADVANCE(15);
      END_STATE();
    case 45:
      if (lookahead == 'S') ADVANCE(158);
      END_STATE();
    case 46:
      if (lookahead == 'S') ADVANCE(128);
      END_STATE();
    case 47:
      if (lookahead == 'S') ADVANCE(52);
      END_STATE();
    case 48:
      if (lookahead == 'T') ADVANCE(146);
      END_STATE();
    case 49:
      if (lookahead == 'T') ADVANCE(33);
      END_STATE();
    case 50:
      if (lookahead == 'T') ADVANCE(19);
      END_STATE();
    case 51:
      if (lookahead == 'T') ADVANCE(152);
      END_STATE();
    case 52:
      if (lookahead == 'T') ADVANCE(150);
      END_STATE();
    case 53:
      if (lookahead == 'T') ADVANCE(156);
      END_STATE();
    case 54:
      if (lookahead == 'T') ADVANCE(40);
      END_STATE();
    case 55:
      if (lookahead == 'T') ADVANCE(27);
      END_STATE();
    case 56:
      if (lookahead == ']') ADVANCE(169);
      END_STATE();
    case 57:
      if (lookahead == ']') ADVANCE(171);
      END_STATE();
    case 58:
      if (lookahead == ']') ADVANCE(168);
      END_STATE();
    case 59:
      if (lookahead == ']') ADVANCE(167);
      END_STATE();
    case 60:
      if (lookahead == ']') ADVANCE(170);
      END_STATE();
    case 61:
      if (lookahead == ']') ADVANCE(166);
      END_STATE();
    case 62:
      if (lookahead == '`') ADVANCE(237);
      END_STATE();
    case 63:
      if (lookahead == '`') ADVANCE(236);
      END_STATE();
    case 64:
      if (lookahead == '`') ADVANCE(63);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(16);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 77:
      if (lookahead == 'g') ADVANCE(43);
      END_STATE();
    case 78:
      if (lookahead == 'h') ADVANCE(107);
      END_STATE();
    case 79:
      if (lookahead == 'h') ADVANCE(58);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 85:
      if (lookahead == 'k') ADVANCE(82);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(239);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(240);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 91:
      if (lookahead == 'm') ADVANCE(86);
      END_STATE();
    case 92:
      if (lookahead == 'm') ADVANCE(119);
      END_STATE();
    case 93:
      if (lookahead == 'm') ADVANCE(121);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(238);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 103:
      if (lookahead == 'p') ADVANCE(123);
      END_STATE();
    case 104:
      if (lookahead == 'p') ADVANCE(78);
      END_STATE();
    case 105:
      if (lookahead == 'p') ADVANCE(13);
      END_STATE();
    case 106:
      if (lookahead == 'p') ADVANCE(69);
      END_STATE();
    case 107:
      if (lookahead == 'q') ADVANCE(87);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 118:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 119:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 120:
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 121:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 130:
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 131:
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 132:
      if (lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 133:
      if (lookahead == 'y') ADVANCE(46);
      END_STATE();
    case 134:
      if (lookahead == '{') ADVANCE(140);
      END_STATE();
    case 135:
      if (lookahead == '}') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(136);
      END_STATE();
    case 136:
      if (lookahead == '}') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(136);
      END_STATE();
    case 137:
      if (lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';') ADVANCE(256);
      END_STATE();
    case 138:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 139:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 140:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(136);
      END_STATE();
    case 141:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 142:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(142);
      if (lookahead == '}') ADVANCE(259);
      END_STATE();
    case 143:
      if (eof) ADVANCE(145);
      if (lookahead == '#') ADVANCE(267);
      if (lookahead == 'C') ADVANCE(38);
      if (lookahead == 'D') ADVANCE(24);
      if (lookahead == 'G') ADVANCE(25);
      if (lookahead == 'H') ADVANCE(28);
      if (lookahead == 'O') ADVANCE(42);
      if (lookahead == 'P') ADVANCE(17);
      if (lookahead == 'T') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(143)
      END_STATE();
    case 144:
      if (eof) ADVANCE(145);
      if (lookahead == '#') ADVANCE(267);
      if (sym_key_character_set_1(lookahead)) ADVANCE(228);
      if (lookahead == 'C') ADVANCE(203);
      if (lookahead == 'D') ADVANCE(194);
      if (lookahead == 'G') ADVANCE(191);
      if (lookahead == 'H') ADVANCE(184);
      if (lookahead == 'O') ADVANCE(206);
      if (lookahead == 'P') ADVANCE(183);
      if (lookahead == 'T') ADVANCE(207);
      if (lookahead == '[') ADVANCE(18);
      if (lookahead == '`') ADVANCE(244);
      if (lookahead == 'b') ADVANCE(227);
      if (lookahead == 'f') ADVANCE(223);
      if (lookahead == 'h') ADVANCE(220);
      if (lookahead == '{') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(144)
      END_STATE();
    case 145:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_GET);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_POST);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_PATCH);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__sp);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_LBRACKQueryStringParams_RBRACK);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_LBRACKFormParams_RBRACK);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_LBRACKBasicAuth_RBRACK);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_LBRACKCookies_RBRACK);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_LBRACKMultipartFormData_RBRACK);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_LBRACKOptions_RBRACK);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == ' ') ADVANCE(234);
      if (('!' <= lookahead && lookahead <= '|') ||
          lookahead == '~') ADVANCE(231);
      if (lookahead == '}') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(136);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '}') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(136);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'K') ||
          ('M' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == 'L') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(182);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == 'O') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(182);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'g' ||
          lookahead == 'h' ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == 'i') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(182);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == 's') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(182);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == 'E') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(182);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == 'a') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(182);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(182);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(182);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= 'T') ||
          ('V' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == 'A') ADVANCE(212);
      if (lookahead == 'O') ADVANCE(209);
      if (lookahead == 'U') ADVANCE(213);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == 'E') ADVANCE(218);
      if (lookahead == 'T') ADVANCE(216);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '3') ||
          ('5' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == '4') ADVANCE(248);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '5') ||
          ('7' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == '6') ADVANCE(185);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'A' ||
          lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == 'C') ADVANCE(197);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'A' ||
          lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == 'C') ADVANCE(192);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'A' ||
          lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == 'C') ADVANCE(215);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('E' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == 'D') ADVANCE(149);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == 'E') ADVANCE(210);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == 'E') ADVANCE(161);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == 'E') ADVANCE(155);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == 'E') ADVANCE(199);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == 'E') ADVANCE(189);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == 'E') ADVANCE(217);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'G') ||
          ('I' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == 'H') ADVANCE(163);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'H') ||
          ('J' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == 'I') ADVANCE(204);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'K') ||
          ('M' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == 'L') ADVANCE(196);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == 'N') ADVANCE(195);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == 'N') ADVANCE(200);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == 'N') ADVANCE(208);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == 'O') ADVANCE(201);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == 'O') ADVANCE(202);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == 'P') ADVANCE(264);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == 'P') ADVANCE(211);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Q') ||
          ('S' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == 'R') ADVANCE(219);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == 'S') ADVANCE(159);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == 'S') ADVANCE(214);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == 'T') ADVANCE(147);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == 'T') ADVANCE(198);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == 'T') ADVANCE(187);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == 'T') ADVANCE(153);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == 'T') ADVANCE(151);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == 'T') ADVANCE(157);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == 'T') ADVANCE(205);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == 'T') ADVANCE(193);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == 'A') ADVANCE(190);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == 'A') ADVANCE(188);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == 'i') ADVANCE(224);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == 'l') ADVANCE(222);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == 's') ADVANCE(221);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'w') ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(228);
      if (lookahead == 'x') ADVANCE(253);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == ' ') ADVANCE(229);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('$' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(234);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '{') ADVANCE(233);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == ' ') ADVANCE(234);
      if (('!' <= lookahead && lookahead <= '|') ||
          lookahead == '~') ADVANCE(231);
      if (lookahead == '}') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(136);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == ' ') ADVANCE(234);
      if (('!' <= lookahead && lookahead <= '|') ||
          lookahead == '~') ADVANCE(231);
      if (lookahead == '}') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(136);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == ' ') ADVANCE(234);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(136);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if ((' ' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(234);
      if (lookahead == '{') ADVANCE(232);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(267);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      if (lookahead == 'g') ADVANCE(110);
      if (lookahead == 'j') ADVANCE(120);
      if (lookahead == 'x') ADVANCE(91);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTEjson);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTExml);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTEgraphql);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead == '\n') ADVANCE(243);
      if (lookahead == '`') ADVANCE(267);
      if (lookahead != 0) ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead == '#') ADVANCE(241);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(243);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '`') ADVANCE(62);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_oneline_string_token1);
      if (lookahead == '\n') ADVANCE(247);
      if (lookahead == '`') ADVANCE(267);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_oneline_string_token1);
      if (lookahead == '#') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_oneline_string_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_base64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_oneline_base64);
      if (lookahead == '\n' ||
          lookahead == ' ') ADVANCE(251);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_oneline_base64);
      if (lookahead == '\n' ||
          lookahead == ' ' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_hex);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_oneline_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_file);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_filename_escaped_char);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(258);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_json);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(142);
      if (lookahead == '}') ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT0);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT1);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH2);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_HTTP);
      if (lookahead == '/') ADVANCE(11);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_HTTP);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead == '/') ADVANCE(11);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_status);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(267);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 144},
  [2] = {.lex_state = 144},
  [3] = {.lex_state = 144},
  [4] = {.lex_state = 144},
  [5] = {.lex_state = 144},
  [6] = {.lex_state = 144},
  [7] = {.lex_state = 144},
  [8] = {.lex_state = 143},
  [9] = {.lex_state = 143},
  [10] = {.lex_state = 143},
  [11] = {.lex_state = 143},
  [12] = {.lex_state = 144},
  [13] = {.lex_state = 143},
  [14] = {.lex_state = 143},
  [15] = {.lex_state = 143},
  [16] = {.lex_state = 143},
  [17] = {.lex_state = 143},
  [18] = {.lex_state = 144},
  [19] = {.lex_state = 143},
  [20] = {.lex_state = 143},
  [21] = {.lex_state = 143},
  [22] = {.lex_state = 144},
  [23] = {.lex_state = 144},
  [24] = {.lex_state = 144},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 144},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 246},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 144},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
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
    [sym_entry] = STATE(33),
    [sym__request_response] = STATE(18),
    [sym_request] = STATE(8),
    [sym_http_method] = STATE(47),
    [aux_sym_entry_repeat1] = STATE(18),
    [anon_sym_GET] = ACTIONS(5),
    [anon_sym_HEAD] = ACTIONS(5),
    [anon_sym_POST] = ACTIONS(5),
    [anon_sym_PUT] = ACTIONS(5),
    [anon_sym_DELETE] = ACTIONS(5),
    [anon_sym_CONNECT] = ACTIONS(5),
    [anon_sym_OPTIONS] = ACTIONS(5),
    [anon_sym_TRACE] = ACTIONS(5),
    [anon_sym_PATCH] = ACTIONS(5),
    [sym__sp] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [2] = {
    [sym_request_param_keyword] = STATE(3),
    [sym_input] = STATE(20),
    [sym__multiline_string_body] = STATE(19),
    [sym__json_language_hint] = STATE(19),
    [sym__xml_language_hint] = STATE(19),
    [sym__graphql_language_hint] = STATE(19),
    [sym_oneline_string] = STATE(19),
    [sym__base64] = STATE(19),
    [sym__hex] = STATE(19),
    [sym__oneline_file] = STATE(19),
    [sym_pair] = STATE(3),
    [aux_sym_request_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_GET] = ACTIONS(13),
    [anon_sym_HEAD] = ACTIONS(13),
    [anon_sym_POST] = ACTIONS(13),
    [anon_sym_PUT] = ACTIONS(13),
    [anon_sym_DELETE] = ACTIONS(13),
    [anon_sym_CONNECT] = ACTIONS(13),
    [anon_sym_OPTIONS] = ACTIONS(13),
    [anon_sym_TRACE] = ACTIONS(13),
    [anon_sym_PATCH] = ACTIONS(13),
    [sym__sp] = ACTIONS(11),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(15),
    [sym_key] = ACTIONS(17),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE_BQUOTE_BQUOTEjson] = ACTIONS(21),
    [anon_sym_BQUOTE_BQUOTE_BQUOTExml] = ACTIONS(23),
    [anon_sym_BQUOTE_BQUOTE_BQUOTEgraphql] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_base64] = ACTIONS(29),
    [anon_sym_hex] = ACTIONS(31),
    [anon_sym_file] = ACTIONS(33),
    [sym_json] = ACTIONS(35),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(13),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(13),
    [anon_sym_HTTP_SLASH2] = ACTIONS(13),
    [anon_sym_HTTP] = ACTIONS(13),
    [sym_comment] = ACTIONS(9),
  },
  [3] = {
    [sym_request_param_keyword] = STATE(4),
    [sym_input] = STATE(21),
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
    [sym__sp] = ACTIONS(37),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(15),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(15),
    [sym_key] = ACTIONS(17),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE_BQUOTE_BQUOTEjson] = ACTIONS(21),
    [anon_sym_BQUOTE_BQUOTE_BQUOTExml] = ACTIONS(23),
    [anon_sym_BQUOTE_BQUOTE_BQUOTEgraphql] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_base64] = ACTIONS(29),
    [anon_sym_hex] = ACTIONS(31),
    [anon_sym_file] = ACTIONS(33),
    [sym_json] = ACTIONS(35),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(39),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(39),
    [anon_sym_HTTP_SLASH2] = ACTIONS(39),
    [anon_sym_HTTP] = ACTIONS(39),
    [sym_comment] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(48), 1,
      sym_key,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      sym__sp,
    STATE(4), 3,
      sym_request_param_keyword,
      sym_pair,
      aux_sym_request_repeat1,
    ACTIONS(45), 6,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
    ACTIONS(43), 22,
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
      anon_sym_BQUOTE_BQUOTE_BQUOTEjson,
      anon_sym_BQUOTE_BQUOTE_BQUOTExml,
      anon_sym_BQUOTE_BQUOTE_BQUOTEgraphql,
      anon_sym_BQUOTE,
      anon_sym_base64,
      anon_sym_hex,
      anon_sym_file,
      sym_json,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP,
  [48] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      sym__sp,
    ACTIONS(53), 29,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      sym_key,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTEjson,
      anon_sym_BQUOTE_BQUOTE_BQUOTExml,
      anon_sym_BQUOTE_BQUOTE_BQUOTEgraphql,
      anon_sym_BQUOTE,
      anon_sym_base64,
      anon_sym_hex,
      anon_sym_file,
      sym_json,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP,
  [87] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      sym__sp,
    ACTIONS(57), 29,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      sym_key,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTEjson,
      anon_sym_BQUOTE_BQUOTE_BQUOTExml,
      anon_sym_BQUOTE_BQUOTE_BQUOTEgraphql,
      anon_sym_BQUOTE,
      anon_sym_base64,
      anon_sym_hex,
      anon_sym_file,
      sym_json,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP,
  [126] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      sym__sp,
    ACTIONS(61), 29,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      sym_key,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTEjson,
      anon_sym_BQUOTE_BQUOTE_BQUOTExml,
      anon_sym_BQUOTE_BQUOTE_BQUOTEgraphql,
      anon_sym_BQUOTE,
      anon_sym_base64,
      anon_sym_hex,
      anon_sym_file,
      sym_json,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP,
  [165] = 7,
    ACTIONS(9), 1,
      sym_comment,
    STATE(22), 1,
      sym_response,
    STATE(23), 1,
      sym_version_and_status,
    STATE(42), 1,
      sym_http_version,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      sym__sp,
    ACTIONS(67), 4,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP,
    ACTIONS(65), 9,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
  [199] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      sym__sp,
    ACTIONS(71), 13,
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
      anon_sym_HTTP,
  [222] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      sym__sp,
    ACTIONS(75), 13,
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
      anon_sym_HTTP,
  [245] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      sym__sp,
    ACTIONS(79), 13,
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
      anon_sym_HTTP,
  [268] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(86), 1,
      sym__sp,
    STATE(8), 1,
      sym_request,
    STATE(47), 1,
      sym_http_method,
    STATE(12), 2,
      sym__request_response,
      aux_sym_entry_repeat1,
    ACTIONS(83), 9,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
  [299] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      sym__sp,
    ACTIONS(91), 13,
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
      anon_sym_HTTP,
  [322] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      sym__sp,
    ACTIONS(95), 13,
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
      anon_sym_HTTP,
  [345] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      sym__sp,
    ACTIONS(99), 13,
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
      anon_sym_HTTP,
  [368] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      sym__sp,
    ACTIONS(103), 13,
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
      anon_sym_HTTP,
  [391] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      sym__sp,
    ACTIONS(107), 13,
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
      anon_sym_HTTP,
  [414] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    ACTIONS(111), 1,
      sym__sp,
    STATE(8), 1,
      sym_request,
    STATE(47), 1,
      sym_http_method,
    STATE(12), 2,
      sym__request_response,
      aux_sym_entry_repeat1,
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
  [445] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      sym__sp,
    ACTIONS(115), 13,
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
      anon_sym_HTTP,
  [468] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(37), 2,
      ts_builtin_sym_end,
      sym__sp,
    ACTIONS(39), 13,
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
      anon_sym_HTTP,
  [491] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(117), 2,
      ts_builtin_sym_end,
      sym__sp,
    ACTIONS(119), 13,
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
      anon_sym_HTTP,
  [514] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      sym__sp,
    ACTIONS(123), 9,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
  [533] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      sym__sp,
    ACTIONS(127), 9,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
  [552] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      sym__sp,
    ACTIONS(131), 9,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
  [571] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(133), 1,
      sym_filename_escaped_char,
    ACTIONS(135), 1,
      sym_filename_text,
    STATE(26), 1,
      aux_sym_filename_repeat1,
    STATE(50), 1,
      sym_filename,
  [587] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_SEMI,
    ACTIONS(139), 1,
      sym_filename_escaped_char,
    ACTIONS(141), 1,
      sym_filename_text,
    STATE(27), 1,
      aux_sym_filename_repeat1,
  [603] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_SEMI,
    ACTIONS(145), 1,
      sym_filename_escaped_char,
    ACTIONS(148), 1,
      sym_filename_text,
    STATE(27), 1,
      aux_sym_filename_repeat1,
  [619] = 3,
    ACTIONS(9), 1,
      sym_comment,
    STATE(5), 1,
      sym_value,
    ACTIONS(151), 2,
      sym_variable,
      aux_sym_value_token1,
  [630] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(153), 1,
      aux_sym_multiline_string_token1,
    STATE(52), 1,
      sym_inner_language_hint,
  [640] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(153), 1,
      aux_sym_multiline_string_token1,
    STATE(44), 1,
      sym_inner_language_hint,
  [650] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(153), 1,
      aux_sym_multiline_string_token1,
    STATE(46), 1,
      sym_inner_language_hint,
  [660] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(155), 1,
      aux_sym_multiline_string_token1,
    STATE(38), 1,
      sym_multiline_string,
  [670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
  [677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_COMMA,
  [684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
  [691] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(163), 1,
      sym_oneline_base64,
  [698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym_oneline_hex,
  [705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      sym_status,
  [719] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(171), 1,
      sym__sp,
  [726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_COMMA,
  [733] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym_status,
  [740] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_COMMA,
  [747] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [754] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(181), 1,
      aux_sym_oneline_string_token1,
  [761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [768] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym__sp,
  [775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_SEMI,
  [782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_SEMI,
  [789] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_SEMI,
  [796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [803] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_COLON,
  [817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_url,
  [824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 48,
  [SMALL_STATE(6)] = 87,
  [SMALL_STATE(7)] = 126,
  [SMALL_STATE(8)] = 165,
  [SMALL_STATE(9)] = 199,
  [SMALL_STATE(10)] = 222,
  [SMALL_STATE(11)] = 245,
  [SMALL_STATE(12)] = 268,
  [SMALL_STATE(13)] = 299,
  [SMALL_STATE(14)] = 322,
  [SMALL_STATE(15)] = 345,
  [SMALL_STATE(16)] = 368,
  [SMALL_STATE(17)] = 391,
  [SMALL_STATE(18)] = 414,
  [SMALL_STATE(19)] = 445,
  [SMALL_STATE(20)] = 468,
  [SMALL_STATE(21)] = 491,
  [SMALL_STATE(22)] = 514,
  [SMALL_STATE(23)] = 533,
  [SMALL_STATE(24)] = 552,
  [SMALL_STATE(25)] = 571,
  [SMALL_STATE(26)] = 587,
  [SMALL_STATE(27)] = 603,
  [SMALL_STATE(28)] = 619,
  [SMALL_STATE(29)] = 630,
  [SMALL_STATE(30)] = 640,
  [SMALL_STATE(31)] = 650,
  [SMALL_STATE(32)] = 660,
  [SMALL_STATE(33)] = 670,
  [SMALL_STATE(34)] = 677,
  [SMALL_STATE(35)] = 684,
  [SMALL_STATE(36)] = 691,
  [SMALL_STATE(37)] = 698,
  [SMALL_STATE(38)] = 705,
  [SMALL_STATE(39)] = 712,
  [SMALL_STATE(40)] = 719,
  [SMALL_STATE(41)] = 726,
  [SMALL_STATE(42)] = 733,
  [SMALL_STATE(43)] = 740,
  [SMALL_STATE(44)] = 747,
  [SMALL_STATE(45)] = 754,
  [SMALL_STATE(46)] = 761,
  [SMALL_STATE(47)] = 768,
  [SMALL_STATE(48)] = 775,
  [SMALL_STATE(49)] = 782,
  [SMALL_STATE(50)] = 789,
  [SMALL_STATE(51)] = 796,
  [SMALL_STATE(52)] = 803,
  [SMALL_STATE(53)] = 810,
  [SMALL_STATE(54)] = 817,
  [SMALL_STATE(55)] = 824,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(6),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(53),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_param_keyword, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_param_keyword, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__request_response, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__request_response, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__base64, 4),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__base64, 4),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__oneline_file, 4),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__oneline_file, 4),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hex, 4),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hex, 4),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entry_repeat1, 2),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(40),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(12),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__graphql_language_hint, 3, .production_id = 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__graphql_language_hint, 3, .production_id = 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xml_language_hint, 3, .production_id = 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xml_language_hint, 3, .production_id = 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_language_hint, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__json_language_hint, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_string_body, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_string_body, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__request_response, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__request_response, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_and_status, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_and_status, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename, 1),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(27),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(27),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [157] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_method, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inner_language_hint, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 1),
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
