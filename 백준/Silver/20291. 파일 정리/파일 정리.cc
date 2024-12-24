#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	vector<string> s(tc);

	for (int i = 0; i < tc; i++) {
		cin >> s[i];
	}

	map<string, int> extension;

	for (int i = 0; i < tc; i++) {
		int f = s[i].find('.') + 1;
		extension[s[i].substr(f, s[i].length() - f)]++;
	}

	for (const auto& pr : extension) {
		cout << pr.first << ' ' << pr.second << endl;
	}

	return 0;
}