#include <iostream>
using namespace std;

int main() {	
	string s;
	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'C') {
			continue;
		}
		else if (s[i] == 'A') {
			continue;
		}
		else if (s[i] == 'M') {
			continue;
		}
		else if (s[i] == 'B') {
			continue;
		}
		else if (s[i] == 'R') {
			continue;
		}
		else if (s[i] == 'I') {
			continue;
		}
		else if (s[i] == 'D') {
			continue;
		}
		else if (s[i] == 'G') {
			continue;
		}
		else if (s[i] == 'E') {
			continue;
		}
		else {
			cout << s[i];
		}
	}


	return 0;
}