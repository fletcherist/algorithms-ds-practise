#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main () {
  long long n, m; cin >> n >> m;
  long long ans = 0;
  long long a = 1;
  for (int i = 0; i < m; i++) {
    long long b; cin >> b;
    if (a <= b) {
      ans += b - a;
    } else {
      ans += n - a + b;
    }
    a = b;
  }
  cout << ans << endl;
}