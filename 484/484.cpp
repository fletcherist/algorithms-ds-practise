#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main () {
	long int n; cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >>arr[i];
	}
	int answer = 0;
	for (int i = 0; i < n; i++) {
		for (int e = 0; e < n; e++) {
			int tmp = arr[i] % arr[e];
			cout << arr[i] <<" " << tmp << " " << arr[e] << endl;
			answer = max(tmp, answer);
		}
	}
	cout << answer << endl;
}