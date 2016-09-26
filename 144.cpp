#include <iostream>
#include <algorithm>
#include <set>
#include <vector>

using namespace std;
int main () {
	int n = 0; cin >> n;
	vector <int> s(n);
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}

	int count = 0;

	for (int i = 0; i < n; i++) {
		for (int e = i + 1; e < n; e++) {
			if (s[i] < s[e]) {
				int tmp = s[i];
				s[i] = s[e];
				s[e] = tmp;
				count++;
			}
			cout << s[i] << " ";
		}
		cout << endl;
	}

	cout << count << endl;
}