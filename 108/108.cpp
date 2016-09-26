#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main () {
	char arr[1000*5999];
	cin >> arr;

	if (strlen(arr) == 1) {
		if (arr[0] == '4' || arr[0] == '7') {
			cout << "YES" << endl;
			return 0;
		}
	}
	for (int i = 0; i < strlen(arr); i++) {
		if (arr[i] != '4' && arr[i] != '7') {
			cout << "NO" << endl;
			return 0;
		}
	}

	cout << "YES" << endl;
}