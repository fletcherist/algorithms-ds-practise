#include <iostream>

using namespace std;

int main () {
	long long int p; cin >> p;
	long long int store = 0;
	for (long long int i = 1; i <= p; i++) {
		long long int n; cin >> n;
		store += n - 1;

		if (store % 2 == 0) {
			cout << "2" << endl;
		} else {
			cout << "1" << endl;
		}
	}
}