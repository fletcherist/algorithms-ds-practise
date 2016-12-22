n, a, b, c = map(int, input().split())

combinations = []

m = 0
while m * 4 < n:
	m += 1
m = m * 4
t = m - n



print(combinations)