#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main () {
  string s; cin >> s;
  // if (s[0] == '-') {
  //   int last = s[s.length() - 1] - '0';
  //   int previous = s[s.length() - 2] - '0';

  //   if (last < previous) {
  //     s[s.length() - 2] = '\0';
  //   } else {
  //     s[s.length() - 1] = '\0';
  //   }
  // }

  long long ans = stoi(s);
  cout << ans << endl;
}