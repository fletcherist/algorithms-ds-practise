#include <iostream>
#include <vector>
using namespace std;

int main () {
  long int n, t; cin >> n >> t;
  vector<int> arr(n);
  for (int i = 1; i < n; i++) {
    cin >> arr[i];
  }
  arr[n] = 1;
  for (int i = 1; i <= n; i += arr[i]) {
    if (i == t) {
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
}