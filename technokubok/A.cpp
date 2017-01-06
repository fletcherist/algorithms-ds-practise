#include <iostream>
#include <string>

using namespace std;
int main () {
  int n, m, k; cin >> n >> m >> k;

  // Number of the part
  string left_or_right = k % 2 == 0 ? "R" : "L";
  if (k % 2 == 1) {
    k += 1;
  }
  k = k / 2;
  int part = k % m;
  if (part == 0) part = m;
  int row = (k + (m - part)) / m;

  cout << row << " " << part << " " << left_or_right << endl;
}