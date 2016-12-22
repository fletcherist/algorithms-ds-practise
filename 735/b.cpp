#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main () {
	long int n, n1, n2; cin >> n >> n1 >> n2;
	long int n11 = n1; long int n22 = n2;
	float s1 = 0; float s2 = 0;
	vector<float> arr(n);
	for (long int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int counter = 0;
	sort(arr.begin(), arr.end(), std::greater<float>());
	int maxim = max(n1, n2);

	if (maxim == n1) {
		while (n22 > 0) { s2 += arr[counter]; counter++; n22--; }	
		while (n11 > 0) { s1 += arr[counter]; counter++; n11--; }
	} else {
		while (n11 > 0) { s1 += arr[counter]; counter++; n11--; }
		while (n22 > 0) { s2 += arr[counter]; counter++; n22--; }	
	}
	cout.precision(10);
	cout << (s1 / n1) + (s2 / n2) << endl;
}