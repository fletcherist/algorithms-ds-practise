#include <iostream>
#include <string>
using namespace std;
int main () {
	int n, k; cin >> n >> k;
	string s; cin >> s;
	int gIndex = -1;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'G') {
			gIndex = i;
		}
		if (gIndex > 0) {
			if (gIndex + i * k > s.length()) break;
			if (s[i + i * k] == 'T') {
				cout << "YES" << endl;
				return false;
			}
		}
	}

	for (int i = s.length() - 1; i >= 0; i--) {
		if (s[i] == 'G') {
			gIndex = i;
		}
		if (gIndex > 0) {
			if (gIndex - i * k > s.length()) break;
			if (s[gIndex - i * k] == 'T') {
				cout << "YES" << endl;
				return false;
			}
		}		
	}

	cout << "NO" << endl;
	return false;
}