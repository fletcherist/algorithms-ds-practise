const fs = require('fs')
const str = fs.readFileSync('input.txt', 'utf-8')

const arr = []
for (let i in str) {
	const value = Number(str[i])
	if (value >= 0) {
		arr.push(value)
	}
}

const maxArr = arr
const minArr = arr
const max = maxArr.sort((a, b) => a < b).join('')

minArr.sort()

let firstMin = 0
for (let i in minArr) {
	const val = minArr[i]
	if (val > 0) {
		minArr.splice(i, 1)
		firstMin = val
		break;
	}
}

if (firstMin === 0) firstMin = ''
const min = `${firstMin}${minArr.join('')}`

console.log(max)
console.log(min)

const ans = `${max}\n${min}`

fs.writeFile('output.txt', ans, () => {

})