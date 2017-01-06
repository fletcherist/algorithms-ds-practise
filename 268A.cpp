#include <iostream>
using namespace std;

int main () {
  int arr1[100];
  int arr2[100];
  int n; cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> arr1[i];
    cin >> arr2[i];
  }

  int ans = 0;
  for (int i = 1; i <= n; i++) {
    for (int e = 1; e <= n; e++) {
      if (i != e && arr1[i] == arr2[e]) ans++;
    }
  }

  cout << ans << endl;
}