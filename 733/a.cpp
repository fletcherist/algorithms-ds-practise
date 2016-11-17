#include <iostream>
#include <string>
using namespace std;

int main () {
	string s; cin >> s;
	char pop[6] = {'A', 'E', 'O', 'U', 'Y', 'I'};
	int count = 0;
	int ans = 1;
	for (int i = 0; i < s.length() - 1; i++) {
		for (int e = 0; e < 6; e++) {
			if (s[i] == pop[e]) {
				ans = max(ans, count);
				count = 0;
				break;
			}
		} 
		count++;
	}
	cout << ans << endl;
}