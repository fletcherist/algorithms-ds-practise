#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main () {
  int a, b, c; cin >> a >> b >> c;
  int m = max(a, max(b, c));
  int mi = min(a, min(b, c));
  cout << m - mi << endl;

}