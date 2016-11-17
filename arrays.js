const arr1 = [1, 2, 3, 4, 1, 1, 1, 4]
const arr2 = [2, 6, 54, 1, 8, 3]
const arr3 = []

arr1.sort().reverse()
arr2.sort().reverse()
let index = 0
let arr4, arr5
if (arr1[0] > arr2[0]) {
	arr4 = arr1
	arr5 = arr2
} else {
	arr4 = arr2
	arr5 = arr1
}

for (var i = 0; i < arr4.length; i++) {
	for (var e = index; e < arr5.length; e++) {
		if(arr4[i] > arr5[e]) {
			index = e
		} else {
			arr3.push(arr4[i])
		}
	}
}

console.log(arr3)