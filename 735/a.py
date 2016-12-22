A = [4, 3, 6, 8, 5, 8, 4, 2, 10, 9, 4]

c = 0
for i in range(1, 10):
	if A[i] == A[0]:
		c += 1
		t = A[i + 1]
		A[i + 1] = A[i]
		A[i] = t
		print(A)

print(c)

