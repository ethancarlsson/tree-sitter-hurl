#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 84
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 80
#define ALIAS_COUNT 2
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
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
  sym__lt = 11,
  sym_value_string_text = 12,
  sym_hexidigit = 13,
  sym_url = 14,
  anon_sym_LBRACKQueryStringParams_RBRACK = 15,
  anon_sym_LBRACKFormParams_RBRACK = 16,
  anon_sym_LBRACKBasicAuth_RBRACK = 17,
  anon_sym_LBRACKCookies_RBRACK = 18,
  anon_sym_LBRACKMultipartFormData_RBRACK = 19,
  anon_sym_LBRACKOptions_RBRACK = 20,
  sym_variable = 21,
  sym_key = 22,
  aux_sym_value_token1 = 23,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 24,
  anon_sym_BQUOTE_BQUOTE_BQUOTEjson = 25,
  anon_sym_BQUOTE_BQUOTE_BQUOTExml = 26,
  anon_sym_BQUOTE_BQUOTE_BQUOTEgraphql = 27,
  aux_sym_multiline_string_token1 = 28,
  anon_sym_BQUOTE = 29,
  aux_sym_oneline_string_token1 = 30,
  anon_sym_base64 = 31,
  anon_sym_COMMA = 32,
  anon_sym_SEMI = 33,
  sym_oneline_base64 = 34,
  anon_sym_hex = 35,
  anon_sym_file = 36,
  sym_filename_escaped_char = 37,
  sym_filename_text = 38,
  sym_json = 39,
  anon_sym_HTTP_SLASH1_DOT0 = 40,
  anon_sym_HTTP_SLASH1_DOT1 = 41,
  anon_sym_HTTP_SLASH2 = 42,
  anon_sym_HTTP = 43,
  sym_status = 44,
  anon_sym_COLON = 45,
  sym_comment = 46,
  sym_entry = 47,
  sym__request_response = 48,
  sym_request = 49,
  sym_http_method = 50,
  sym__value_string = 51,
  aux_sym__value_string_content = 52,
  aux_sym__header = 53,
  sym_request_section = 54,
  sym_request_param_keyword = 55,
  sym_value = 56,
  sym_input = 57,
  sym__multiline_string_body = 58,
  sym__json_language_hint = 59,
  sym__xml_language_hint = 60,
  sym__graphql_language_hint = 61,
  sym_multiline_string = 62,
  sym_oneline_string = 63,
  sym__base64 = 64,
  sym__hex = 65,
  sym_oneline_hex = 66,
  sym__oneline_file = 67,
  sym_filename = 68,
  sym_inner_language_hint = 69,
  sym_response = 70,
  sym_version_and_status = 71,
  sym_http_version = 72,
  sym_key_value = 73,
  aux_sym_entry_repeat1 = 74,
  aux_sym_request_repeat1 = 75,
  aux_sym_request_repeat2 = 76,
  aux_sym_request_section_repeat1 = 77,
  aux_sym_oneline_hex_repeat1 = 78,
  aux_sym_filename_repeat1 = 79,
  alias_sym_graphql = 80,
  alias_sym_xml = 81,
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
  [sym__lt] = "_lt",
  [sym_value_string_text] = "value_string_text",
  [sym_hexidigit] = "hexidigit",
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
  [sym__value_string] = "_value_string",
  [aux_sym__value_string_content] = "_value_string_content",
  [aux_sym__header] = "_header",
  [sym_request_section] = "request_section",
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
  [sym_oneline_hex] = "oneline_hex",
  [sym__oneline_file] = "_oneline_file",
  [sym_filename] = "filename",
  [sym_inner_language_hint] = "json",
  [sym_response] = "response",
  [sym_version_and_status] = "version_and_status",
  [sym_http_version] = "http_version",
  [sym_key_value] = "key_value",
  [aux_sym_entry_repeat1] = "entry_repeat1",
  [aux_sym_request_repeat1] = "request_repeat1",
  [aux_sym_request_repeat2] = "request_repeat2",
  [aux_sym_request_section_repeat1] = "request_section_repeat1",
  [aux_sym_oneline_hex_repeat1] = "oneline_hex_repeat1",
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
  [sym__lt] = sym__lt,
  [sym_value_string_text] = sym_value_string_text,
  [sym_hexidigit] = sym_hexidigit,
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
  [sym__value_string] = sym__value_string,
  [aux_sym__value_string_content] = aux_sym__value_string_content,
  [aux_sym__header] = aux_sym__header,
  [sym_request_section] = sym_request_section,
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
  [sym_oneline_hex] = sym_oneline_hex,
  [sym__oneline_file] = sym__oneline_file,
  [sym_filename] = sym_filename,
  [sym_inner_language_hint] = sym_json,
  [sym_response] = sym_response,
  [sym_version_and_status] = sym_version_and_status,
  [sym_http_version] = sym_http_version,
  [sym_key_value] = sym_key_value,
  [aux_sym_entry_repeat1] = aux_sym_entry_repeat1,
  [aux_sym_request_repeat1] = aux_sym_request_repeat1,
  [aux_sym_request_repeat2] = aux_sym_request_repeat2,
  [aux_sym_request_section_repeat1] = aux_sym_request_section_repeat1,
  [aux_sym_oneline_hex_repeat1] = aux_sym_oneline_hex_repeat1,
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
  [sym__lt] = {
    .visible = false,
    .named = true,
  },
  [sym_value_string_text] = {
    .visible = true,
    .named = true,
  },
  [sym_hexidigit] = {
    .visible = true,
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
  [sym__value_string] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__value_string_content] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__header] = {
    .visible = false,
    .named = false,
  },
  [sym_request_section] = {
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
  [sym_oneline_hex] = {
    .visible = true,
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
  [sym_key_value] = {
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
  [aux_sym_request_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_request_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_oneline_hex_repeat1] = {
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
  [46] = 43,
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
  [58] = 17,
  [59] = 16,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 78,
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
      if (eof) ADVANCE(160);
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == ',') ADVANCE(267);
      if (lookahead == ':') ADVANCE(285);
      if (lookahead == ';') ADVANCE(268);
      if (lookahead == 'C') ADVANCE(189);
      if (lookahead == 'G') ADVANCE(30);
      if (lookahead == 'H') ADVANCE(31);
      if (lookahead == 'O') ADVANCE(47);
      if (lookahead == 'P') ADVANCE(23);
      if (lookahead == 'T') ADVANCE(50);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '`') ADVANCE(261);
      if (lookahead == 'f') ADVANCE(190);
      if (lookahead == 'h') ADVANCE(83);
      if (lookahead == '{') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(188);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(183);
      if (lookahead == '\r') ADVANCE(185);
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(187);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(184);
      if (lookahead == '\r') SKIP(2)
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(180);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(187);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(246);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('$' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(251);
      if (lookahead == '#') ADVANCE(252);
      if (lookahead == '{') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == ';') ADVANCE(268);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(276);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0) ADVANCE(277);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == ';') ADVANCE(268);
      if (lookahead == '`') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(7)
      if (lookahead == '\n' ||
          lookahead == ' ') ADVANCE(269);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(181);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(260);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(155);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(279);
      if (lookahead == '1') ADVANCE(280);
      END_STATE();
    case 15:
      if (lookahead == '1') ADVANCE(11);
      if (lookahead == '2') ADVANCE(281);
      END_STATE();
    case 16:
      if (lookahead == '4') ADVANCE(265);
      END_STATE();
    case 17:
      if (lookahead == '6') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(13);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == 'A') ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == 'A') ADVANCE(26);
      END_STATE();
    case 22:
      if (lookahead == 'A') ADVANCE(145);
      END_STATE();
    case 23:
      if (lookahead == 'A') ADVANCE(56);
      if (lookahead == 'O') ADVANCE(53);
      if (lookahead == 'U') ADVANCE(57);
      END_STATE();
    case 24:
      if (lookahead == 'B') ADVANCE(71);
      if (lookahead == 'C') ADVANCE(114);
      if (lookahead == 'F') ADVANCE(110);
      if (lookahead == 'M') ADVANCE(144);
      if (lookahead == 'O') ADVANCE(118);
      if (lookahead == 'Q') ADVANCE(143);
      END_STATE();
    case 25:
      if (lookahead == 'C') ADVANCE(38);
      END_STATE();
    case 26:
      if (lookahead == 'C') ADVANCE(32);
      END_STATE();
    case 27:
      if (lookahead == 'C') ADVANCE(59);
      END_STATE();
    case 28:
      if (lookahead == 'D') ADVANCE(163);
      END_STATE();
    case 29:
      if (lookahead == 'D') ADVANCE(77);
      END_STATE();
    case 30:
      if (lookahead == 'E') ADVANCE(54);
      END_STATE();
    case 31:
      if (lookahead == 'E') ADVANCE(20);
      if (lookahead == 'T') ADVANCE(60);
      END_STATE();
    case 32:
      if (lookahead == 'E') ADVANCE(175);
      END_STATE();
    case 33:
      if (lookahead == 'E') ADVANCE(40);
      END_STATE();
    case 34:
      if (lookahead == 'E') ADVANCE(169);
      END_STATE();
    case 35:
      if (lookahead == 'E') ADVANCE(27);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(61);
      END_STATE();
    case 37:
      if (lookahead == 'F') ADVANCE(115);
      END_STATE();
    case 38:
      if (lookahead == 'H') ADVANCE(177);
      END_STATE();
    case 39:
      if (lookahead == 'I') ADVANCE(45);
      END_STATE();
    case 40:
      if (lookahead == 'L') ADVANCE(36);
      END_STATE();
    case 41:
      if (lookahead == 'N') ADVANCE(35);
      END_STATE();
    case 42:
      if (lookahead == 'N') ADVANCE(41);
      END_STATE();
    case 43:
      if (lookahead == 'N') ADVANCE(51);
      END_STATE();
    case 44:
      if (lookahead == 'O') ADVANCE(42);
      END_STATE();
    case 45:
      if (lookahead == 'O') ADVANCE(43);
      END_STATE();
    case 46:
      if (lookahead == 'P') ADVANCE(282);
      END_STATE();
    case 47:
      if (lookahead == 'P') ADVANCE(55);
      END_STATE();
    case 48:
      if (lookahead == 'P') ADVANCE(74);
      END_STATE();
    case 49:
      if (lookahead == 'P') ADVANCE(80);
      END_STATE();
    case 50:
      if (lookahead == 'R') ADVANCE(21);
      END_STATE();
    case 51:
      if (lookahead == 'S') ADVANCE(173);
      END_STATE();
    case 52:
      if (lookahead == 'S') ADVANCE(142);
      END_STATE();
    case 53:
      if (lookahead == 'S') ADVANCE(58);
      END_STATE();
    case 54:
      if (lookahead == 'T') ADVANCE(161);
      END_STATE();
    case 55:
      if (lookahead == 'T') ADVANCE(39);
      END_STATE();
    case 56:
      if (lookahead == 'T') ADVANCE(25);
      END_STATE();
    case 57:
      if (lookahead == 'T') ADVANCE(167);
      END_STATE();
    case 58:
      if (lookahead == 'T') ADVANCE(165);
      END_STATE();
    case 59:
      if (lookahead == 'T') ADVANCE(171);
      END_STATE();
    case 60:
      if (lookahead == 'T') ADVANCE(46);
      END_STATE();
    case 61:
      if (lookahead == 'T') ADVANCE(34);
      END_STATE();
    case 62:
      if (lookahead == ']') ADVANCE(195);
      END_STATE();
    case 63:
      if (lookahead == ']') ADVANCE(197);
      END_STATE();
    case 64:
      if (lookahead == ']') ADVANCE(194);
      END_STATE();
    case 65:
      if (lookahead == ']') ADVANCE(193);
      END_STATE();
    case 66:
      if (lookahead == ']') ADVANCE(196);
      END_STATE();
    case 67:
      if (lookahead == ']') ADVANCE(192);
      END_STATE();
    case 68:
      if (lookahead == '`') ADVANCE(254);
      END_STATE();
    case 69:
      if (lookahead == '`') ADVANCE(253);
      END_STATE();
    case 70:
      if (lookahead == '`') ADVANCE(69);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 81:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(146);
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 88:
      if (lookahead == 'g') ADVANCE(49);
      END_STATE();
    case 89:
      if (lookahead == 'h') ADVANCE(120);
      END_STATE();
    case 90:
      if (lookahead == 'h') ADVANCE(64);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 97:
      if (lookahead == 'k') ADVANCE(94);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(256);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(257);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 102:
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 103:
      if (lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 104:
      if (lookahead == 'm') ADVANCE(98);
      END_STATE();
    case 105:
      if (lookahead == 'm') ADVANCE(132);
      END_STATE();
    case 106:
      if (lookahead == 'm') ADVANCE(135);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(255);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 116:
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 117:
      if (lookahead == 'p') ADVANCE(89);
      END_STATE();
    case 118:
      if (lookahead == 'p') ADVANCE(138);
      END_STATE();
    case 119:
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 120:
      if (lookahead == 'q') ADVANCE(99);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 129:
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 130:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 135:
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 143:
      if (lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 144:
      if (lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 145:
      if (lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 146:
      if (lookahead == 'x') ADVANCE(271);
      END_STATE();
    case 147:
      if (lookahead == 'y') ADVANCE(52);
      END_STATE();
    case 148:
      if (lookahead == '{') ADVANCE(154);
      END_STATE();
    case 149:
      if (lookahead == '}') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(150);
      END_STATE();
    case 150:
      if (lookahead == '}') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(150);
      END_STATE();
    case 151:
      if (lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';') ADVANCE(275);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 154:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(150);
      END_STATE();
    case 155:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(191);
      END_STATE();
    case 156:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(156);
      if (lookahead == '}') ADVANCE(278);
      END_STATE();
    case 157:
      if (eof) ADVANCE(160);
      if (lookahead == '\n') ADVANCE(182);
      if (lookahead == '#') ADVANCE(286);
      if (sym_key_character_set_1(lookahead)) ADVANCE(245);
      if (lookahead == 'C') ADVANCE(220);
      if (lookahead == 'D') ADVANCE(208);
      if (lookahead == 'G') ADVANCE(209);
      if (lookahead == 'H') ADVANCE(201);
      if (lookahead == 'O') ADVANCE(223);
      if (lookahead == 'P') ADVANCE(200);
      if (lookahead == 'T') ADVANCE(224);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == '`') ADVANCE(261);
      if (lookahead == 'b') ADVANCE(244);
      if (lookahead == 'f') ADVANCE(240);
      if (lookahead == 'h') ADVANCE(237);
      if (lookahead == '{') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(157)
      END_STATE();
    case 158:
      if (eof) ADVANCE(160);
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == 'C') ADVANCE(44);
      if (lookahead == 'D') ADVANCE(33);
      if (lookahead == 'G') ADVANCE(30);
      if (lookahead == 'H') ADVANCE(31);
      if (lookahead == 'O') ADVANCE(47);
      if (lookahead == 'P') ADVANCE(23);
      if (lookahead == 'T') ADVANCE(50);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == '`') ADVANCE(261);
      if (lookahead == 'b') ADVANCE(78);
      if (lookahead == 'f') ADVANCE(91);
      if (lookahead == 'h') ADVANCE(82);
      if (lookahead == '{') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(158)
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(153);
      END_STATE();
    case 159:
      if (eof) ADVANCE(160);
      if (lookahead == '#') ADVANCE(286);
      if (sym_key_character_set_1(lookahead)) ADVANCE(245);
      if (lookahead == 'C') ADVANCE(220);
      if (lookahead == 'D') ADVANCE(208);
      if (lookahead == 'G') ADVANCE(209);
      if (lookahead == 'H') ADVANCE(201);
      if (lookahead == 'O') ADVANCE(223);
      if (lookahead == 'P') ADVANCE(200);
      if (lookahead == 'T') ADVANCE(224);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == '`') ADVANCE(261);
      if (lookahead == 'b') ADVANCE(244);
      if (lookahead == 'f') ADVANCE(240);
      if (lookahead == 'h') ADVANCE(237);
      if (lookahead == '{') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(159)
      END_STATE();
    case 160:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_GET);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_POST);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_PATCH);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__sp);
      if (lookahead == '\n') ADVANCE(183);
      if (lookahead == '\r') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__sp);
      if (lookahead == '\n') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__sp);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__lt);
      if (lookahead == '\n') ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__lt);
      if (lookahead == '\n') ADVANCE(183);
      if (lookahead == '\r') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(179);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__lt);
      if (lookahead == '\n') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(180);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_value_string_text);
      if (lookahead == '\n') ADVANCE(183);
      if (lookahead == '\r') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(187);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_value_string_text);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(187);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_value_string_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_hexidigit);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_hexidigit);
      if (lookahead == 'O') ADVANCE(42);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_hexidigit);
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_LBRACKQueryStringParams_RBRACK);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_LBRACKFormParams_RBRACK);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_LBRACKBasicAuth_RBRACK);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_LBRACKCookies_RBRACK);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_LBRACKMultipartFormData_RBRACK);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_LBRACKOptions_RBRACK);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == ' ') ADVANCE(251);
      if (('!' <= lookahead && lookahead <= '|') ||
          lookahead == '~') ADVANCE(248);
      if (lookahead == '}') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(150);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '}') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(150);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= 'T') ||
          ('V' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead == 'A') ADVANCE(229);
      if (lookahead == 'O') ADVANCE(226);
      if (lookahead == 'U') ADVANCE(230);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead == 'E') ADVANCE(235);
      if (lookahead == 'T') ADVANCE(233);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '3') ||
          ('5' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead == '4') ADVANCE(266);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '5') ||
          ('7' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead == '6') ADVANCE(202);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'A' ||
          lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead == 'C') ADVANCE(214);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'A' ||
          lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead == 'C') ADVANCE(210);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'A' ||
          lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead == 'C') ADVANCE(232);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('E' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead == 'D') ADVANCE(164);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead == 'E') ADVANCE(216);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead == 'E') ADVANCE(227);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead == 'E') ADVANCE(176);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead == 'E') ADVANCE(170);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead == 'E') ADVANCE(206);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead == 'E') ADVANCE(234);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'G') ||
          ('I' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead == 'H') ADVANCE(178);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'H') ||
          ('J' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead == 'I') ADVANCE(221);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'K') ||
          ('M' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead == 'L') ADVANCE(213);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead == 'N') ADVANCE(219);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead == 'N') ADVANCE(225);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead == 'N') ADVANCE(212);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead == 'O') ADVANCE(217);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead == 'O') ADVANCE(218);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead == 'P') ADVANCE(283);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead == 'P') ADVANCE(228);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Q') ||
          ('S' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead == 'R') ADVANCE(236);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead == 'S') ADVANCE(174);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead == 'S') ADVANCE(231);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead == 'T') ADVANCE(162);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead == 'T') ADVANCE(215);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead == 'T') ADVANCE(204);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead == 'T') ADVANCE(168);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead == 'T') ADVANCE(166);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead == 'T') ADVANCE(172);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead == 'T') ADVANCE(222);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead == 'T') ADVANCE(211);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead == 'A') ADVANCE(207);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead == 'A') ADVANCE(205);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead == 'i') ADVANCE(241);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead == 'l') ADVANCE(239);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead == 's') ADVANCE(238);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'w') ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(245);
      if (lookahead == 'x') ADVANCE(272);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead == 'a') ADVANCE(242);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == ' ') ADVANCE(246);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('$' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(251);
      if (lookahead == '#') ADVANCE(252);
      if (lookahead == '{') ADVANCE(250);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == ' ') ADVANCE(251);
      if (('!' <= lookahead && lookahead <= '|') ||
          lookahead == '~') ADVANCE(248);
      if (lookahead == '}') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(150);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == ' ') ADVANCE(251);
      if (('!' <= lookahead && lookahead <= '|') ||
          lookahead == '~') ADVANCE(248);
      if (lookahead == '}') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(150);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == ' ') ADVANCE(251);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(150);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if ((' ' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(251);
      if (lookahead == '{') ADVANCE(249);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(286);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      if (lookahead == 'g') ADVANCE(123);
      if (lookahead == 'j') ADVANCE(133);
      if (lookahead == 'x') ADVANCE(104);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTEjson);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTExml);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTEgraphql);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '`') ADVANCE(286);
      if (lookahead != 0) ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(260);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '`') ADVANCE(68);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_oneline_string_token1);
      if (lookahead == '\n') ADVANCE(264);
      if (lookahead == '`') ADVANCE(286);
      if (lookahead != 0) ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_oneline_string_token1);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(264);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_oneline_string_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_base64);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_base64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_oneline_base64);
      if (lookahead == '\n' ||
          lookahead == ' ') ADVANCE(269);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_oneline_base64);
      if (lookahead == '\n' ||
          lookahead == ' ' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_hex);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_hex);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_file);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_filename_escaped_char);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(277);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_json);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(156);
      if (lookahead == '}') ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT0);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT1);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH2);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_HTTP);
      if (lookahead == '/') ADVANCE(15);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_HTTP);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead == '/') ADVANCE(15);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_status);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(286);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 158},
  [2] = {.lex_state = 157},
  [3] = {.lex_state = 157},
  [4] = {.lex_state = 157},
  [5] = {.lex_state = 157},
  [6] = {.lex_state = 158},
  [7] = {.lex_state = 158},
  [8] = {.lex_state = 158},
  [9] = {.lex_state = 157},
  [10] = {.lex_state = 159},
  [11] = {.lex_state = 159},
  [12] = {.lex_state = 159},
  [13] = {.lex_state = 158},
  [14] = {.lex_state = 157},
  [15] = {.lex_state = 157},
  [16] = {.lex_state = 159},
  [17] = {.lex_state = 159},
  [18] = {.lex_state = 158},
  [19] = {.lex_state = 158},
  [20] = {.lex_state = 158},
  [21] = {.lex_state = 158},
  [22] = {.lex_state = 158},
  [23] = {.lex_state = 158},
  [24] = {.lex_state = 158},
  [25] = {.lex_state = 158},
  [26] = {.lex_state = 158},
  [27] = {.lex_state = 158},
  [28] = {.lex_state = 158},
  [29] = {.lex_state = 158},
  [30] = {.lex_state = 158},
  [31] = {.lex_state = 158},
  [32] = {.lex_state = 158},
  [33] = {.lex_state = 158},
  [34] = {.lex_state = 158},
  [35] = {.lex_state = 158},
  [36] = {.lex_state = 158},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 10},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 10},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 157},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 157},
  [59] = {.lex_state = 157},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 8},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 157},
  [72] = {.lex_state = 157},
  [73] = {.lex_state = 157},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 263},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 158},
  [80] = {.lex_state = 158},
  [81] = {.lex_state = 8},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_GET] = ACTIONS(1),
    [anon_sym_HEAD] = ACTIONS(1),
    [anon_sym_POST] = ACTIONS(1),
    [anon_sym_PUT] = ACTIONS(1),
    [anon_sym_CONNECT] = ACTIONS(1),
    [anon_sym_OPTIONS] = ACTIONS(1),
    [anon_sym_TRACE] = ACTIONS(1),
    [anon_sym_PATCH] = ACTIONS(1),
    [sym_hexidigit] = ACTIONS(1),
    [sym_url] = ACTIONS(1),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE_BQUOTE_BQUOTEjson] = ACTIONS(1),
    [anon_sym_BQUOTE_BQUOTE_BQUOTExml] = ACTIONS(1),
    [anon_sym_BQUOTE_BQUOTE_BQUOTEgraphql] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_hex] = ACTIONS(1),
    [anon_sym_file] = ACTIONS(1),
    [sym_filename_escaped_char] = ACTIONS(1),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(1),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(1),
    [anon_sym_HTTP_SLASH2] = ACTIONS(1),
    [anon_sym_HTTP] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_entry] = STATE(82),
    [sym__request_response] = STATE(29),
    [sym_request] = STATE(18),
    [sym_http_method] = STATE(81),
    [aux_sym_entry_repeat1] = STATE(29),
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
    [aux_sym__header] = STATE(4),
    [sym_request_section] = STATE(6),
    [sym_request_param_keyword] = STATE(73),
    [sym_input] = STATE(30),
    [sym__multiline_string_body] = STATE(19),
    [sym__json_language_hint] = STATE(19),
    [sym__xml_language_hint] = STATE(19),
    [sym__graphql_language_hint] = STATE(19),
    [sym_oneline_string] = STATE(19),
    [sym__base64] = STATE(19),
    [sym__hex] = STATE(19),
    [sym__oneline_file] = STATE(19),
    [sym_key_value] = STATE(72),
    [aux_sym_request_repeat2] = STATE(6),
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
    [sym__lt] = ACTIONS(11),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(13),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(13),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(13),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(13),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(13),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(13),
    [sym_key] = ACTIONS(15),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(17),
    [anon_sym_BQUOTE_BQUOTE_BQUOTEjson] = ACTIONS(19),
    [anon_sym_BQUOTE_BQUOTE_BQUOTExml] = ACTIONS(21),
    [anon_sym_BQUOTE_BQUOTE_BQUOTEgraphql] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_base64] = ACTIONS(27),
    [anon_sym_hex] = ACTIONS(29),
    [anon_sym_file] = ACTIONS(31),
    [sym_json] = ACTIONS(33),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(9),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(9),
    [anon_sym_HTTP_SLASH2] = ACTIONS(9),
    [anon_sym_HTTP] = ACTIONS(9),
    [sym_comment] = ACTIONS(35),
  },
  [3] = {
    [aux_sym__header] = STATE(5),
    [sym_request_section] = STATE(8),
    [sym_request_param_keyword] = STATE(73),
    [sym_input] = STATE(23),
    [sym__multiline_string_body] = STATE(19),
    [sym__json_language_hint] = STATE(19),
    [sym__xml_language_hint] = STATE(19),
    [sym__graphql_language_hint] = STATE(19),
    [sym_oneline_string] = STATE(19),
    [sym__base64] = STATE(19),
    [sym__hex] = STATE(19),
    [sym__oneline_file] = STATE(19),
    [sym_key_value] = STATE(72),
    [aux_sym_request_repeat2] = STATE(8),
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
    [sym__lt] = ACTIONS(11),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(13),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(13),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(13),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(13),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(13),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(13),
    [sym_key] = ACTIONS(15),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(17),
    [anon_sym_BQUOTE_BQUOTE_BQUOTEjson] = ACTIONS(19),
    [anon_sym_BQUOTE_BQUOTE_BQUOTExml] = ACTIONS(21),
    [anon_sym_BQUOTE_BQUOTE_BQUOTEgraphql] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_base64] = ACTIONS(27),
    [anon_sym_hex] = ACTIONS(29),
    [anon_sym_file] = ACTIONS(31),
    [sym_json] = ACTIONS(33),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(39),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(39),
    [anon_sym_HTTP_SLASH2] = ACTIONS(39),
    [anon_sym_HTTP] = ACTIONS(39),
    [sym_comment] = ACTIONS(35),
  },
  [4] = {
    [aux_sym__header] = STATE(9),
    [sym_request_section] = STATE(8),
    [sym_request_param_keyword] = STATE(73),
    [sym_input] = STATE(23),
    [sym__multiline_string_body] = STATE(19),
    [sym__json_language_hint] = STATE(19),
    [sym__xml_language_hint] = STATE(19),
    [sym__graphql_language_hint] = STATE(19),
    [sym_oneline_string] = STATE(19),
    [sym__base64] = STATE(19),
    [sym__hex] = STATE(19),
    [sym__oneline_file] = STATE(19),
    [sym_key_value] = STATE(72),
    [aux_sym_request_repeat2] = STATE(8),
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
    [sym__lt] = ACTIONS(11),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(13),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(13),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(13),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(13),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(13),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(13),
    [sym_key] = ACTIONS(15),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(17),
    [anon_sym_BQUOTE_BQUOTE_BQUOTEjson] = ACTIONS(19),
    [anon_sym_BQUOTE_BQUOTE_BQUOTExml] = ACTIONS(21),
    [anon_sym_BQUOTE_BQUOTE_BQUOTEgraphql] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_base64] = ACTIONS(27),
    [anon_sym_hex] = ACTIONS(29),
    [anon_sym_file] = ACTIONS(31),
    [sym_json] = ACTIONS(33),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(39),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(39),
    [anon_sym_HTTP_SLASH2] = ACTIONS(39),
    [anon_sym_HTTP] = ACTIONS(39),
    [sym_comment] = ACTIONS(35),
  },
  [5] = {
    [aux_sym__header] = STATE(9),
    [sym_request_section] = STATE(7),
    [sym_request_param_keyword] = STATE(73),
    [sym_input] = STATE(32),
    [sym__multiline_string_body] = STATE(19),
    [sym__json_language_hint] = STATE(19),
    [sym__xml_language_hint] = STATE(19),
    [sym__graphql_language_hint] = STATE(19),
    [sym_oneline_string] = STATE(19),
    [sym__base64] = STATE(19),
    [sym__hex] = STATE(19),
    [sym__oneline_file] = STATE(19),
    [sym_key_value] = STATE(72),
    [aux_sym_request_repeat2] = STATE(7),
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
    [sym__lt] = ACTIONS(11),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(13),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(13),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(13),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(13),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(13),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(13),
    [sym_key] = ACTIONS(15),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(17),
    [anon_sym_BQUOTE_BQUOTE_BQUOTEjson] = ACTIONS(19),
    [anon_sym_BQUOTE_BQUOTE_BQUOTExml] = ACTIONS(21),
    [anon_sym_BQUOTE_BQUOTE_BQUOTEgraphql] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_base64] = ACTIONS(27),
    [anon_sym_hex] = ACTIONS(29),
    [anon_sym_file] = ACTIONS(31),
    [sym_json] = ACTIONS(33),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(43),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(43),
    [anon_sym_HTTP_SLASH2] = ACTIONS(43),
    [anon_sym_HTTP] = ACTIONS(43),
    [sym_comment] = ACTIONS(35),
  },
  [6] = {
    [sym_request_section] = STATE(13),
    [sym_request_param_keyword] = STATE(73),
    [sym_input] = STATE(23),
    [sym__multiline_string_body] = STATE(19),
    [sym__json_language_hint] = STATE(19),
    [sym__xml_language_hint] = STATE(19),
    [sym__graphql_language_hint] = STATE(19),
    [sym_oneline_string] = STATE(19),
    [sym__base64] = STATE(19),
    [sym__hex] = STATE(19),
    [sym__oneline_file] = STATE(19),
    [aux_sym_request_repeat2] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_GET] = ACTIONS(37),
    [anon_sym_HEAD] = ACTIONS(37),
    [anon_sym_POST] = ACTIONS(37),
    [anon_sym_PUT] = ACTIONS(37),
    [anon_sym_DELETE] = ACTIONS(37),
    [anon_sym_CONNECT] = ACTIONS(37),
    [anon_sym_OPTIONS] = ACTIONS(37),
    [anon_sym_TRACE] = ACTIONS(37),
    [anon_sym_PATCH] = ACTIONS(37),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(45),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(45),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(45),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(45),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(45),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(17),
    [anon_sym_BQUOTE_BQUOTE_BQUOTEjson] = ACTIONS(47),
    [anon_sym_BQUOTE_BQUOTE_BQUOTExml] = ACTIONS(49),
    [anon_sym_BQUOTE_BQUOTE_BQUOTEgraphql] = ACTIONS(51),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_base64] = ACTIONS(53),
    [anon_sym_hex] = ACTIONS(55),
    [anon_sym_file] = ACTIONS(57),
    [sym_json] = ACTIONS(59),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(37),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(37),
    [anon_sym_HTTP_SLASH2] = ACTIONS(37),
    [anon_sym_HTTP] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_request_section] = STATE(13),
    [sym_request_param_keyword] = STATE(73),
    [sym_input] = STATE(28),
    [sym__multiline_string_body] = STATE(19),
    [sym__json_language_hint] = STATE(19),
    [sym__xml_language_hint] = STATE(19),
    [sym__graphql_language_hint] = STATE(19),
    [sym_oneline_string] = STATE(19),
    [sym__base64] = STATE(19),
    [sym__hex] = STATE(19),
    [sym__oneline_file] = STATE(19),
    [aux_sym_request_repeat2] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_GET] = ACTIONS(61),
    [anon_sym_HEAD] = ACTIONS(61),
    [anon_sym_POST] = ACTIONS(61),
    [anon_sym_PUT] = ACTIONS(61),
    [anon_sym_DELETE] = ACTIONS(61),
    [anon_sym_CONNECT] = ACTIONS(61),
    [anon_sym_OPTIONS] = ACTIONS(61),
    [anon_sym_TRACE] = ACTIONS(61),
    [anon_sym_PATCH] = ACTIONS(61),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(45),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(45),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(45),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(45),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(45),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(17),
    [anon_sym_BQUOTE_BQUOTE_BQUOTEjson] = ACTIONS(47),
    [anon_sym_BQUOTE_BQUOTE_BQUOTExml] = ACTIONS(49),
    [anon_sym_BQUOTE_BQUOTE_BQUOTEgraphql] = ACTIONS(51),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_base64] = ACTIONS(53),
    [anon_sym_hex] = ACTIONS(55),
    [anon_sym_file] = ACTIONS(57),
    [sym_json] = ACTIONS(59),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(61),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(61),
    [anon_sym_HTTP_SLASH2] = ACTIONS(61),
    [anon_sym_HTTP] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_request_section] = STATE(13),
    [sym_request_param_keyword] = STATE(73),
    [sym_input] = STATE(32),
    [sym__multiline_string_body] = STATE(19),
    [sym__json_language_hint] = STATE(19),
    [sym__xml_language_hint] = STATE(19),
    [sym__graphql_language_hint] = STATE(19),
    [sym_oneline_string] = STATE(19),
    [sym__base64] = STATE(19),
    [sym__hex] = STATE(19),
    [sym__oneline_file] = STATE(19),
    [aux_sym_request_repeat2] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_GET] = ACTIONS(41),
    [anon_sym_HEAD] = ACTIONS(41),
    [anon_sym_POST] = ACTIONS(41),
    [anon_sym_PUT] = ACTIONS(41),
    [anon_sym_DELETE] = ACTIONS(41),
    [anon_sym_CONNECT] = ACTIONS(41),
    [anon_sym_OPTIONS] = ACTIONS(41),
    [anon_sym_TRACE] = ACTIONS(41),
    [anon_sym_PATCH] = ACTIONS(41),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(45),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(45),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(45),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(45),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(45),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(45),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(17),
    [anon_sym_BQUOTE_BQUOTE_BQUOTEjson] = ACTIONS(47),
    [anon_sym_BQUOTE_BQUOTE_BQUOTExml] = ACTIONS(49),
    [anon_sym_BQUOTE_BQUOTE_BQUOTEgraphql] = ACTIONS(51),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_base64] = ACTIONS(53),
    [anon_sym_hex] = ACTIONS(55),
    [anon_sym_file] = ACTIONS(57),
    [sym_json] = ACTIONS(59),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(41),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(41),
    [anon_sym_HTTP_SLASH2] = ACTIONS(41),
    [anon_sym_HTTP] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 1,
      sym__lt,
    ACTIONS(72), 1,
      sym_key,
    STATE(9), 1,
      aux_sym__header,
    STATE(72), 1,
      sym_key_value,
    ACTIONS(67), 28,
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
  [49] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_key,
    STATE(12), 2,
      sym_key_value,
      aux_sym_request_section_repeat1,
    ACTIONS(75), 14,
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
    ACTIONS(77), 15,
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
  [93] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_key,
    STATE(10), 2,
      sym_key_value,
      aux_sym_request_section_repeat1,
    ACTIONS(81), 14,
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
    ACTIONS(83), 15,
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
  [137] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      sym_key,
    STATE(12), 2,
      sym_key_value,
      aux_sym_request_section_repeat1,
    ACTIONS(85), 14,
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
    ACTIONS(87), 15,
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
  [181] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(73), 1,
      sym_request_param_keyword,
    STATE(13), 2,
      sym_request_section,
      aux_sym_request_repeat2,
    ACTIONS(97), 3,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_BQUOTE,
      anon_sym_HTTP,
    ACTIONS(94), 6,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
    ACTIONS(92), 20,
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
      anon_sym_BQUOTE_BQUOTE_BQUOTEjson,
      anon_sym_BQUOTE_BQUOTE_BQUOTExml,
      anon_sym_BQUOTE_BQUOTE_BQUOTEgraphql,
      anon_sym_base64,
      anon_sym_hex,
      anon_sym_file,
      sym_json,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
  [227] = 3,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      sym__lt,
    ACTIONS(101), 29,
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
  [266] = 3,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      sym__lt,
    ACTIONS(67), 29,
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
  [305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 14,
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
    ACTIONS(105), 16,
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
  [343] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 14,
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
    ACTIONS(109), 16,
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
  [381] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_HTTP,
    STATE(35), 1,
      sym_version_and_status,
    STATE(36), 1,
      sym_response,
    STATE(79), 1,
      sym_http_version,
    ACTIONS(113), 3,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
    ACTIONS(111), 10,
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
  [414] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_HTTP,
    ACTIONS(117), 13,
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
  [436] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_HTTP,
    ACTIONS(121), 13,
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
  [458] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      sym_request,
    STATE(81), 1,
      sym_http_method,
    STATE(21), 2,
      sym__request_response,
      aux_sym_entry_repeat1,
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
  [486] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_HTTP,
    ACTIONS(130), 13,
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
  [508] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_HTTP,
    ACTIONS(41), 13,
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
  [530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_HTTP,
    ACTIONS(134), 13,
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
  [552] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_HTTP,
    ACTIONS(138), 13,
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
  [574] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_HTTP,
    ACTIONS(142), 13,
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
  [596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_HTTP,
    ACTIONS(146), 13,
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
  [618] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_HTTP,
    ACTIONS(150), 13,
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
  [640] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      sym_request,
    STATE(81), 1,
      sym_http_method,
    STATE(21), 2,
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
  [668] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_HTTP,
    ACTIONS(37), 13,
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
  [690] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_HTTP,
    ACTIONS(156), 13,
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
  [712] = 3,
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
  [734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_HTTP,
    ACTIONS(160), 13,
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
  [756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 10,
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
  [772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 10,
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
  [788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 10,
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
  [804] = 4,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(172), 1,
      sym_value_string_text,
    STATE(41), 1,
      aux_sym__value_string_content,
    ACTIONS(170), 2,
      sym__sp,
      sym__lt,
  [818] = 5,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_SEMI,
    ACTIONS(176), 1,
      sym_filename_escaped_char,
    ACTIONS(178), 1,
      sym_filename_text,
    STATE(40), 1,
      aux_sym_filename_repeat1,
  [834] = 5,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_filename_escaped_char,
    ACTIONS(182), 1,
      sym_filename_text,
    STATE(38), 1,
      aux_sym_filename_repeat1,
    STATE(68), 1,
      sym_filename,
  [850] = 5,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_SEMI,
    ACTIONS(186), 1,
      sym_filename_escaped_char,
    ACTIONS(189), 1,
      sym_filename_text,
    STATE(40), 1,
      aux_sym_filename_repeat1,
  [866] = 4,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym_value_string_text,
    STATE(41), 1,
      aux_sym__value_string_content,
    ACTIONS(192), 2,
      sym__sp,
      sym__lt,
  [880] = 4,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym__sp,
    ACTIONS(200), 1,
      sym__lt,
    STATE(42), 1,
      aux_sym_request_repeat1,
  [893] = 3,
    ACTIONS(35), 1,
      sym_comment,
    STATE(59), 1,
      sym_value,
    ACTIONS(202), 2,
      sym_variable,
      aux_sym_value_token1,
  [904] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      sym_hexidigit,
    ACTIONS(206), 1,
      anon_sym_SEMI,
    STATE(47), 1,
      aux_sym_oneline_hex_repeat1,
  [917] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      sym_hexidigit,
    STATE(44), 1,
      aux_sym_oneline_hex_repeat1,
    STATE(66), 1,
      sym_oneline_hex,
  [930] = 3,
    ACTIONS(35), 1,
      sym_comment,
    STATE(16), 1,
      sym_value,
    ACTIONS(210), 2,
      sym_variable,
      aux_sym_value_token1,
  [941] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      sym_hexidigit,
    ACTIONS(215), 1,
      anon_sym_SEMI,
    STATE(47), 1,
      aux_sym_oneline_hex_repeat1,
  [954] = 4,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(217), 1,
      sym__sp,
    ACTIONS(219), 1,
      sym__lt,
    STATE(42), 1,
      aux_sym_request_repeat1,
  [967] = 4,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(221), 1,
      sym__sp,
    ACTIONS(223), 1,
      sym__lt,
    STATE(48), 1,
      aux_sym_request_repeat1,
  [980] = 4,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(225), 1,
      sym_value_string_text,
    STATE(37), 1,
      aux_sym__value_string_content,
    STATE(49), 1,
      sym__value_string,
  [993] = 3,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(227), 1,
      aux_sym_multiline_string_token1,
    STATE(57), 1,
      sym_inner_language_hint,
  [1003] = 3,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(227), 1,
      aux_sym_multiline_string_token1,
    STATE(64), 1,
      sym_inner_language_hint,
  [1013] = 3,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(227), 1,
      aux_sym_multiline_string_token1,
    STATE(63), 1,
      sym_inner_language_hint,
  [1023] = 3,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(229), 1,
      aux_sym_multiline_string_token1,
    STATE(69), 1,
      sym_multiline_string,
  [1033] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym_key,
    STATE(71), 1,
      sym_key_value,
  [1043] = 2,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(233), 1,
      sym__lt,
  [1050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [1057] = 2,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(107), 1,
      sym__lt,
  [1064] = 2,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(103), 1,
      sym__lt,
  [1071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_BQUOTE,
  [1078] = 2,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym_oneline_base64,
  [1085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [1092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [1099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [1106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_SEMI,
  [1113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_SEMI,
  [1120] = 2,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym__sp,
  [1127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_SEMI,
  [1134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [1141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [1148] = 2,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym__lt,
  [1155] = 2,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(261), 1,
      sym__lt,
  [1162] = 2,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym__lt,
  [1169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_COMMA,
  [1176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_COMMA,
  [1183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_COMMA,
  [1190] = 2,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(271), 1,
      aux_sym_oneline_string_token1,
  [1197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_COLON,
  [1204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      sym_status,
  [1211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_status,
  [1218] = 2,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(279), 1,
      sym__sp,
  [1225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      ts_builtin_sym_end,
  [1232] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 49,
  [SMALL_STATE(11)] = 93,
  [SMALL_STATE(12)] = 137,
  [SMALL_STATE(13)] = 181,
  [SMALL_STATE(14)] = 227,
  [SMALL_STATE(15)] = 266,
  [SMALL_STATE(16)] = 305,
  [SMALL_STATE(17)] = 343,
  [SMALL_STATE(18)] = 381,
  [SMALL_STATE(19)] = 414,
  [SMALL_STATE(20)] = 436,
  [SMALL_STATE(21)] = 458,
  [SMALL_STATE(22)] = 486,
  [SMALL_STATE(23)] = 508,
  [SMALL_STATE(24)] = 530,
  [SMALL_STATE(25)] = 552,
  [SMALL_STATE(26)] = 574,
  [SMALL_STATE(27)] = 596,
  [SMALL_STATE(28)] = 618,
  [SMALL_STATE(29)] = 640,
  [SMALL_STATE(30)] = 668,
  [SMALL_STATE(31)] = 690,
  [SMALL_STATE(32)] = 712,
  [SMALL_STATE(33)] = 734,
  [SMALL_STATE(34)] = 756,
  [SMALL_STATE(35)] = 772,
  [SMALL_STATE(36)] = 788,
  [SMALL_STATE(37)] = 804,
  [SMALL_STATE(38)] = 818,
  [SMALL_STATE(39)] = 834,
  [SMALL_STATE(40)] = 850,
  [SMALL_STATE(41)] = 866,
  [SMALL_STATE(42)] = 880,
  [SMALL_STATE(43)] = 893,
  [SMALL_STATE(44)] = 904,
  [SMALL_STATE(45)] = 917,
  [SMALL_STATE(46)] = 930,
  [SMALL_STATE(47)] = 941,
  [SMALL_STATE(48)] = 954,
  [SMALL_STATE(49)] = 967,
  [SMALL_STATE(50)] = 980,
  [SMALL_STATE(51)] = 993,
  [SMALL_STATE(52)] = 1003,
  [SMALL_STATE(53)] = 1013,
  [SMALL_STATE(54)] = 1023,
  [SMALL_STATE(55)] = 1033,
  [SMALL_STATE(56)] = 1043,
  [SMALL_STATE(57)] = 1050,
  [SMALL_STATE(58)] = 1057,
  [SMALL_STATE(59)] = 1064,
  [SMALL_STATE(60)] = 1071,
  [SMALL_STATE(61)] = 1078,
  [SMALL_STATE(62)] = 1085,
  [SMALL_STATE(63)] = 1092,
  [SMALL_STATE(64)] = 1099,
  [SMALL_STATE(65)] = 1106,
  [SMALL_STATE(66)] = 1113,
  [SMALL_STATE(67)] = 1120,
  [SMALL_STATE(68)] = 1127,
  [SMALL_STATE(69)] = 1134,
  [SMALL_STATE(70)] = 1141,
  [SMALL_STATE(71)] = 1148,
  [SMALL_STATE(72)] = 1155,
  [SMALL_STATE(73)] = 1162,
  [SMALL_STATE(74)] = 1169,
  [SMALL_STATE(75)] = 1176,
  [SMALL_STATE(76)] = 1183,
  [SMALL_STATE(77)] = 1190,
  [SMALL_STATE(78)] = 1197,
  [SMALL_STATE(79)] = 1204,
  [SMALL_STATE(80)] = 1211,
  [SMALL_STATE(81)] = 1218,
  [SMALL_STATE(82)] = 1225,
  [SMALL_STATE(83)] = 1232,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__header, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__header, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__header, 2), SHIFT_REPEAT(55),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__header, 2), SHIFT_REPEAT(78),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_section, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_section, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_section, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_section, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_section_repeat1, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_section_repeat1, 2),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_section_repeat1, 2), SHIFT_REPEAT(83),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(56),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__header, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__header, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__request_response, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__graphql_language_hint, 3, .production_id = 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__graphql_language_hint, 3, .production_id = 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entry_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(67),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xml_language_hint, 3, .production_id = 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xml_language_hint, 3, .production_id = 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__oneline_file, 4),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__oneline_file, 4),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hex, 4),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hex, 4),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__base64, 4),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__base64, 4),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_language_hint, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__json_language_hint, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string, 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_string_body, 3),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_string_body, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_and_status, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__request_response, 2),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value_string, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(40),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(40),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__value_string_content, 2),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value_string_content, 2), SHIFT_REPEAT(41),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(42),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_hex, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneline_hex_repeat1, 2), SHIFT_REPEAT(47),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneline_hex_repeat1, 2),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_param_keyword, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inner_language_hint, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_method, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [281] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
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
