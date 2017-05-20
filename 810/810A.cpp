#include <iostream>

using namespace std;
int main () {
  int n, k; cin >> n >> k;
  float s;
  for (int i = 0; i < n; i++) {
    int tmp = 0; cin >> tmp;
    s += tmp;
  }

  int ans = 0;
  while (s/n < k - 0.5) {
    s+=k; n+=1; ans++;
  }
  cout << ans << endl;
}