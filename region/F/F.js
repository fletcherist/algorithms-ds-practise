const fs = require('fs')
const lines = fs.readFileSync('input.txt', 'utf-8').split('\n')

const data = lines[0].split(' ')

const N = parseInt(data[0])
const A = parseInt(data[1])
const B = parseInt(data[2])
const K = parseInt(data[3])

const WORDS = {
	impossible: 'Impossible',
	fail: 'Fail'
}

lines.splice(0, 1)
let approved = []
let declined = []

for (line of lines) {
	line = line.split(' ')
	const weight = parseInt(line[0])
	const amount = parseInt(line[1])
	const numbers = line.splice(2, line.length)
	// console.log(weight, amount, numbers)

	// Both stones are invalid
	if (amount * A === weight) {
		for (number of numbers) {
			declined.push(number)
		}
	} else if ((amount - 1) * A + B === weight) {
		for (number of numbers) {
			approved.push(number)
		}
	}
	// console.log((amount - 1) * A + B)
}

let ANS = ``
if (approved.length > 0) {
	// Remove duplicated
	approved = new Set(approved)
	declined = new Set(declined)
	// Restore from set to array
	approved = [...approved]
	declined = [...declined]

	approved = approved.filter((a, b) => declined.indexOf(a) === -1)
	approved.sort()
	
	if (approved.length > 0) {
		ANS = `${approved.length}\n${approved.join(' ')}`
	} else {
		ANS = WORDS.impossible
	}
} else {
	ANS = WORDS.fail
}

fs.writeFile('output.txt', ANS, () => console.log(ANS))	

// 4 15 17 2
// 30 2 1 3
// 47 3 2 3 4

// 3 15 17 3
// 30 2 1 2
// 30 2 2 3
// 47 3 1 2 3

// 2 1 2 2
// 1 1 2
// 1 1 1



