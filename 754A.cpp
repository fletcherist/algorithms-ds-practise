#include <iostream>
#include <vector>
using namespace std;

int split (vector<int> arr, int start_index) {
  int sum = 0;
  for (int i = start_index; i < arr.size(); i++) {
    sum += arr[i];
    if (sum != 0) {
      return i; 
    }
  }
  return -1;
}
int main () {
  int n; cin >> n;
  vector<int> arr(n);
  int count_zero = 0;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    if (arr[i] == 0) {
      count_zero++;
    }
  }
  if (count_zero == n) {
    cout << "NO" << endl;
    return false;
  }

  int start_index = 0;
  int count = 0;
  while (start_index <= n - 1) {
    int end_index = split(arr, start_index);
    if (end_index == -1) {
      cout << "NO" << endl;
      return false;
    }
    start_index = end_index + 1;
    count++;
  }
  cout << "YES" << endl;
  cout << count << endl;

  start_index = 0;
  while (start_index <= n - 1) {
    int end_index = split(arr, start_index);
    cout << start_index + 1 << " " << end_index + 1 << endl;
    start_index = end_index + 1;
  }
}