#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main () {
  string s = "hello world";
  s.erase(0, 1);
  cout << s << endl;
}