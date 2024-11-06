#include <iostream>
#include <vector>
using namespace std;

int main() {
	string s;
	cin >> s;
	int first_str = 0, second_str = 0;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'O' && i != 0) {
			if (s[i - 1] == 'J' && s[i + 1] == 'I')
				first_str++;
			else if (s[i - 1] == 'I' && s[i + 1] == 'I')
				second_str++;
		}
	}

	cout << first_str << '\n' << second_str << endl;

	return 0;
}