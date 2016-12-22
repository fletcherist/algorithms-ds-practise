const fs = require('fs')
const str = fs.readFileSync('input.txt', 'utf-8')

const lines = str.split('\n')
const NM = lines[0].split(' ')
const N = Number(NM[0])
const M = Number(NM[1])

lines.splice(0, 1)

const ROWS = {}
for (let i = 0; i < N; i++) {
	const line = lines[i]
	let count = 0
	for (color of line) {
		if (color === '1') count++
	}
	ROWS[i + 1] = count
}

const COLUMNS = {}
for (let i = 0; i < M; i++) {
	let count = 0
	for (let e = 0; e < N; e++) {
		if (lines[e][i] === '1') count++
	}
	COLUMNS[i + 1] = count
}

const findRowsIndex = () => {
	let a = 0
	let b = 0
	let maxRows = 0
	let rowsIndex = 0
	for (number in ROWS) {
		b += ROWS[number]
	}

	for (number in ROWS) {
		a += ROWS[number]
		b -= ROWS[number]

		const multi = a * b
		if (multi > maxRows) {
			rowsIndex = number
		}
		maxRows = Math.max(multi, maxRows)
	}
	return rowsIndex
}

const findColumnsIndex = () => {
	let a = 0
	let b = 0
	let maxColumns = 0
	let columnsIndex = 0
	for (number in COLUMNS) {
		b += COLUMNS[number]
	}

	for (number in COLUMNS) {
		a += COLUMNS[number]
		b -= COLUMNS[number]

		const multi = a * b
		if (multi > maxColumns) {
			columnsIndex = number
		}
		maxColumns = Math.max(multi, maxColumns)
	}
	return columnsIndex
}

const rowsIndex = findRowsIndex()
const columnsIndex = findColumnsIndex()

const quarters = []

const count1Quarter = () => {
	count = 0
	for (let i = 0; i < rowsIndex; i++) {
		for (let e = 0; e < columnsIndex; e++) {
			if (lines[i][e] === '1') count++ 
		}
	}
	return count
}

const count2Quarter = () => {
	count = 0
	for (let i = 0; i < rowsIndex; i++) {
		for (let e = columnsIndex; e < M ; e++) {
			if (lines[i][e] === '1') count++ 
		}
	}
	return count
}

const count3Quarter = () => {
	count = 0
	for (let i = rowsIndex; i < N; i++) {
		for (let e = 0; e < columnsIndex; e++) {
			if (lines[i][e] === '1') count++ 
		}
	}
	return count
}

const count4Quarter = () => {
	count = 0
	for (let i = rowsIndex; i < N; i++) {
		for (let e = columnsIndex; e < M; e++) {
			if (lines[i][e] === '1') count++ 
		}
	}
	return count
}

const first = count1Quarter()
const second = count2Quarter()
const third = count3Quarter()
const fourth = count4Quarter()
console.log(first, second, third, fourth)

const multi = first * second * third * fourth
console.log(multi)
fs.writeFile('output.txt', multi, () => {

})


// 6 10
// 0110100111
// 1100001000
// 0111110000
// 1000101001
// 1000011111
// 0110000011

