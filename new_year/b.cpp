#include <iostream>
#include <string>

using namespace std;

int main () {
  int n; cin >> n;

  long long int northsouth_vector = 0;
  long int eastwest_vector = 0;

  for (int i = 0; i < n; i++) {
    long int distance; cin >> distance;
    string direction; cin >> direction;

    if (northsouth_vector == 0) {
      if (direction != "South") {
        cout << "NO" << endl;
        return false;
      }
    } else if (northsouth_vector == 20000) {
      if (direction != "North") {
        cout << "NO" << endl;
        return false;
      }
    }

    if (direction == "North") {
      northsouth_vector -= distance;
    } else if (direction == "South") {
      northsouth_vector += distance;
    } else if (direction == "West") {
      eastwest_vector -= distance;
    } else if (direction == "East") {
      eastwest_vector += distance;
    }
  }

  if (northsouth_vector == 0) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}