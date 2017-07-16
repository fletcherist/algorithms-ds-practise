from sys import exit

game = {}
game_inverted = {}
game_diagonal = []

for i in range(0, 10):
  game[i] = []
  game_inverted[i] = []

for i in range(0, 10):
  row = input()
  game[i] = row

def find_in_row(row):
  match_patterns = [
    '.XXXX',
    'X.XXX',
    'XX.XX',
    'XXX.X',
    'XXXX.'
  ]
  for pattern in match_patterns:
    if row.find(pattern) > -1:
      return True
  return False

def create_inverted_matrix():
  for i in range(0, 10):
    row = ''
    for e in range(0, 10):
      row += game[e][i]
    game_inverted[i] = row

def create_diagonal_matrix():
  # create diagonal
  for i in range(0, 10):
    # left part
    left = ''
    for j in range(0, i+1):
      left += game[i-j][j]
    game_diagonal.append(left)

  for i in range(9, -1, -1):
    row = list(game[i])
    row = ''.join(row[::-1])

    right = ''
    for j in range(0, i+1):
      right += game[i-j][j]
    game_diagonal.append(right)

create_diagonal_matrix()
create_inverted_matrix()

for elem in game:
  row = game[elem]
  if find_in_row(row):
    print('YES')
    exit(0)
for elem in game_inverted:
  row = game_inverted[elem]
  if find_in_row(row):
    print('YES')
    exit(0)
for row in game_diagonal:
  if find_in_row(row):
    print('YES')
    exit(0)
print('NO')
