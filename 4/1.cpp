#include <iostream>
#include <string>

using namespace std;
int main () {
	string hate = "I hate it";
	string love = " that I love it";

	string ans = "I hate";
	int n = 0; cin >> n;

	bool flag = false;
	for (int i = 1; i <= n; i++) {
		if (i > 1) {
			if (!flag) {
				ans.insert(ans.length(), " that I love");
			} else {
				ans.insert(ans.length(), " that I hate");
			}
			flag = !flag;
		}
		
	}
	ans.insert(ans.length(), " it");
	cout << ans << endl;
}