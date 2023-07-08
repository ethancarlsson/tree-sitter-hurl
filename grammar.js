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


const URL_REGEX = /(https?:\/\/[^\s]+)/;

const HEADER_VALUE_REGEX = /(\w|\d|-|_|\\|\.|~|\{|\}|<|>|`|\^|%|!|#|\$|&|'|"|\(|\)|\*|\+|,|\/|:|;|=|\?|@|\[|\]| |\|)+/
const HEADER_KEY_REGEX = /(\w|\d|-|_)+/

module.exports = grammar({
	name: 'hurl',
	extras: $ => [/\s/, $.comment],

	rules: {
		source_file: $ => repeat1($.request_response),


		request_response: $ => seq($.request, optional($.response)),

		request: $ => seq($.http_method, $.url, repeat($.header), optional($.input)),

		http_method: _ => choice(...HTTP_METHODS),
		url: _ => URL_REGEX,

		header: $ => seq(
			$.header_key,
			':',
			$.header_value,
		),

		header_key: _ => HEADER_KEY_REGEX,

		header_value: _ => HEADER_VALUE_REGEX,


		input: $ => choice($.json),
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

