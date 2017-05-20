#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main () {
  int n; cin >> n;
  vector<int> a;
  vector<int> b;

  string a1; cin >> a1;
  string b1; cin >> b1;
  for (int i = 0; i < n; i++) {
    int tmp = a1[i] - '0';
    a.push_back(tmp);

    tmp = b1[i] - '0';
    b.push_back(tmp);
  }

  sort(a.begin(), a.end()); reverse(a.begin(), a.end());
  sort(b.begin(), b.end()); reverse(b.begin(), b.end());

  int ans1 = 0;
  int ans2 = 0;

  for (int i = 0; i < n; i++) {
    if (a[i] > b[i]) {
      ans1++;
    }
  }

  reverse(a.begin(), a.end());
  for (int i = 0; i < n; i++) {
    if (b[i] >= a[i]) {
      ans2++;
    }
  }

  cout << ans1 << endl;
  cout << ans2 << endl;
}