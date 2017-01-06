#include <iostream>
using namespace std;

int main () {
  int n, k; cin >> n >> k;
  int max = 4 * 60; // 240
  int diff = max - k;
  int count = 0; 
  int time = 0;
  int i = 1;
  while (time <= diff && n >= 0) {
    time += 5 * i; count += 1; i++; n--;
  }
  if (time != diff) {
    count -= 1;
  }
  cout << count << endl;
}