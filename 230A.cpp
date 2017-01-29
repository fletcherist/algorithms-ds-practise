#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main () {
  int s, n; cin >> s >> n;
  vector <int> dragons (n);
  vector <int> bonus (n);
  for (int i = 0; i < n; i++) {
    cin >> dragons[i];
    cin >> bonus[i];
  }

  for (int i = 0; i < n - 1; i++) {
    for (int e = i + 1; e < n; e++) {
      if (dragons[i] > dragons[e]) {
        int tmp = dragons[i];
        dragons[i] = dragons[e];
        dragons[e] = tmp;

        tmp = bonus[i];
        bonus[i] = bonus[e];
        bonus[e] = tmp;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    if (dragons[i] < s) {
      s += bonus[i];
    } else {
      cout << "NO" << endl;
      return 0;
    }
  }

  cout << "YES" << endl;
}