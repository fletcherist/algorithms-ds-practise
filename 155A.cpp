#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main () {
  int n; cin >> n;
  int count = 0;
  int max = 0;
  int min = 0;
  for (int i = 0; i < n; i++) {
    if (i == 0) {
      int t; cin >> t;
      max = t;
      min = t;
    } else {
      int t; cin >> t;
      if (t > max) {
        count++;
        max = t;
      } else if (t < min) {
        count++;
        min = t;
      }
    } 
  }

  cout << count << endl;
}