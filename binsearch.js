const array = [11, 22, 54, 98, 114, 159, 249]

class Search {
	linear (array, searchValue) {
		for (let i = 0; i < array.length; i++) {
			if (searchValue === array[i]) {
				return i
			}
		}
		return -1
	}
	binary (array, searchValue) {
		let low = 0
		let high = array.length

		while (low <= high) {
			let middle = Math.floor((low + high) / 2)

			if (searchValue === array[middle]) {
				return middle 
			} else if (searchValue > array[middle]) {
				low = middle + 1
			} else {
				high = middle - 1
			}
		}
		return -1
	}
}

const search = new Search()
console.log(search.linear(array, 249))