#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main () {
  int m, n, a, b; cin >> m >> n >> a >> b;
  int tour = m / n;
  int tickets = m - (tour * n);
  cout << tour * b + tickets * a << endl;
}