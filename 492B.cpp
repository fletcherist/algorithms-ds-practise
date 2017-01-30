#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;

int main () {
  int n; cin >> n;
  long long l; cin >> l;
  vector <long long int> arr(n);

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(arr.begin(), arr.end());

  long long int ANS = 0;
  for (int i = 1; i < n; i++) {
    long long int diff = abs(arr[i] - arr[i - 1]);
    ANS = max(diff, ANS);
  }
  float answer = ANS / 2.0;
  if (arr[0] > answer) answer = arr[0];
  cout << std::setprecision(9) << answer << endl;
}