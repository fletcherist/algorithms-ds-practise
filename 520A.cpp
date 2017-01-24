#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;
int main () {
	set<char> a;
	int n; cin >> n;
	vector<char> s(n);
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}

	std::transform(s.begin(), s.end(), s.begin(), ::tolower);

	for (int i = 0; i < n; i++) {
		a.insert(s[i]);
	}	
	if (a.size() >= 26) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}