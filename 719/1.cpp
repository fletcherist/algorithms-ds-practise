#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main () {
	int n ;
	cin >> n;
	string s;
	cin >> s;
	vector<int> a;
	a.push_back(1);
	for (int i = 1; i < n; i++) {
		if (s[i] == s[i - 1]) {
			a[a.size() - 1]++;
		}
		else {
			a.push_back(1);
		}
	}
	int ans = 0;
	for (int i = 0; i < a.size(); i++) {
		if (a[i] % 2 == 0 && a[i] != 0) {
			ans++;
			if (i + 1 < a.size()) a[i + 1]--;
			ans += (a[i] - 1) / 2;
		}
		else if(a[i] != 1) {
			ans += a[i] / 2;
		}
	}
	cout << ans << '\n';
}