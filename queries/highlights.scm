(request 
	(http_method) @keyword
	(url) @name
 )
(request_param_keyword) @keyword
(status) @number
(comment) @comment
(variable) @constant

(input 
	(multiline_string) @string
)
(input 
	(oneline_string) @string
)
(input 
	(filename(filename_text) @string)
)
(input 
	(filename(filename_escaped_char) @escape)
)
(input 
	(oneline_hex) @number
)
(input 
	(oneline_base64) @string
)

(pair
	(key) @string.special.key
	(value) @string
)

