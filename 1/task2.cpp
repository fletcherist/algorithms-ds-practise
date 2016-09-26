#include <iostream>
#include <vector>
using namespace std;

int main () {
	long long n = 0, m = 0;
	cin >> n >> m;

	long long osX = n;
	long long osY = n;

	vector<int> columns(n, 0);
	vector<int> rows(n, 0);

	for (int i = 0; i < m; i++) {
		long long x = 0, y = 0;
		cin >> x >> y;x--;y--;
		if (!columns[x]) {
			osX -= 1;
		}
		if (!rows[y]) {
			osY -= 1;
		}

		columns[x] = 1;
		rows[y] = 1;

		cout << osX * osY << endl;
	}
}