#include <iostream>
#include <string>

using namespace std;
int main () {
	int n, m; cin >> n >> m;
	bool flag = false;
	for (int i = 1; i <= n; i++) {
		for (int e = 1; e <= m; e++) {
			if ((i - 1) % 2 == 0) {
				cout << "#";
			} else {
				if (e != 1 && e != m) {
					cout << ".";
				} else {
					if (e == m && flag) {
						cout << "#";
					} else {
						if (e == 1 && !flag) {
							cout << "#";
						} else {
							cout << ".";
						}
					}
					
				}
			}
		}
		if ((i - 1) % 2 == 0) {
			flag = !flag;
		}
		cout << "\n";
	}
}



