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
		source_file: $ => repeat($.request),
		request: $ => seq($.http_method, $.url),

		http_method: $ => choice(...HTTP_METHODS, ...HTTP_METHODS.map((m) => m.toLowerCase())),
		url: $ => URL_REGEX
	}
});

