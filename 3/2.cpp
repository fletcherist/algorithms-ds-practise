#include <iostream>
#include <vector>
using namespace std;
int main () {
	int x = 0; cin >> x; int ans = 0; int k = 5;
	while (1) {
		ans += x / k; x %= k; k--;
		if (k == 0) break;
	}
	cout << ans << endl;
}
