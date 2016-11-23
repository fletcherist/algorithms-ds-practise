let s = 'ogogmgogogogo'
const regex = /ogo/g
const regex2 = /go/ig
console.log(s.replace(regex, '*').replace(regex2, '*'))