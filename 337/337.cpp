#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main () {
	int n, m; cin >> n >> m;
	vector<int> arr(m);
	for (int i = 0; i < m; i++) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	int ans = arr[m - 1];
	for (int i = 0; i < m - n + 1; i++) {
		ans = min(abs(arr[i] - arr[i + n - 1]), ans);
	}
	cout << ans << endl;
}