#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main () {
  int summ = 0;
  for (int i = 0; i < 5; i++) {
    int tmp; cin >> tmp;
    summ += tmp;
  }
  int ANS = 0;
  if (summ == 0) ANS = -1;
  else if (summ % 5 == 0) ANS = summ / 5;
  else ANS = -1;

  cout << ANS << endl;
}