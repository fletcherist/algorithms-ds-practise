input()
s = input()

l = []
st = 'ogo'
for i in range(0, 100):
	l.append(st)
	st += 'go'
l.reverse()
for e in l:
	s = s.replace(e, '*')
s = s.replace('*', '***')
print(s)