#include <iostream>
#include <vector>

using namespace std;
int main () {
	int n = 0;
	cin >> n;
	vector<int> list(n);
	for (int i = 0; i < n; i++) {
		int tmp = 0;
		cin >> tmp;
		list[i] = tmp;
	}
	for (int i = 0; i < n; i++) {
		for (int e = 0; e < n; e++) {
			if (list[i] < list[e]) {
				int tmp = list[i];
				list[i] = list[e];
				list[e] = tmp;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << " " << list[i] << " ";
	}
}