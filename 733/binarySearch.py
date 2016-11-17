a = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
search = 9

c = 0;
d = len(a)

for i in range(0, d):
	p = (d - c) / 2
	if search >= a[p]:
		c = p
	else:
		d = p
	print(c, d)


print(c ,d)
print(a)