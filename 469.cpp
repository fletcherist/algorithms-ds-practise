#include <iostream>
#include <algorithm>
#include <set>
#include <vector>

using namespace std;
int main () {
	int n = 0; cin >> n;
	set <int> s;
	for (int i = 1; i <= n; i++) {
		int m = 0;
		cin >> m;
		s.insert(m);
	}

	if (s.size() == n) {
		cout << "I become the guy." << endl;
	} else {
		cout << "Oh, my keyboard!" << endl;
	}
}