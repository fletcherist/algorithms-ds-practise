#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

int main () {
  float n; cin >> n;
  float summ = 0;
  for (int i = 0; i < n; i++) {
    int t; cin >> t;
    summ += t;
  }
  float ANS = summ / (n * 100) * 100;
  cout << std::setprecision(12) << ANS << endl;
}