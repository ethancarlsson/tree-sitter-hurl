#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 8
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
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
  anon_sym_get = 10,
  anon_sym_head = 11,
  anon_sym_post = 12,
  anon_sym_put = 13,
  anon_sym_delete = 14,
  anon_sym_connect = 15,
  anon_sym_options = 16,
  anon_sym_trace = 17,
  anon_sym_patch = 18,
  sym_url = 19,
  sym_source_file = 20,
  sym_request = 21,
  sym_http_method = 22,
  aux_sym_source_file_repeat1 = 23,
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
  [anon_sym_get] = "get",
  [anon_sym_head] = "head",
  [anon_sym_post] = "post",
  [anon_sym_put] = "put",
  [anon_sym_delete] = "delete",
  [anon_sym_connect] = "connect",
  [anon_sym_options] = "options",
  [anon_sym_trace] = "trace",
  [anon_sym_patch] = "patch",
  [sym_url] = "url",
  [sym_source_file] = "source_file",
  [sym_request] = "request",
  [sym_http_method] = "http_method",
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
  [anon_sym_get] = anon_sym_get,
  [anon_sym_head] = anon_sym_head,
  [anon_sym_post] = anon_sym_post,
  [anon_sym_put] = anon_sym_put,
  [anon_sym_delete] = anon_sym_delete,
  [anon_sym_connect] = anon_sym_connect,
  [anon_sym_options] = anon_sym_options,
  [anon_sym_trace] = anon_sym_trace,
  [anon_sym_patch] = anon_sym_patch,
  [sym_url] = sym_url,
  [sym_source_file] = sym_source_file,
  [sym_request] = sym_request,
  [sym_http_method] = sym_http_method,
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
  [anon_sym_get] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_head] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_post] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_put] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_connect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_options] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_patch] = {
    .visible = true,
    .named = false,
  },
  [sym_url] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(74);
      if (lookahead == 'C') ADVANCE(25);
      if (lookahead == 'D') ADVANCE(12);
      if (lookahead == 'G') ADVANCE(13);
      if (lookahead == 'H') ADVANCE(14);
      if (lookahead == 'O') ADVANCE(27);
      if (lookahead == 'P') ADVANCE(7);
      if (lookahead == 'T') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(58);
      if (lookahead == 'd') ADVANCE(45);
      if (lookahead == 'g') ADVANCE(46);
      if (lookahead == 'h') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(61);
      if (lookahead == 'p') ADVANCE(40);
      if (lookahead == 't') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '/') ADVANCE(73);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(2);
      if (lookahead == 's') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == 'A') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(33);
      if (lookahead == 'O') ADVANCE(30);
      if (lookahead == 'U') ADVANCE(34);
      END_STATE();
    case 8:
      if (lookahead == 'C') ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == 'C') ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == 'C') ADVANCE(36);
      END_STATE();
    case 11:
      if (lookahead == 'D') ADVANCE(76);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(31);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(5);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(82);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(79);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(10);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(37);
      END_STATE();
    case 19:
      if (lookahead == 'H') ADVANCE(83);
      END_STATE();
    case 20:
      if (lookahead == 'I') ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == 'L') ADVANCE(18);
      END_STATE();
    case 22:
      if (lookahead == 'N') ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == 'N') ADVANCE(29);
      END_STATE();
    case 24:
      if (lookahead == 'N') ADVANCE(17);
      END_STATE();
    case 25:
      if (lookahead == 'O') ADVANCE(22);
      END_STATE();
    case 26:
      if (lookahead == 'O') ADVANCE(23);
      END_STATE();
    case 27:
      if (lookahead == 'P') ADVANCE(32);
      END_STATE();
    case 28:
      if (lookahead == 'R') ADVANCE(6);
      END_STATE();
    case 29:
      if (lookahead == 'S') ADVANCE(81);
      END_STATE();
    case 30:
      if (lookahead == 'S') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == 'T') ADVANCE(75);
      END_STATE();
    case 32:
      if (lookahead == 'T') ADVANCE(20);
      END_STATE();
    case 33:
      if (lookahead == 'T') ADVANCE(8);
      END_STATE();
    case 34:
      if (lookahead == 'T') ADVANCE(78);
      END_STATE();
    case 35:
      if (lookahead == 'T') ADVANCE(77);
      END_STATE();
    case 36:
      if (lookahead == 'T') ADVANCE(80);
      END_STATE();
    case 37:
      if (lookahead == 'T') ADVANCE(16);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(64);
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(85);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 52:
      if (lookahead == 'h') ADVANCE(92);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 60:
      if (lookahead == 'p') ADVANCE(4);
      END_STATE();
    case 61:
      if (lookahead == 'p') ADVANCE(66);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 73:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(93);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_PATCH);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_head);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_post);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_put);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_connect);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_options);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_trace);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_patch);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(93);
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
    [anon_sym_get] = ACTIONS(1),
    [anon_sym_head] = ACTIONS(1),
    [anon_sym_post] = ACTIONS(1),
    [anon_sym_put] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_connect] = ACTIONS(1),
    [anon_sym_options] = ACTIONS(1),
    [anon_sym_trace] = ACTIONS(1),
    [anon_sym_patch] = ACTIONS(1),
    [sym_url] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(6),
    [sym_request] = STATE(2),
    [sym_http_method] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_GET] = ACTIONS(5),
    [anon_sym_HEAD] = ACTIONS(5),
    [anon_sym_POST] = ACTIONS(5),
    [anon_sym_PUT] = ACTIONS(5),
    [anon_sym_DELETE] = ACTIONS(5),
    [anon_sym_CONNECT] = ACTIONS(5),
    [anon_sym_OPTIONS] = ACTIONS(5),
    [anon_sym_TRACE] = ACTIONS(5),
    [anon_sym_PATCH] = ACTIONS(5),
    [anon_sym_get] = ACTIONS(5),
    [anon_sym_head] = ACTIONS(5),
    [anon_sym_post] = ACTIONS(5),
    [anon_sym_put] = ACTIONS(5),
    [anon_sym_delete] = ACTIONS(5),
    [anon_sym_connect] = ACTIONS(5),
    [anon_sym_options] = ACTIONS(5),
    [anon_sym_trace] = ACTIONS(5),
    [anon_sym_patch] = ACTIONS(5),
  },
  [2] = {
    [sym_request] = STATE(3),
    [sym_http_method] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_GET] = ACTIONS(5),
    [anon_sym_HEAD] = ACTIONS(5),
    [anon_sym_POST] = ACTIONS(5),
    [anon_sym_PUT] = ACTIONS(5),
    [anon_sym_DELETE] = ACTIONS(5),
    [anon_sym_CONNECT] = ACTIONS(5),
    [anon_sym_OPTIONS] = ACTIONS(5),
    [anon_sym_TRACE] = ACTIONS(5),
    [anon_sym_PATCH] = ACTIONS(5),
    [anon_sym_get] = ACTIONS(5),
    [anon_sym_head] = ACTIONS(5),
    [anon_sym_post] = ACTIONS(5),
    [anon_sym_put] = ACTIONS(5),
    [anon_sym_delete] = ACTIONS(5),
    [anon_sym_connect] = ACTIONS(5),
    [anon_sym_options] = ACTIONS(5),
    [anon_sym_trace] = ACTIONS(5),
    [anon_sym_patch] = ACTIONS(5),
  },
  [3] = {
    [sym_request] = STATE(3),
    [sym_http_method] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(3),
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
    [anon_sym_get] = ACTIONS(11),
    [anon_sym_head] = ACTIONS(11),
    [anon_sym_post] = ACTIONS(11),
    [anon_sym_put] = ACTIONS(11),
    [anon_sym_delete] = ACTIONS(11),
    [anon_sym_connect] = ACTIONS(11),
    [anon_sym_options] = ACTIONS(11),
    [anon_sym_trace] = ACTIONS(11),
    [anon_sym_patch] = ACTIONS(11),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(14),
    [anon_sym_GET] = ACTIONS(14),
    [anon_sym_HEAD] = ACTIONS(14),
    [anon_sym_POST] = ACTIONS(14),
    [anon_sym_PUT] = ACTIONS(14),
    [anon_sym_DELETE] = ACTIONS(14),
    [anon_sym_CONNECT] = ACTIONS(14),
    [anon_sym_OPTIONS] = ACTIONS(14),
    [anon_sym_TRACE] = ACTIONS(14),
    [anon_sym_PATCH] = ACTIONS(14),
    [anon_sym_get] = ACTIONS(14),
    [anon_sym_head] = ACTIONS(14),
    [anon_sym_post] = ACTIONS(14),
    [anon_sym_put] = ACTIONS(14),
    [anon_sym_delete] = ACTIONS(14),
    [anon_sym_connect] = ACTIONS(14),
    [anon_sym_options] = ACTIONS(14),
    [anon_sym_trace] = ACTIONS(14),
    [anon_sym_patch] = ACTIONS(14),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(16), 1,
      sym_url,
  [4] = 1,
    ACTIONS(18), 1,
      ts_builtin_sym_end,
  [8] = 1,
    ACTIONS(20), 1,
      sym_url,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 4,
  [SMALL_STATE(7)] = 8,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [14] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2),
  [16] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_method, 1),
  [18] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
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
