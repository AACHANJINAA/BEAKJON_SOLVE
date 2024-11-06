#include <iostream>
#include <vector>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	vector<string> c(tc);
	string result{};
	int i, j, k;
	for (i = 0; i < tc; i++) {
		cin >> c[i];
	}

	result = c[0];

	for (i = 1; i < tc; i++) {
		for (j = 0; j < c[i].length(); j++) {
			if (result[j] != c[i][j]) {
				result[j] = '?';
			}
		}
	}

	cout << result;
}