#include <iostream>
#include <set>

using namespace std;

int main () {
  set<long long int> count;
  long long int tmp;
  for (int i = 0; i < 4; i++) {
    cin >> tmp;
    count.insert(tmp);
  }
  cout << 4 - count.size() << endl;
}