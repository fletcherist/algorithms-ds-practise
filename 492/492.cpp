#include <iostream>
using namespace std;

int main () {
	int n; cin >> n;
	int count = 0;
	int prev = 0;
	int amount = 0;
	for (int i = 1; i <= n; i++) {
		prev = prev + i;
		amount += prev;
		if (n - amount < 0) break;
		count++;
	}
	if (n == 1) {
		cout << 1 << endl;
		return 0;
	}
	cout << count << endl;
}