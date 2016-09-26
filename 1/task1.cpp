#include <iostream>
using namespace std;

int main () {
	int n;
	int arr[100];
	int ind[100];
	cin >> n; 
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		ind[i] = i;
	}

	for (int i = 1; i <= n; i++) {
		for (int e = 1; e <= n; e++) {
			if (arr[i] > arr[e]) {
				int tmp = arr[i];
				arr[i] = arr[e];
				arr[e] = tmp;

				int tmp2 = ind[i];
				ind[i] = ind[e];
				ind[e] = tmp2;
			}
		}
	}

	cout << " " << endl;

	for (int i = 1; i <= n / 2; i++) {
		// cout << arr[i] << endl;
		int summ = arr[i] + arr[n - i + 1];
		cout << ind[i] << " " << ind[n - i + 1] << endl;
	}
}