#include <iostream>
#include <vector>
using namespace std;

int main() {
	string s;
	cin >> s;
	
	char c = ' ';
	vector<int> alpha(26, 0);
	int freq_pos = 0;

	for (char ch : s) {
		ch = toupper(ch);
		alpha[ch - 'A']++;
		if (freq_pos < alpha[ch - 'A'])
			freq_pos = alpha[ch - 'A'];
	
	}

	int stack_a = 0;

	for (int i = 0; i < 26; i++) {
		if (freq_pos == alpha[i]) {
			c = static_cast<char>(i + 'A');
			stack_a++;
		}
	}

	if (stack_a > 1)
		c = '?';

	cout << c;

	return 0;
}