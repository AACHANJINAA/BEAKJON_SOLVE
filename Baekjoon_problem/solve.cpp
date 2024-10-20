#include <iostream>
#include <vector>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	vector<int> s(tc);
	vector<int> n(tc);
	vector<vector<int>> q(tc);
	vector<vector<int>> p(tc);
	vector<int> result(tc, 0);
	for (int i = 0; i < tc; i++) {
		cin >> s[i] >> n[i];
		result[i] += s[i];
		q[i].resize(n[i]);
		p[i].resize(n[i]);
		for (int j = 0; j < n[i]; j++) {
			cin >> q[i][j] >> p[i][j];
			result[i] += q[i][j] * p[i][j];
		}
	}

	for (int i = 0; i < tc; i++)
		cout << result[i];

	return 0;
}