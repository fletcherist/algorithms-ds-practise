#include <iostream>
#include <string>

using namespace std;
int main () {
	string s;
	cin >> s;
	int count = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '4' || s[i] == '7') {
			count++;
		}
	}
	string f = to_string(count);
	for (int i = 0; i < f.length(); i++) {
		if (f[i] != '4' && f[i] != '7') {
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
}