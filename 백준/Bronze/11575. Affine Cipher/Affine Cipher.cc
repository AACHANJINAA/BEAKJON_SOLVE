#include <iostream>
#include <vector>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	vector<int> a(tc), b(tc);
	vector<string> password(tc), result(tc);
	int i, j;
	for (i = 0; i < tc; i++) {
		cin >> a[i] >> b[i];
		cin >> password[i];
		for (j = 0; j < password[i].length(); j++) {
			int x = password[i][j] - 'A';
			result[i] += char((a[i] * x + b[i]) % 26 + 'A');
		}
	}
	for (i = 0; i < tc; i++) {
		cout << result[i] << '\n';
	}
}