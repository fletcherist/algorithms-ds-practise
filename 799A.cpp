#include <iostream>
#include <math.h>

using namespace std;
int main () {
  int n, t, k, d;
  cin >> n >> t >> k >> d;

  float first_case = ceil(n / k) * t;
  float second_case = first_case / 2 + d;

  cout << first_case << second_case << endl;
  if (first_case <= second_case) {
    cout << "NO" << endl;
  } else {
    cout << "YES" << endl;
  }
}