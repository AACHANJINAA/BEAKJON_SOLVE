#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool have_vowel(const string& s) {
	for (char ch : s) {
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
			return true;
	}
	return false;
}

bool have_three_sequence(const string& s) {
	if (s.length() > 2) {
		for (int i = 2; i < s.length(); i++) {
			bool allVowels = (s[i - 2] == 'a' || s[i - 2] == 'e' || s[i - 2] == 'i' || s[i - 2] == 'o' || s[i - 2] == 'u') &&
				(s[i - 1] == 'a' || s[i - 1] == 'e' || s[i - 1] == 'i' || s[i - 1] == 'o' || s[i - 1] == 'u') &&
				(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u');

			bool allConsonants = !(s[i - 2] == 'a' || s[i - 2] == 'e' || s[i - 2] == 'i' || s[i - 2] == 'o' || s[i - 2] == 'u') &&
				!(s[i - 1] == 'a' || s[i - 1] == 'e' || s[i - 1] == 'i' || s[i - 1] == 'o' || s[i - 1] == 'u') &&
				!(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u');

			if (allVowels || allConsonants) {
				return true;
			}
		}
	}
	
	return false;
}

bool have_same_word_twice(const string& s) {
	if (s.length() > 1) {
		for (int i = 1; i < s.length(); i++) {
			if (s[i] == s[i - 1] && s[i] != 'e' && s[i] != 'o')
				return true;
		}

	}

	return false;
}

int main(){
	string s;
	vector<string> result;
	while (getline(cin, s)) {
		if (s == "end") break;

		bool tc1, tc2, tc3;
		tc1 = have_vowel(s);
		tc2 = have_three_sequence(s);
		tc3 = have_same_word_twice(s);

		if (tc1 && !tc2 && !tc3) {
			result.push_back("<" +  s + "> is acceptable.");
		}
		else {
			result.push_back("<" + s + "> is not acceptable.");
		}
	}

	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << endl;
	}

	return 0;
}