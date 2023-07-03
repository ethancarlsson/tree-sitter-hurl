#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 16
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
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
  sym_json = 11,
  anon_sym_HTTP_SLASH1_DOT0 = 12,
  anon_sym_HTTP_SLASH1_DOT1 = 13,
  anon_sym_HTTP_SLASH2 = 14,
  anon_sym_HTTP = 15,
  sym_status = 16,
  sym_comment = 17,
  sym_source_file = 18,
  sym_request_response = 19,
  sym_request = 20,
  sym_http_method = 21,
  sym_input = 22,
  sym_response = 23,
  sym_version_and_status = 24,
  sym_http_version = 25,
  aux_sym_source_file_repeat1 = 26,
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
  [sym_input] = "input",
  [sym_response] = "response",
  [sym_version_and_status] = "version_and_status",
  [sym_http_version] = "http_version",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
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
  [sym_input] = sym_input,
  [sym_response] = sym_response,
  [sym_version_and_status] = sym_version_and_status,
  [sym_http_version] = sym_http_version,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(50);
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == 'C') ADVANCE(28);
      if (lookahead == 'D') ADVANCE(15);
      if (lookahead == 'G') ADVANCE(16);
      if (lookahead == 'H') ADVANCE(17);
      if (lookahead == 'O') ADVANCE(31);
      if (lookahead == 'P') ADVANCE(10);
      if (lookahead == 'T') ADVANCE(32);
      if (lookahead == 'h') ADVANCE(45);
      if (lookahead == '{') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(47);
      END_STATE();
    case 1:
      if (lookahead == '.') ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(48);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == '0') ADVANCE(62);
      if (lookahead == '1') ADVANCE(63);
      END_STATE();
    case 5:
      if (lookahead == '1') ADVANCE(1);
      if (lookahead == '2') ADVANCE(64);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(3);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == 's') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(37);
      if (lookahead == 'O') ADVANCE(34);
      if (lookahead == 'U') ADVANCE(38);
      END_STATE();
    case 11:
      if (lookahead == 'C') ADVANCE(22);
      END_STATE();
    case 12:
      if (lookahead == 'C') ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == 'C') ADVANCE(40);
      END_STATE();
    case 14:
      if (lookahead == 'D') ADVANCE(52);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(35);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(8);
      if (lookahead == 'T') ADVANCE(41);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(58);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(55);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(13);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(42);
      END_STATE();
    case 22:
      if (lookahead == 'H') ADVANCE(59);
      END_STATE();
    case 23:
      if (lookahead == 'I') ADVANCE(29);
      END_STATE();
    case 24:
      if (lookahead == 'L') ADVANCE(21);
      END_STATE();
    case 25:
      if (lookahead == 'N') ADVANCE(27);
      END_STATE();
    case 26:
      if (lookahead == 'N') ADVANCE(33);
      END_STATE();
    case 27:
      if (lookahead == 'N') ADVANCE(20);
      END_STATE();
    case 28:
      if (lookahead == 'O') ADVANCE(25);
      END_STATE();
    case 29:
      if (lookahead == 'O') ADVANCE(26);
      END_STATE();
    case 30:
      if (lookahead == 'P') ADVANCE(65);
      END_STATE();
    case 31:
      if (lookahead == 'P') ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == 'R') ADVANCE(9);
      END_STATE();
    case 33:
      if (lookahead == 'S') ADVANCE(57);
      END_STATE();
    case 34:
      if (lookahead == 'S') ADVANCE(39);
      END_STATE();
    case 35:
      if (lookahead == 'T') ADVANCE(51);
      END_STATE();
    case 36:
      if (lookahead == 'T') ADVANCE(23);
      END_STATE();
    case 37:
      if (lookahead == 'T') ADVANCE(11);
      END_STATE();
    case 38:
      if (lookahead == 'T') ADVANCE(54);
      END_STATE();
    case 39:
      if (lookahead == 'T') ADVANCE(53);
      END_STATE();
    case 40:
      if (lookahead == 'T') ADVANCE(56);
      END_STATE();
    case 41:
      if (lookahead == 'T') ADVANCE(30);
      END_STATE();
    case 42:
      if (lookahead == 'T') ADVANCE(19);
      END_STATE();
    case 43:
      if (lookahead == 'p') ADVANCE(7);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 48:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(60);
      END_STATE();
    case 49:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(49);
      if (lookahead == '}') ADVANCE(61);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_PATCH);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_json);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(49);
      if (lookahead == '}') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT0);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT1);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH2);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_HTTP);
      if (lookahead == '/') ADVANCE(5);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_status);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
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
    [sym_url] = ACTIONS(1),
    [sym_json] = ACTIONS(1),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(1),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(1),
    [anon_sym_HTTP_SLASH2] = ACTIONS(1),
    [anon_sym_HTTP] = ACTIONS(1),
    [sym_status] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(12),
    [sym_request_response] = STATE(4),
    [sym_request] = STATE(2),
    [sym_http_method] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(4),
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
    [sym_response] = STATE(8),
    [sym_version_and_status] = STATE(9),
    [sym_http_version] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_GET] = ACTIONS(7),
    [anon_sym_HEAD] = ACTIONS(7),
    [anon_sym_POST] = ACTIONS(7),
    [anon_sym_PUT] = ACTIONS(7),
    [anon_sym_DELETE] = ACTIONS(7),
    [anon_sym_CONNECT] = ACTIONS(7),
    [anon_sym_OPTIONS] = ACTIONS(7),
    [anon_sym_TRACE] = ACTIONS(7),
    [anon_sym_PATCH] = ACTIONS(7),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(9),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(9),
    [anon_sym_HTTP_SLASH2] = ACTIONS(9),
    [anon_sym_HTTP] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_input] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_GET] = ACTIONS(13),
    [anon_sym_HEAD] = ACTIONS(13),
    [anon_sym_POST] = ACTIONS(13),
    [anon_sym_PUT] = ACTIONS(13),
    [anon_sym_DELETE] = ACTIONS(13),
    [anon_sym_CONNECT] = ACTIONS(13),
    [anon_sym_OPTIONS] = ACTIONS(13),
    [anon_sym_TRACE] = ACTIONS(13),
    [anon_sym_PATCH] = ACTIONS(13),
    [sym_json] = ACTIONS(15),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(13),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(13),
    [anon_sym_HTTP_SLASH2] = ACTIONS(13),
    [anon_sym_HTTP] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_request_response] = STATE(5),
    [sym_request] = STATE(2),
    [sym_http_method] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(19),
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
  [5] = {
    [sym_request_response] = STATE(5),
    [sym_request] = STATE(2),
    [sym_http_method] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(5),
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
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
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
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(26),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(26),
    [anon_sym_HTTP_SLASH2] = ACTIONS(26),
    [anon_sym_HTTP] = ACTIONS(28),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(30),
    [anon_sym_GET] = ACTIONS(30),
    [anon_sym_HEAD] = ACTIONS(30),
    [anon_sym_POST] = ACTIONS(30),
    [anon_sym_PUT] = ACTIONS(30),
    [anon_sym_DELETE] = ACTIONS(30),
    [anon_sym_CONNECT] = ACTIONS(30),
    [anon_sym_OPTIONS] = ACTIONS(30),
    [anon_sym_TRACE] = ACTIONS(30),
    [anon_sym_PATCH] = ACTIONS(30),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(30),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(30),
    [anon_sym_HTTP_SLASH2] = ACTIONS(30),
    [anon_sym_HTTP] = ACTIONS(32),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 10,
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
  [16] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 10,
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
  [32] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 10,
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
  [48] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      sym_url,
  [55] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
  [62] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      sym_url,
  [69] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      sym_status,
  [76] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      sym_status,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 16,
  [SMALL_STATE(10)] = 32,
  [SMALL_STATE(11)] = 48,
  [SMALL_STATE(12)] = 55,
  [SMALL_STATE(13)] = 62,
  [SMALL_STATE(14)] = 69,
  [SMALL_STATE(15)] = 76,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_response, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 1),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input, 1),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_response, 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_and_status, 2),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_method, 1),
  [42] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
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
