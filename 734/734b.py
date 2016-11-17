a = long(input())
b = long(input())
c = long(input())
d = long(input())

m = min(a, c, d)
count = 0
a = a - m; c = c - m; d = d - m
count = m * 256

m = min(a, b)
count = count + m * 32

print(str(count))