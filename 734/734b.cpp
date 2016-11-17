#include <iostream>
using namespace std;
int main () {
	long long int a, b, c, d; cin >> a >> b >> c >> d;
	long long int m = 0;
	long long int ans = 0;
	a < c ? m = a : m = c;
	m > d ? m = d : m = m;

	a -= m; c -= m; d -=m;
	ans += m * 256;

	m = min(a, b);
	ans += m * 32;

	cout << ans << endl;
}