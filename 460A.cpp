#include <iostream>
using namespace std;
int main () {
  int m, n; cin >> n >> m;
  int days = 0;
  while (n != -1) {
    if (days > 0) {
      if (days % m == 0) {
        n += 1;
      }
    }
    days++;
    n -= 1;
  }
  cout << days - 1 << endl;
}