const fs = require('fs')
const lines = fs.readFileSync('input.txt', 'utf-8').replace('#', '')
const str = 'MAMA MILA RAMU.'

console.log(lines)
const dictionary = {
	'_': '00000',
	'A': '00001',
	'B': '00010',
	'C': '00011',
	'D': '00100',
	'E': '00101',
	'F': '00110',
	'G': '00111',
	'H': '01000',
	'I': '01001',
	'J': '01010',
	'K': '01011',
	'L': '01100',
	'M': '01101',
	'N': '01110',
	'O': '01111',
	'P': '10000',
	'Q': '10001',
	'R': '10010',
	'S': '10011',
	'T': '10100',
	'U': '10101',
	'V': '10110',
	'W': '10111',
	'X': '11000',
	'Y': '11001',
	'Z': '11010',

	'.': '11011',
	',': '11100',
	'!': '11101',
	'?': '11110',
	';': '11111'
}

let arr1 = []
let arr2 = []

const firstStep = () => {
	let arr = []
	for (symbol in str) {
		const encoded = dictionary[str[symbol]]
		if (encoded) {
			// console.log(str[symbol], dictionary[str[symbol]])
			arr.push(encoded)
		}
	}
	return arr
}



const secondStep = _arr => {
	const arr = []
	const STR = _arr.join('')
	let str = STR[0]

	for (let i = 1; i < STR.length; i++) {
		if (STR[i] === STR[i - 1]) str += '1'
		else str += '0'
	}

	for (let i = 0; i < STR.length / 5; i++) {
		const tmp = str
		const e = tmp.substr(i * 5, 5)
		arr.push(e) 
	}

	console.log(arr)
	return arr
}

const thirdStep = _arr => {
	const arr = []
	for (elem of _arr) {
		const decoded = findIndexByValue(elem)
		if (decoded) {
			console.log(decoded)
			arr.push(decoded)
		}
	}
	return arr.join('')
}

const findIndexByValue = str => {
	for (s in dictionary) {
		// console.log(str, dictionary[s], s)
		if (dictionary[s] === str) {
			return s
		}
	}

	return false
}

arr1 = firstStep()
const res = secondStep(arr1)
const ans = thirdStep(res)
console.log(ans)
// console.log(arr1)


// console.log(str)