#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main () {
  int n, l; cin >> n >> l;
  vector <int> a1(n);
  vector <int> a2(n);

  for (int i = 0; i < n; i++) {
    cin >> a1[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> a2[i];
  }

  bool flag = true;
  for (int i = 0; i < n; i++) {
    if (a1[i] == a2[i]) {
      continue;
    } else {
      flag = false;
      break;
    }
  }
  if (flag) {
    cout << "YES" << endl;
    return 0;
  }

  bool ANS = false;
  for (int i = n - 1; i > 1; i--) {
    if (a1[i] - a1[i-1] == a2[i] - a2[i-1]) {
      ANS = true;
      continue;
    } else {
      cout << "NO" << endl;
      return 0;
    }
  }

  if (ANS) {
    cout << "YES" << endl;  
  } else {
    cout << "NO" << endl;  
  }
  
}