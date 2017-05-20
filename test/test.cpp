#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>

using namespace std;

int comp (int a, int b) {
  return a < b;
}

int main () {
  vector<int> a(1);
  a.push_back(5);
  a.push_back(2);
  a.push_back(1);
  a.push_back(3);
  a.push_back(4);

  for (int i = 0; i < 1000; i++) {
    a.push_back(i);
  }

  sort(a.begin(), a.end(), comp);

  for (int i = 0; i < a.size(); i++) {
    cout << a[i] << endl;
  }
}