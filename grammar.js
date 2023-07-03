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
		source_file: $ => repeat1($.req_res),

		req_res: $ => seq($.request, optional($.response_assertions)),

		request: $ => seq($.http_method, $.url, optional($.input)),

		http_method: _ => choice(...HTTP_METHODS),
		url: _ => URL_REGEX,

		input: $ => choice($.json),
		json: _ => /\{(\s|.)*\}/,

		response_assertions: _ => 'todo...',
	}
});

