#include <iostream>

using namespace std;
int main () {
	int n = 0;
	cin >> n;
	int a = 0;
	int b = 0;
	for (int i = 0; i < n; i++) {
		int c = 0;
		int d = 0;
		cin >> c >> d;
		if (c > d) {
			a++;
		} else if (c < d) {
			b++;
		}
	}

	if (a > b) {
		cout << "Mishka" << endl;
	} else if (a < b) {
		cout << "Chris" << endl;
	} else {
		cout << "Friendship is magic!^^" << endl;
	}

	return 0;
}

