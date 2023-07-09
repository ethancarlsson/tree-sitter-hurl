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

		pair: $ => seq(
			$.key,
			':',
			$.value
		),

		request_param_keyword: _ => choice(...REQUEST_PARAM_KEYWORDS),
		variable: _ => /\{\{\S+\}\}/,

		key: _ => HEADER_KEY_REGEX,
		value: $ => choice(HEADER_VALUE_REGEX, $.variable),

		input: $ => choice($.json, $._multiline_string_body),
		_multiline_string_body: $ => seq('```', $.multiline_string, '```'),
		multiline_string: _ => /[^```]+/,
		json: _ => /\{(\s|.)*\}/,

		response: $ => seq($.version_and_status),
		version_and_status: $ => seq($.http_version, $.status),
		http_version: _ => choice(...HTTP_VERSIONS),
		status: _ => /[1-5]\d\d/,

		comment: _ => token(seq(
			'#', /.*/
		)),
	}
});

