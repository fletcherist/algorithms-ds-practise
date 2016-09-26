#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
	long long int n;
	cin >> n;
	vector<int> v(1000000);
	vector<int> len(1000000);
	
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	long int count = 1;
	for (int i = 0; i < n; i++) {
		if (v[i] <= v[i + 1]) {
			count++;
		} else {
			len.push_back(count);
			count = 1;
		}
	}

	sort(len.begin(), len.end());
	cout << len.back() << "\n";
}