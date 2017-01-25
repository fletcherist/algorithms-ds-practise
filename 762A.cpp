#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main () {
  int n, k; cin >> n >> k;
  int i = 0;
  int count = 0;
  while (i <= n) {
    if (count > k) {
      cout << "-1" << endl;
      return 0;
    }

    i += 1;
    if (n % i == 0) {
      count++;
      if (count == k) {
        cout << i << endl;
        return 0;
      }
    }

  }

  cout << "NO"
}