#include <iostream>
using namespace std;

int main() {
	string s;
	cin >> s;
	int i, alphabet[26]{};

	for (i = 0; i < s.length(); i++) 
		alphabet[s[i] - 97]++;

	for (i = 0; i < 26; i++)
		cout << alphabet[i] << ' ';

	return 0;
}