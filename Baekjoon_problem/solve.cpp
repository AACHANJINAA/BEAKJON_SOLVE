#include <iostream>
#include <vector>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	vector<int> n(tc);
	vector<vector<int>> num(tc);
	vector<int> sum(tc);
	int i, j;
	for (i = 0; i < tc; i++) {
		cin >> n[i];
		num[i].resize(n[i]);
		for (j = 0; j < n[i]; j++) {
			cin >> num[i][j];
			sum[i] += num[i][j];
		}
	}

	for (i = 0; i < tc; i++)
		cout << sum[i] << endl;
}