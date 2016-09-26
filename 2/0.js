var a = [1, 2, 3, 4, 5, 6];

var count = 1;

var len = []
var count = 1

for (var i = 0; i < a.length; i++) {
	if (a[i] < a[i + 1]) {
		count++
	} else {
		len.push(count)
		count = 1
	}
}

len.sort().reverse()

print(len[0])
// console.log(ans)