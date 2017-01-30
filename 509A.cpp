#include <iostream>
#include <vector>
#include <string>

using namespace std;

int elem (int row, int column) {
  if (row == 1 || column == 1) {
    return 1;
  }

  return elem(row - 1, column) + elem(row, column - 1);
}

int main () {
  int n; cin >> n;
  long long a[n][n];

  int ANS = elem(n, n);
  cout << ANS << endl;

}