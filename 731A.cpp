#include <iostream>
#include <string>

using namespace std;

int distance_to_char (char e, char s) {
	int count1 = 0;
	int count2 = 0;
	for (char i = e; i < s; i++) {
		count1++;
	}
	for (char i = s; i < e; i++) {
		count2++;
	}
	int count = max(count1, count2);
	if (count > 13) {
		count = 26 - count;
	}
	return count;
}

int main () {
	string s;
	cin >> s;
	int count = 0;
	count += distance_to_char('a', s[0]);
	for (int i = 0; i < s.length() - 1; i++) {
		count += distance_to_char(s[i], s[i+1]);
	}

	cout << count << endl;
}