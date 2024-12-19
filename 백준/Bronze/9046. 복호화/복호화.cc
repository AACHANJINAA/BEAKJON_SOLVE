#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	int tc;
	cin >> tc;

	vector<string> s(tc);
	vector<char> c(tc);

	cin.ignore();

	for (int i = 0; i < tc; i++) {
		getline(cin, s[i]);
	}
	
	for (int i = 0; i < tc; i++) {
		vector<int> alpha(26, 0);
		int freq_pos = 0;
		bool is_tie = false;
		
		for (char ch : s[i]) {
			if (isalpha(ch)) {
				ch = tolower(ch);
				alpha[ch - 'a']++;
				if (alpha[ch - 'a'] > freq_pos)
					freq_pos = alpha[ch - 'a'];
			}
		}

		for (int j = 0; j < 26; j++) {
			if (freq_pos == alpha[j]) {
				if (c[i] == 0)
					c[i] = static_cast<char> ('a' + j);
				else
					is_tie = true;
			}
		}

		if (is_tie)
			c[i] = '?';
	}

	for (int i = 0; i < tc; i++) {
		cout << c[i] << endl;
	}

	return 0;
}