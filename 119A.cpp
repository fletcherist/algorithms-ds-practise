#include <iostream>
using namespace std;

int gcd (int x, int y) {
  if (x == 0) {
    return y;
  } else {
    return gcd(y % x, x);
  }
}

int main () {
  int a, b, n; cin >> a >> b >> n;
  int flag = 0;
  while (n > 0) {
    if (flag == 0) {
      int g = gcd(a, n);
      n -= g;
    } else {
      int g = gcd(b, n);
      n -= g;
    }
    flag = flag == 0 ? 1 : 0;
  }
  flag = flag == 0 ? 1 : 0;
  cout << flag << endl;
}