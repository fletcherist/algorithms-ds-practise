#include <iostream>
using namespace std;

bool is_primary (int a) {
  int i = 1;
  while (i < a - 1) {
    i += 1;
    if (a % i == 0) {
      return false;
    }
  }
  return true;
}

int main () {
  int n; cin >> n;
  for (int m = 1; m < 100; m++) {
    int cel = n * m + 1;
    if (!is_primary(cel)) {
      cout << m << endl;
      return false;
    }
  }
}