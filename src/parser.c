#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 12
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
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
  sym_response_assertions = 12,
  sym_source_file = 13,
  sym_req_res = 14,
  sym_request = 15,
  sym_http_method = 16,
  sym_input = 17,
  aux_sym_source_file_repeat1 = 18,
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
  [sym_response_assertions] = "response_assertions",
  [sym_source_file] = "source_file",
  [sym_req_res] = "req_res",
  [sym_request] = "request",
  [sym_http_method] = "http_method",
  [sym_input] = "input",
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
  [sym_response_assertions] = sym_response_assertions,
  [sym_source_file] = sym_source_file,
  [sym_req_res] = sym_req_res,
  [sym_request] = sym_request,
  [sym_http_method] = sym_http_method,
  [sym_input] = sym_input,
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
  [sym_response_assertions] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_req_res] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(49);
      if (lookahead == 'C') ADVANCE(28);
      if (lookahead == 'D') ADVANCE(15);
      if (lookahead == 'G') ADVANCE(16);
      if (lookahead == 'H') ADVANCE(17);
      if (lookahead == 'O') ADVANCE(30);
      if (lookahead == 'P') ADVANCE(10);
      if (lookahead == 'T') ADVANCE(31);
      if (lookahead == 'h') ADVANCE(46);
      if (lookahead == 't') ADVANCE(42);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '.') ADVANCE(61);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(1);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(47);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == 's') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(36);
      if (lookahead == 'O') ADVANCE(33);
      if (lookahead == 'U') ADVANCE(37);
      END_STATE();
    case 11:
      if (lookahead == 'C') ADVANCE(22);
      END_STATE();
    case 12:
      if (lookahead == 'C') ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == 'C') ADVANCE(39);
      END_STATE();
    case 14:
      if (lookahead == 'D') ADVANCE(51);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(34);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(8);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(57);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(54);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(13);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(40);
      END_STATE();
    case 22:
      if (lookahead == 'H') ADVANCE(58);
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
      if (lookahead == 'N') ADVANCE(32);
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
      if (lookahead == 'P') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == 'R') ADVANCE(9);
      END_STATE();
    case 32:
      if (lookahead == 'S') ADVANCE(56);
      END_STATE();
    case 33:
      if (lookahead == 'S') ADVANCE(38);
      END_STATE();
    case 34:
      if (lookahead == 'T') ADVANCE(50);
      END_STATE();
    case 35:
      if (lookahead == 'T') ADVANCE(23);
      END_STATE();
    case 36:
      if (lookahead == 'T') ADVANCE(11);
      END_STATE();
    case 37:
      if (lookahead == 'T') ADVANCE(53);
      END_STATE();
    case 38:
      if (lookahead == 'T') ADVANCE(52);
      END_STATE();
    case 39:
      if (lookahead == 'T') ADVANCE(55);
      END_STATE();
    case 40:
      if (lookahead == 'T') ADVANCE(19);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(43);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(3);
      END_STATE();
    case 44:
      if (lookahead == 'p') ADVANCE(7);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 47:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(59);
      END_STATE();
    case 48:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(48);
      if (lookahead == '}') ADVANCE(60);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_PATCH);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_json);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(48);
      if (lookahead == '}') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_response_assertions);
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
    [sym_response_assertions] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(10),
    [sym_req_res] = STATE(2),
    [sym_request] = STATE(5),
    [sym_http_method] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_GET] = ACTIONS(3),
    [anon_sym_HEAD] = ACTIONS(3),
    [anon_sym_POST] = ACTIONS(3),
    [anon_sym_PUT] = ACTIONS(3),
    [anon_sym_DELETE] = ACTIONS(3),
    [anon_sym_CONNECT] = ACTIONS(3),
    [anon_sym_OPTIONS] = ACTIONS(3),
    [anon_sym_TRACE] = ACTIONS(3),
    [anon_sym_PATCH] = ACTIONS(3),
  },
  [2] = {
    [sym_req_res] = STATE(3),
    [sym_request] = STATE(5),
    [sym_http_method] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_GET] = ACTIONS(3),
    [anon_sym_HEAD] = ACTIONS(3),
    [anon_sym_POST] = ACTIONS(3),
    [anon_sym_PUT] = ACTIONS(3),
    [anon_sym_DELETE] = ACTIONS(3),
    [anon_sym_CONNECT] = ACTIONS(3),
    [anon_sym_OPTIONS] = ACTIONS(3),
    [anon_sym_TRACE] = ACTIONS(3),
    [anon_sym_PATCH] = ACTIONS(3),
  },
  [3] = {
    [sym_req_res] = STATE(3),
    [sym_request] = STATE(5),
    [sym_http_method] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(3),
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
  },
  [4] = {
    [sym_input] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(12),
    [anon_sym_GET] = ACTIONS(12),
    [anon_sym_HEAD] = ACTIONS(12),
    [anon_sym_POST] = ACTIONS(12),
    [anon_sym_PUT] = ACTIONS(12),
    [anon_sym_DELETE] = ACTIONS(12),
    [anon_sym_CONNECT] = ACTIONS(12),
    [anon_sym_OPTIONS] = ACTIONS(12),
    [anon_sym_TRACE] = ACTIONS(12),
    [anon_sym_PATCH] = ACTIONS(12),
    [sym_json] = ACTIONS(14),
    [sym_response_assertions] = ACTIONS(12),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(16),
    [anon_sym_GET] = ACTIONS(16),
    [anon_sym_HEAD] = ACTIONS(16),
    [anon_sym_POST] = ACTIONS(16),
    [anon_sym_PUT] = ACTIONS(16),
    [anon_sym_DELETE] = ACTIONS(16),
    [anon_sym_CONNECT] = ACTIONS(16),
    [anon_sym_OPTIONS] = ACTIONS(16),
    [anon_sym_TRACE] = ACTIONS(16),
    [anon_sym_PATCH] = ACTIONS(16),
    [sym_response_assertions] = ACTIONS(18),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(20),
    [anon_sym_GET] = ACTIONS(20),
    [anon_sym_HEAD] = ACTIONS(20),
    [anon_sym_POST] = ACTIONS(20),
    [anon_sym_PUT] = ACTIONS(20),
    [anon_sym_DELETE] = ACTIONS(20),
    [anon_sym_CONNECT] = ACTIONS(20),
    [anon_sym_OPTIONS] = ACTIONS(20),
    [anon_sym_TRACE] = ACTIONS(20),
    [anon_sym_PATCH] = ACTIONS(20),
    [sym_response_assertions] = ACTIONS(20),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(22),
    [anon_sym_GET] = ACTIONS(22),
    [anon_sym_HEAD] = ACTIONS(22),
    [anon_sym_POST] = ACTIONS(22),
    [anon_sym_PUT] = ACTIONS(22),
    [anon_sym_DELETE] = ACTIONS(22),
    [anon_sym_CONNECT] = ACTIONS(22),
    [anon_sym_OPTIONS] = ACTIONS(22),
    [anon_sym_TRACE] = ACTIONS(22),
    [anon_sym_PATCH] = ACTIONS(22),
    [sym_response_assertions] = ACTIONS(22),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(24),
    [anon_sym_GET] = ACTIONS(24),
    [anon_sym_HEAD] = ACTIONS(24),
    [anon_sym_POST] = ACTIONS(24),
    [anon_sym_PUT] = ACTIONS(24),
    [anon_sym_DELETE] = ACTIONS(24),
    [anon_sym_CONNECT] = ACTIONS(24),
    [anon_sym_OPTIONS] = ACTIONS(24),
    [anon_sym_TRACE] = ACTIONS(24),
    [anon_sym_PATCH] = ACTIONS(24),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(26), 1,
      sym_url,
  [4] = 1,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
  [8] = 1,
    ACTIONS(30), 1,
      sym_url,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 4,
  [SMALL_STATE(11)] = 8,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [9] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [12] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2),
  [14] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [16] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_req_res, 1),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 1),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_req_res, 2),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_method, 1),
  [28] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
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
