#include <iostream>
using namespace std;

int main () {
	long long long int n, a, b, c; cin >> n >> a >> b >> c;
	long long long int n1 = 0; long long long int n2 = 0; long long long int n3 = 0;
	long long long int k = 0; long long long int k1 = 0; long long long int k3 = 0; long long int k2 = 0;
	if (n % 4 == 0) {
		k = 0;
	} else {
		while((n + n1) % 4 != 0) {
			n1 = n1 + 1;
		}

		if (n % 2 == 0) {
			while ((n + n2) % 4 != 0) {
				n2 += 2;
			}
		}

		while ((n + n3) % 4 != 0) {
			n3 += 3;
		}

		k1 = n1 * a;
		k3 = n3 / 3 * c;
		if (n % 2 == 0) {
			k2 = n2 / 2 * b;
		} else {
			k2 = k1;
		}

		if (k1 < k2 && k1 < k3) {
			k = k1;
		} else if (k2 < k3) {
			k = k2;
		} else {
			k = k3;
		}
	}

	cout << k << endl;
}