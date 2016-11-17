#include <iostream>
using namespace std;

int main () {
	int n, m; cin >> n >> m;
	int ans = 10001;
	for (int i = 0; i <= n; i++) {
		for (int e = 0; e <= n; e++) {
			if (i + e * 2 == n) {
				if ((i + e) % m == 0) {
					ans = min(i + e, ans);
				}
			}
		}
	}
	if (ans == 10001) {
		ans = -1;
	}
	cout << ans << endl;
}