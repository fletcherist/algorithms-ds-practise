#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main () {
  int n, h; cin >> n >> h;
  int ANS = 0;
  for (int i = 0; i < n; i++) {
    int tmp; cin >> tmp;
    if (tmp > h) {
      ANS += 2;
    } else {
      ANS += 1;
    }
  }

  cout << ANS << endl;
}