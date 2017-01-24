#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

int main () {
  string s1, s2, s3, combined;
  cin >> s1 >> s2 >> s3;
  combined = s1 + s2;
  sort(combined.begin(), combined.end());
  sort(s3.begin(), s3.end());
  if (s3 == combined) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}