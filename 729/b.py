n, m = map(int, input().split())
arr = {}
ans = 0

def ifAvaliable (array, position):
	count = 0
	for i in range(position, len(array)):
		if array[i] == 1:
			count += 1
			break
	for i in range(0, position):
		if array[i] == 1:
			count += 1
			break
	return count

for i in range(0, n):
	t = map(int, input().split())
	arr[i] = list(t)

	for e in range(0, m):
		if arr[i][e] != 1:
			ans += ifAvaliable(arr[i], e)

for i in range(0, m):
	st = []
	for e in range(0, n):
		st.append(arr[e][i])
	for t in range(0, n):
		if st[t] != 1:
			ans += ifAvaliable(st, t)

print(ans)