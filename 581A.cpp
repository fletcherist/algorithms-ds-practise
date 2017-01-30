#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main () {
  int a, b; cin >> a >> b;
  int m = max(a, b);
  int n = min(a, b);
  int diff = (m - n) / 2;
  cout << n << " " << diff << endl;;

}