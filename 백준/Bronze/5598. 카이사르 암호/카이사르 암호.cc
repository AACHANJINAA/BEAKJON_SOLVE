#include <iostream>
using namespace std;

int main() {
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 'A' && s[i] <= 'C') {
			s[i] += 23;
		}
		else {
			s[i] -= 3;
		}
	}
	cout << s;
}