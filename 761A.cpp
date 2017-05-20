#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main () {
  int a, b; cin >> a >> b;
  int ANS = abs(a - b);
  if (a == 0 && b == 0) {
    cout << "NO" << endl;
  } else { 
    if (ANS == 1 || ANS == 0) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}