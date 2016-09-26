#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main () {
	int n; cin >> n;
	vector<string> s(n);
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	bool flag = false;
	for (int i = 0; i < n; i++) {
		string w = s[i];
		if (w[0] == 'O' && w[1] == 'O') {
			s[i][0] = '+';
			s[i][1] = '+';
			flag = true;
			break;
		}
		if (w[3] == 'O' && w[4] == 'O') {
			s[i][3] = '+';
			s[i][4] = '+';
			flag = true;
			break;
		}
	}
	if (flag == false) {
		cout << "NO" << endl;
		return 0;
	}
	cout << "YES" << endl;
	for (int i = 0; i < n; i++) {
		cout << s[i] << endl;
	}
}