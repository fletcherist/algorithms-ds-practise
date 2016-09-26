console.log(process.env.NODE_ENV)
process.env.NODE_ENV = 'production'

const object = undefined
console.log(object.go)

console.log(process.env.NODE_ENV)