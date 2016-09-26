#include <iostream>
#include <algorithm>
#include <set>
#include <vector>

using namespace std;
int main () {
	int n;
	cin >> n;

	vector <int> d1(n);
	vector <int> d2(n);
	vector <int> d3(n);

	for (int i = 0; i < n; i++) {
		cin >> d1[i];
		cin >> d2[i];
		cin >> d3[i];
	}

	int d1i = 0;
	int d2i = 0;
	int d3i = 0;
	for (int i = 0; i < n; i++) {
		d1i += d1[i];
		d2i += d2[i];
		d3i += d3[i];
	}
	if (d1i == 0 && d2i == 0 && d3i == 0) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}