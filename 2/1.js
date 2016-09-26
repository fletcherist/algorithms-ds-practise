var n = 4
var a = [7, 3, 2, 1]

var arr2 = []
for (var i = 0; i < 33; i++) {
	arr2.push(Math.pow(2, i))
}

const checkForPower2 = (number) => {
	for (var i = 0; i < arr2.length; i++) {
		// console.log(arr2[i], number)
		if (number === arr2[i]) {
			return true
		}
	}

	return false
}

var count = 0
for (var i = 0; i < a.length; i++) {
	for (var e = i + 1; e < a.length; e++) {
		// console.log(i, e)s
		if (checkForPower2(a[i] + a[e])) {
			count++
		}
	}
}

console.log(count)