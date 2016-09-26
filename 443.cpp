#include <iostream>
#include <algorithm>
#include <set>

using namespace std;
int main () {
	set<char> data;

	for (int i = 0; i < 1005; i++) {
		char a;
		cin >> a;
		if (a == '{' || a == ' ' || a == ',') {
			// Do nothing
		} else if (a == '}') {
			break;
		} else {
			data.insert(a);
		}
	}

	cout << data.size() << endl;
}