#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main () {
  int m, n; cin >> m >> n;
  if (min(n, m) % 2 == 0) {
    cout << "Malvika" << endl;
  } else {
    cout << "Akshat" << endl;
  }
}