# test
GET http://localhost:3000/api/v1/cases
user-agent: _ :;.,\/"'?!(){}[]@<>=-+*#$&`|~^%
[QueryStringParams]
order: newest
search: {{custom-search}}
count: 100
[BasicAuth]
bob: secret
[Cookies]
theme: light
sessionToken: abc123
[MultipartFormData]
field1: value1
# One can specify the file content type:
[FormParams]
default: false
email: john.doe@rookie.org
number: 33611223344
```xml
<?xml version="1.0" encoding="UTF-8"?>
<soap:Envelope xmlns:soap="http://www.w3.org/2003/05/soap-envelope" xmlns:m="http://example.net">
  <soap:Header></soap:Header>
  <soap:Body>
    <m:GetStockPrice>
      <m:StockName>GOOG</m:StockName>
    </m:GetStockPrice>
  </soap:Body>
</soap:Envelope>
```

HTTP 200
