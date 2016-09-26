#include <iostream>

using namespace std;
int main () {
	int n; cin >> n;
	int in[n];
	int out[n];
	for (int i = 0; i < n; i++) {
		int tmp; cin >> tmp;
		in[i] = tmp;
	}
	for (int i = 0; i < n; i++) {
		out[i] = in[i] + in[i + 1];
		if (i == n - 1) {
			cout << " " << in[i];
			return 0;
		}
		cout << out[i] << " ";
	}
}