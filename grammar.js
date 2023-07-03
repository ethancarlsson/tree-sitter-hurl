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
]

const URL_REGEX = /(https?:\/\/[^\s]+)/

module.exports = grammar({
	name: 'hurl',

	rules: {
		source_file: $ => repeat1($.request),

		request: $ => seq($.http_method, $.url, optional($.input)),

		http_method: $ => choice(...HTTP_METHODS),
		url: $ => URL_REGEX,

		input: $ => choice($.json),
		json: $ => /\{(\s|.)*\}/
	}
});

