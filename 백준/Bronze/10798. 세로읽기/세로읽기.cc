#include <iostream>
#include <vector>
using namespace std;
#define n 5

int main() {
	vector<string> s(n);
	string r_str = {};

	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}

	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < n; j++) {
			if (i < s[j].length())
				r_str += s[j][i];
		}
	}

	cout << r_str;

	return 0;
}