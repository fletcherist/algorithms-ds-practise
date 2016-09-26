#include <iostream>
#include <string>

using namespace std;
int main () {
	string a;
	string b;
	cin >> a >> b;
	for (int i = 0; i < a.length(); i++) {
		if (a[i] == '1' && b[i] == '0') {
			cout << "1";
		} else if (a[i] == '0' && b[i] == '1') {
			cout << "1";
		} else {
			cout << "0";
		}
	}
}