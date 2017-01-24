#include <iostream>
#include <string>
#include <vector>

using namespace std;


int check_for_the_win (char pole[4][4], int y, int x) {
  if((pole[0 + y][0 + x] == 'x' && pole[1 + y][0 + x] == 'x' && pole[2 + y][0 + x] == 'x') ||
     (pole[0 + y][1 + x] == 'x' && pole[1 + y][1 + x] == 'x' && pole[2 + y][1 + x] == 'x') ||
     (pole[0 + y][2 + x] == 'x' && pole[1 + y][2 + x] == 'x' && pole[2 + y][2 + x] == 'x') ||

    // vertical
     (pole[0 + y][0 + x] == 'x' && pole[0 + y][1 + x] == 'x' && pole[0 + y][2 + x] == 'x') ||
     (pole[1 + y][0 + x] == 'x' && pole[1 + y][1 + x] == 'x' && pole[1 + y][2 + x] == 'x') ||
     (pole[2 + y][0 + x] == 'x' && pole[2 + y][1 + x] == 'x' && pole[2 + y][2 + x] == 'x') ||

    // diagonal
     (pole[0 + y][0 + x] == 'x' && pole[1 + y][1 + x] == 'x' && pole[2 + y][2 + x] == 'x') ||
     (pole[2 + y][0 + x] == 'x' && pole[1 + y][1 + x] == 'x' && pole[0 + y][2 + x] == 'x') )
    return 1;
  return 0;  
}


void analyze_position (char pole[4][4], int y, int x) {
  cout << pole[y][x] << endl;
}

int main () {
  char pole[4][4];

  int i = 0;
  string s;
  while (i < 4) {
    getline(cin, s);
    for (int e = 0; e < 4; e++) {
      pole[i][e] = s[e];
    }
    i++;
  }

  for (int i = 0; i < 4; i++) {
    for (int e = 1; e < 3; e++) {
      if (pole[i][e] == 'x') {
        pole[i][e + 1] = 'x';
        pole[i][e - 1] = 'x';
      }
    }
  }

  cout << check_for_the_win(pole, 0, 0) << endl;

}