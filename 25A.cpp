#include <iostream>
#include <vector>
using namespace std;

int main () {
  int n; cin >> n;
  int even = 0; int odd = 0;
  int even_n = 0; int odd_n = 0;
  for (int i = 1; i <= n; i++) {
    int tmp; cin >> tmp;
    if (tmp % 2 == 0) {
      even++; even_n = i; 
    } else {
      odd++; odd_n = i;
    }
  }

  cout << (even == 1 ? even_n : odd_n) << endl;
}