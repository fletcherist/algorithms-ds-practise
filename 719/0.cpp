#include <iostream>
#include <vector>

using namespace std;

int main () {
	int n = 0; cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int k = n - 1;
	int diff = arr[k] - arr[k - 1];
	if (n == 1 && arr[k] == 0) {
		cout << "UP" << endl;
		return 0;
	}
	if (n == 1 && arr[k] != 15) {
		cout << "-1" << endl;
		return 0;
	}
	if (diff > 0) {
		if (arr[k] == 15) {
			cout << "DOWN" << endl;
		} else {
			cout << "UP" << endl;
		}
	} else {
		if (arr[k] == 0) {
			cout << "UP" << endl;
		} else {
			cout << "DOWN" << endl;
		}
	}
}