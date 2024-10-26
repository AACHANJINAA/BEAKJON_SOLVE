#include <iostream>
#include <vector>
#include <cctype>
#include <string>
using namespace std;

int main() {
	string s;
	while (getline(cin, s)) {
		int small = 0, big = 0, num = 0, gap = 0;
		
		for (int j = 0; j < s.size(); j++) {
			if (islower(s[j])) {
				small++;
			}
			else if (isupper(s[j])) {
				big++;
			}
			else if (isdigit(s[j])) {
				num++;
			}
			else if (s[j] == ' ') {
				gap++;
			}
		}

		cout << small << ' ' << big << ' '
			<< num << ' ' << gap << endl;
	}
}
