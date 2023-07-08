#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 22
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
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
  sym_header_key = 12,
  sym_header_value = 13,
  sym_json = 14,
  anon_sym_HTTP_SLASH1_DOT0 = 15,
  anon_sym_HTTP_SLASH1_DOT1 = 16,
  anon_sym_HTTP_SLASH2 = 17,
  anon_sym_HTTP = 18,
  sym_status = 19,
  sym_comment = 20,
  sym_source_file = 21,
  sym_request_response = 22,
  sym_request = 23,
  sym_http_method = 24,
  sym_header = 25,
  sym_input = 26,
  sym_response = 27,
  sym_version_and_status = 28,
  sym_http_version = 29,
  aux_sym_source_file_repeat1 = 30,
  aux_sym_request_repeat1 = 31,
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
  [sym_header_key] = "header_key",
  [sym_header_value] = "header_value",
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
  [sym_header] = "header",
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
  [sym_header_key] = sym_header_key,
  [sym_header_value] = sym_header_value,
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
  [sym_header] = sym_header,
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
  [sym_header_key] = {
    .visible = true,
    .named = true,
  },
  [sym_header_value] = {
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
  [sym_header] = {
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
};

static inline bool sym_header_key_character_set_1(int32_t c) {
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

static inline bool sym_header_key_character_set_2(int32_t c) {
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
      if (eof) ADVANCE(53);
      if (lookahead == '#') ADVANCE(122);
      if (sym_header_key_character_set_1(lookahead)) ADVANCE(111);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == 'C') ADVANCE(94);
      if (lookahead == 'D') ADVANCE(82);
      if (lookahead == 'G') ADVANCE(83);
      if (lookahead == 'H') ADVANCE(77);
      if (lookahead == 'O') ADVANCE(97);
      if (lookahead == 'P') ADVANCE(76);
      if (lookahead == 'T') ADVANCE(98);
      if (lookahead == '{') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(75);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(112);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('$' <= lookahead && lookahead <= '~')) ADVANCE(113);
      if (lookahead == '#') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(49);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(116);
      if (lookahead == '1') ADVANCE(117);
      END_STATE();
    case 6:
      if (lookahead == '1') ADVANCE(2);
      if (lookahead == '2') ADVANCE(118);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(4);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(38);
      if (lookahead == 'O') ADVANCE(35);
      if (lookahead == 'U') ADVANCE(39);
      END_STATE();
    case 12:
      if (lookahead == 'C') ADVANCE(23);
      END_STATE();
    case 13:
      if (lookahead == 'C') ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == 'C') ADVANCE(41);
      END_STATE();
    case 15:
      if (lookahead == 'D') ADVANCE(56);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(25);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(36);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(9);
      if (lookahead == 'T') ADVANCE(42);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(68);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(62);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(14);
      END_STATE();
    case 22:
      if (lookahead == 'E') ADVANCE(43);
      END_STATE();
    case 23:
      if (lookahead == 'H') ADVANCE(70);
      END_STATE();
    case 24:
      if (lookahead == 'I') ADVANCE(30);
      END_STATE();
    case 25:
      if (lookahead == 'L') ADVANCE(22);
      END_STATE();
    case 26:
      if (lookahead == 'N') ADVANCE(28);
      END_STATE();
    case 27:
      if (lookahead == 'N') ADVANCE(34);
      END_STATE();
    case 28:
      if (lookahead == 'N') ADVANCE(21);
      END_STATE();
    case 29:
      if (lookahead == 'O') ADVANCE(26);
      END_STATE();
    case 30:
      if (lookahead == 'O') ADVANCE(27);
      END_STATE();
    case 31:
      if (lookahead == 'P') ADVANCE(119);
      END_STATE();
    case 32:
      if (lookahead == 'P') ADVANCE(37);
      END_STATE();
    case 33:
      if (lookahead == 'R') ADVANCE(10);
      END_STATE();
    case 34:
      if (lookahead == 'S') ADVANCE(66);
      END_STATE();
    case 35:
      if (lookahead == 'S') ADVANCE(40);
      END_STATE();
    case 36:
      if (lookahead == 'T') ADVANCE(54);
      END_STATE();
    case 37:
      if (lookahead == 'T') ADVANCE(24);
      END_STATE();
    case 38:
      if (lookahead == 'T') ADVANCE(12);
      END_STATE();
    case 39:
      if (lookahead == 'T') ADVANCE(60);
      END_STATE();
    case 40:
      if (lookahead == 'T') ADVANCE(58);
      END_STATE();
    case 41:
      if (lookahead == 'T') ADVANCE(64);
      END_STATE();
    case 42:
      if (lookahead == 'T') ADVANCE(31);
      END_STATE();
    case 43:
      if (lookahead == 'T') ADVANCE(20);
      END_STATE();
    case 44:
      if (lookahead == 'p') ADVANCE(8);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 49:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(72);
      END_STATE();
    case 50:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(50);
      if (lookahead == '}') ADVANCE(115);
      END_STATE();
    case 51:
      if (eof) ADVANCE(53);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == 'C') ADVANCE(29);
      if (lookahead == 'D') ADVANCE(16);
      if (lookahead == 'G') ADVANCE(17);
      if (lookahead == 'H') ADVANCE(18);
      if (lookahead == 'O') ADVANCE(32);
      if (lookahead == 'P') ADVANCE(11);
      if (lookahead == 'T') ADVANCE(33);
      if (lookahead == 'h') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(48);
      END_STATE();
    case 52:
      if (eof) ADVANCE(53);
      if (lookahead == '#') ADVANCE(122);
      if (sym_header_key_character_set_2(lookahead)) ADVANCE(111);
      if (lookahead == 'C') ADVANCE(94);
      if (lookahead == 'D') ADVANCE(82);
      if (lookahead == 'G') ADVANCE(83);
      if (lookahead == 'H') ADVANCE(77);
      if (lookahead == 'O') ADVANCE(97);
      if (lookahead == 'P') ADVANCE(76);
      if (lookahead == 'T') ADVANCE(98);
      if (lookahead == '{') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      END_STATE();
    case 53:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_GET);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_POST);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_PATCH);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_header_key);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_header_key);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_header_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= 'T') ||
          ('V' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (lookahead == 'A') ADVANCE(103);
      if (lookahead == 'O') ADVANCE(100);
      if (lookahead == 'U') ADVANCE(104);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_header_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (lookahead == 'E') ADVANCE(109);
      if (lookahead == 'T') ADVANCE(107);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_header_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'A' ||
          lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (lookahead == 'C') ADVANCE(88);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_header_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'A' ||
          lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (lookahead == 'C') ADVANCE(84);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_header_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'A' ||
          lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (lookahead == 'C') ADVANCE(106);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_header_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('E' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (lookahead == 'D') ADVANCE(57);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_header_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (lookahead == 'E') ADVANCE(90);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_header_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (lookahead == 'E') ADVANCE(101);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_header_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (lookahead == 'E') ADVANCE(69);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_header_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (lookahead == 'E') ADVANCE(63);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_header_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (lookahead == 'E') ADVANCE(80);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_header_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (lookahead == 'E') ADVANCE(108);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_header_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'G') ||
          ('I' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (lookahead == 'H') ADVANCE(71);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_header_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'H') ||
          ('J' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (lookahead == 'I') ADVANCE(95);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_header_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'K') ||
          ('M' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (lookahead == 'L') ADVANCE(87);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_header_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (lookahead == 'N') ADVANCE(93);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_header_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (lookahead == 'N') ADVANCE(99);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_header_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (lookahead == 'N') ADVANCE(86);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_header_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (lookahead == 'O') ADVANCE(91);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_header_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'N') ||
          ('P' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (lookahead == 'O') ADVANCE(92);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_header_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (lookahead == 'P') ADVANCE(120);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_header_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (lookahead == 'P') ADVANCE(102);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_header_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Q') ||
          ('S' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (lookahead == 'R') ADVANCE(110);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_header_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (lookahead == 'S') ADVANCE(67);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_header_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (lookahead == 'S') ADVANCE(105);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_header_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (lookahead == 'T') ADVANCE(55);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_header_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (lookahead == 'T') ADVANCE(89);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_header_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (lookahead == 'T') ADVANCE(78);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_header_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (lookahead == 'T') ADVANCE(61);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_header_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (lookahead == 'T') ADVANCE(59);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_header_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (lookahead == 'T') ADVANCE(65);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_header_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (lookahead == 'T') ADVANCE(96);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_header_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'S') ||
          ('U' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (lookahead == 'T') ADVANCE(85);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_header_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (lookahead == 'A') ADVANCE(81);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_header_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (lookahead == 'A') ADVANCE(79);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_header_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead == ' ') ADVANCE(112);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('$' <= lookahead && lookahead <= '~')) ADVANCE(113);
      if (lookahead == '#') ADVANCE(114);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_header_value);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_header_value);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(122);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_json);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(50);
      if (lookahead == '}') ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT0);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT1);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH2);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_HTTP);
      if (lookahead == '/') ADVANCE(6);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_HTTP);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (lookahead == '/') ADVANCE(6);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_status);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(122);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 51},
  [2] = {.lex_state = 52},
  [3] = {.lex_state = 52},
  [4] = {.lex_state = 52},
  [5] = {.lex_state = 51},
  [6] = {.lex_state = 52},
  [7] = {.lex_state = 51},
  [8] = {.lex_state = 51},
  [9] = {.lex_state = 51},
  [10] = {.lex_state = 51},
  [11] = {.lex_state = 51},
  [12] = {.lex_state = 51},
  [13] = {.lex_state = 51},
  [14] = {.lex_state = 51},
  [15] = {.lex_state = 51},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 51},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 51},
  [20] = {.lex_state = 51},
  [21] = {.lex_state = 0},
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
    [sym_header_key] = ACTIONS(1),
    [sym_json] = ACTIONS(1),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(1),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(1),
    [anon_sym_HTTP_SLASH2] = ACTIONS(1),
    [anon_sym_HTTP] = ACTIONS(1),
    [sym_status] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(21),
    [sym_request_response] = STATE(8),
    [sym_request] = STATE(5),
    [sym_http_method] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(8),
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
    [sym_header] = STATE(4),
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
    [sym_header_key] = ACTIONS(11),
    [sym_json] = ACTIONS(13),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(7),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(7),
    [anon_sym_HTTP_SLASH2] = ACTIONS(7),
    [anon_sym_HTTP] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_header] = STATE(2),
    [sym_input] = STATE(7),
    [aux_sym_request_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_GET] = ACTIONS(17),
    [anon_sym_HEAD] = ACTIONS(17),
    [anon_sym_POST] = ACTIONS(17),
    [anon_sym_PUT] = ACTIONS(17),
    [anon_sym_DELETE] = ACTIONS(17),
    [anon_sym_CONNECT] = ACTIONS(17),
    [anon_sym_OPTIONS] = ACTIONS(17),
    [anon_sym_TRACE] = ACTIONS(17),
    [anon_sym_PATCH] = ACTIONS(17),
    [sym_header_key] = ACTIONS(11),
    [sym_json] = ACTIONS(13),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(15),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(15),
    [anon_sym_HTTP_SLASH2] = ACTIONS(15),
    [anon_sym_HTTP] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_header] = STATE(4),
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
    [sym_header_key] = ACTIONS(23),
    [sym_json] = ACTIONS(19),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(19),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(19),
    [anon_sym_HTTP_SLASH2] = ACTIONS(19),
    [anon_sym_HTTP] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_response] = STATE(12),
    [sym_version_and_status] = STATE(13),
    [sym_http_version] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(26),
    [anon_sym_GET] = ACTIONS(26),
    [anon_sym_HEAD] = ACTIONS(26),
    [anon_sym_POST] = ACTIONS(26),
    [anon_sym_PUT] = ACTIONS(26),
    [anon_sym_DELETE] = ACTIONS(26),
    [anon_sym_CONNECT] = ACTIONS(26),
    [anon_sym_OPTIONS] = ACTIONS(26),
    [anon_sym_TRACE] = ACTIONS(26),
    [anon_sym_PATCH] = ACTIONS(26),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(28),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(28),
    [anon_sym_HTTP_SLASH2] = ACTIONS(28),
    [anon_sym_HTTP] = ACTIONS(30),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(32),
    [anon_sym_GET] = ACTIONS(34),
    [anon_sym_HEAD] = ACTIONS(34),
    [anon_sym_POST] = ACTIONS(34),
    [anon_sym_PUT] = ACTIONS(34),
    [anon_sym_DELETE] = ACTIONS(34),
    [anon_sym_CONNECT] = ACTIONS(34),
    [anon_sym_OPTIONS] = ACTIONS(34),
    [anon_sym_TRACE] = ACTIONS(34),
    [anon_sym_PATCH] = ACTIONS(34),
    [sym_header_key] = ACTIONS(34),
    [sym_json] = ACTIONS(32),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(32),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(32),
    [anon_sym_HTTP_SLASH2] = ACTIONS(32),
    [anon_sym_HTTP] = ACTIONS(34),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
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
  [22] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_request,
    STATE(15), 1,
      sym_http_method,
    STATE(10), 2,
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
  [50] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      anon_sym_HTTP,
    ACTIONS(38), 13,
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
  [72] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_request,
    STATE(15), 1,
      sym_http_method,
    STATE(10), 2,
      sym_request_response,
      aux_sym_source_file_repeat1,
    ACTIONS(44), 9,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
  [100] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_HTTP,
    ACTIONS(47), 13,
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
  [122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 10,
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
  [138] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [154] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [170] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym_url,
  [177] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_COLON,
  [184] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym_url,
  [191] = 2,
    ACTIONS(63), 1,
      sym_header_value,
    ACTIONS(65), 1,
      sym_comment,
  [198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_status,
  [205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym_status,
  [212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 22,
  [SMALL_STATE(9)] = 50,
  [SMALL_STATE(10)] = 72,
  [SMALL_STATE(11)] = 100,
  [SMALL_STATE(12)] = 122,
  [SMALL_STATE(13)] = 138,
  [SMALL_STATE(14)] = 154,
  [SMALL_STATE(15)] = 170,
  [SMALL_STATE(16)] = 177,
  [SMALL_STATE(17)] = 184,
  [SMALL_STATE(18)] = 191,
  [SMALL_STATE(19)] = 198,
  [SMALL_STATE(20)] = 205,
  [SMALL_STATE(21)] = 212,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(16),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_response, 1),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_response, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_and_status, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_method, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 1),
  [71] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
