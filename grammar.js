const HTTP_METHODS = [
	'GET',
	'HEAD',
	'POST',
	'PUT',
	'DELETE',
	'CONNECT',
	'OPTIONS',
	'TRACE',
	'PATCH'
];

const HTTP_VERSIONS = [
	'HTTP/1.0',
	'HTTP/1.1',
	'HTTP/2',
	'HTTP',
];

const REQUEST_PARAM_KEYWORDS = [
	'[QueryStringParams]',
	'[FormParams]',
	'[BasicAuth]',
	'[Cookies]',
	'[MultipartFormData]',
	'[Options]',
];


const URL_REGEX = /(https?:\/\/[^\s]+)/;

const HEADER_VALUE_REGEX = /(\w|\d|-|_|\\|\.|~|\{|\}|<|>|`|\^|%|!|#|\$|&|'|"|\(|\)|\*|\+|,|\/|:|;|=|\?|@|\[|\]| |\|)+/
const HEADER_KEY_REGEX = /(\w|\d|-|_)+/

module.exports = grammar({
	name: 'hurl',
	extras: $ => [/\s/, $.comment],

	rules: {
		source_file: $ => repeat1($.request_response),


		request_response: $ => seq($.request, optional($.response)),

		request: $ => seq($.http_method, $.url, repeat(choice($.pair, $.request_param_keyword)), optional($.input)),

		http_method: _ => choice(...HTTP_METHODS),
		url: _ => URL_REGEX,


		request_param_keyword: _ => choice(...REQUEST_PARAM_KEYWORDS),
		variable: _ => /\{\{\S+\}\}/,

		key: _ => HEADER_KEY_REGEX,
		value: $ => choice(HEADER_VALUE_REGEX, $.variable),

		input: $ => choice(
			$.json,
			$.oneline_string,
			$._json_language_hint,
			$._multiline_string_body,
			$._xml_language_hint,
			$._graphql_language_hint,
			$._base64,
			$._hex,
			$._oneline_file,
		),

		_multiline_string_body: $ => seq('```', $.multiline_string, '```'),
		_json_language_hint: $ => seq('```json', alias($.inner_language_hint, $.json), '```'),
		_xml_language_hint: $ => seq('```xml', alias($.inner_language_hint, $.xml), '```'),
		_graphql_language_hint: $ => seq('```graphql', alias($.inner_language_hint, $.graphql), '```'),

		multiline_string: _ => /[^```]+/,
		oneline_string: _ => seq('`', /[^`]*/, '`'),

		_base64: $ => seq('base64', ',', $.oneline_base64, ';'),
		oneline_base64: _ => /[A-Za-z0-9-=+ \n]+/,
		_hex: $ => seq('hex', ',', $.oneline_hex, ';'),
		oneline_hex: _ => /[0-9A-Fa-f]+/,
		_oneline_file: $ => seq('file', ',', $.filename, ';'),
		filename: $ => repeat1(choice($.filename_escaped_char, $.filename_text)),
		filename_escaped_char: _ => /\\(;|#|[ ])/,
		filename_text: _ => /[^#; \n\\]+/,

		json: _ => /\{(\s|.)*\}/,
		inner_language_hint: _ => /[^```]+/, // The difference is that this one doesn't need to be surrounded by curly braces, it could accept an array for example

		response: $ => seq($.version_and_status),
		version_and_status: $ => seq($.http_version, $.status),
		http_version: _ => choice(...HTTP_VERSIONS),
		status: _ => /[1-5]\d\d/,

		pair: $ => seq(
			$.key,
			':',
			$.value
		),

		comment: _ => token(seq(
			'#', /.*/
		)),
	}
});

