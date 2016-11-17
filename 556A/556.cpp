#include <iostream>
#include <string>

using namespace std;
int main () {
	int n = 0; cin >> n;
	string s; cin >> s;
	int diff = 0;
	for (int i = 0; i < s.length(); i++) {
		int e = s[i] - '0';
		if (e == 0) diff++;
		else diff--;
		
	}
	if (diff == 0) {
		cout << "0" << endl;
	} else {
		cout << abs(diff) << endl;
	}
