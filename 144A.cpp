#include <iostream>
using namespace std;
int main () {
  int arr[101];
  int n; cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int max = 0;
  int max_i = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] > max) {
      max = arr[i];
      max_i = i;
    }
  }

  int min = 105;
  int min_i = 0;
  for (int i = n - 1; i >= 0; i--) {
    if (arr[i] < min) {
      min = arr[i];
      min_i = i;
    }
  }
  int ANS = 0;
  ANS = n - min_i - 1 + max_i;
  if (min_i < max_i) {
    ANS -= 1;
  } 
  
  
  cout << ANS << endl;

}