#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main () {
	int n; cin >> n;
	string s; cin >> s;
	vector <char> p(25);
	int ans = 0;

	std::transform(s.begin(), s.end(), s.begin(), ::tolower);
	cout << s << endl;
	for (int i = 0; i < s.length(); i++) {
		for (char e = 'a'; e <= 'z'; e++) {
			for (int t = 0; i < p.size(); t++) {
				if (p[t] == e) {
					cout << p[t] << " already exist" << endl;
					break;
				}
			}
			if (s[i] == e) {
				ans++;
				p.push_back(e);
			}
		}
	}
	if (ans == 23) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	cout << ans << endl;
	
}