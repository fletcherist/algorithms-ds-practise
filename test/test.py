inp = open('input.txt', 'r').read().split('\n')
out = open('output.txt', 'w')

i = 0
for line in inp:
  print("%s %s" % (line, i))
  i += 1

out.close()