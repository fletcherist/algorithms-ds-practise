#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main () {
  long long n; cin >> n;
  int x; cin >> x;

  int a[6][3] = {
    {0, 1, 2}, {1, 0, 2}, {1, 2, 0}, 
    {2, 1, 0}, {2, 0, 1}, {0, 2, 1}
  };

  n = n % 6;
  int ans = 0;
  int b = a[n][x];

  if (a[0][0] == b) ans = a[0][0];
  if (a[0][1] == b) ans = a[0][1];
  if (a[0][2] == b) ans = a[0][2];

  cout << ans << endl;

}