#include <iostream>
#include <string>
#include <set>
using namespace std;

int main () {
  set <string> settn;
  settn.insert("hse");

  cout << settn.find("hse") << endl;
}