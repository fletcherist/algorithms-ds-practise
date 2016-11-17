n = int(input())
m = int(input())
s = m * n
k = m + n
t = True
while s > 0:
    s = s - (k - 1)
    k = k - 2
    t = not t
    print(s, k, t)
if t == True:
    print('Akshat')
else:
    print('Malvika')
