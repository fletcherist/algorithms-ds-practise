#include <iostream>
#include <vector>
#include <string>
#include <math.h>

using namespace std;

int main () {
  int n; cin >> n;
  string s; cin >> s;
  int len = n - s.length();

  if (n < s.length()) {
    cout << "-1" << endl;
    return 0;
  } else {
    for (int i = 0; i < len; i++) {
      s += '0';
    }
  }
  cout << s << endl;
}