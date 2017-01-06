n = input()
m = input()

obj = {}
trust = {}
count = 0

error = False

for i in range(0, len(m)):
  if n[i] != m[i]:
    obj[n[i]] = m[i]
for item in obj:
  # print(item, obj[item])
  key = item
  val = obj[item]

  if val in obj:
    if obj[val] == key:
      obj[val] = False
      obj[key] = False
      trust[val] = key
    else:
      error = True
  else:
    trust[val] = key

if error:
  print('-1')
else:
  for elem in trust:
    if elem != False:
      count += 1
  print(count)
  for elem in trust:
    if elem != False:
      print(elem, trust[elem])
