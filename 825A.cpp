#include <iostream>
#include <string>
using namespace std;

int main () {
  int n; cin >> n;
  string ans;

  string s; cin >> s;

  int tmp = 0;
  for (int i = 0; i < n; i++) {
    char curr = s[i];
    if (curr == '1') {
      tmp++;
    } else {
      ans += tmp + '0';
      tmp = 0;
    }
  }

  ans += tmp + '0';
  cout << ans << endl;
}