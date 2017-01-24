#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main () {
  int month; cin >> month;
  int day_number; cin >> day_number;

  int days_count = 0;
  if (month == 2) {
    days_count = 28;
  } else if (month == 8) {
    days_count = 31;
  } else {
    if (month < 8) {
      days_count = month % 2 ? 31 : 30; 
    } else {
      days_count = month % 2 ? 30 : 31; 
    }
    
  }
  int full_days = days_count + day_number;
  int ANS =  full_days / 7 + 1;
  if (full_days % 7 == 1) {
    ANS -= 1;
  }

  if (full_days == 35) {
    ANS -= 1;
  }
  // cout << days_count << endl;
  cout << ANS << endl;
}