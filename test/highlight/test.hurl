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
```graphql
query Hero($episode: Episode, $withFriends: Boolean!) {
  hero(episode: $episode) {
    name
    friends @include(if: $withFriends) {
      name
    }
  }
}

variables {
  "episode": "JEDI",
  "withFriends": false
}
```

HTTP 200
