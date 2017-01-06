#include <iostream>
#include <set>
#include <string>
using namespace std;


int main () {
  set<int> s;
  int n; cin >> n;

  int a; cin >> a;
  for (int i = 0; i < a; i++) {
    int tmp; cin >> tmp;
    s.insert(tmp);
  }
  int b; cin >> b;
  for (int i = 0; i < b; i++) {
    int tmp; cin >> tmp;
    s.insert(tmp);
  }

  if (s.size() == n) cout << "I become the guy." << endl;
  else cout << "Oh, my keyboard!" << endl;
}