#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main () {
  string s; cin >> s;

  int lower = 0;
  int upper = 0;
  for (int i = 0; i < s.length(); i++) {
    if (islower(s[i])) {
      lower++;
    } else {
      upper++;
    }
  }

  if (upper > lower) {
    for (int i = 0; i < s.length(); i++) {
      char c = s[i];
      s[i] = toupper(c);
    }
  } else {
    for (int i = 0; i < s.length(); i++) {
      char c = s[i];
      s[i] = tolower(c);
    }
  }

  cout << s << endl;
}