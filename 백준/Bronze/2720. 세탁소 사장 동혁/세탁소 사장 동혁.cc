#include <iostream>
#include <vector>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	vector<int> money(tc);
	vector<vector<int>> cents(tc, vector<int>(4));
		// 쿼터 0.25 다임 0.10 니켈 0.05 페니 0.01
	for (int i = 0; i < tc; i++) {
		cin >> money[i];

		while (money[i] != 0) {
			if (money[i] / 25 != 0) {
				cents[i][0] = money[i] / 25;
				money[i] %= 25;
			}
			else if (money[i] / 10 != 0) {
				cents[i][1] = money[i] / 10;
				money[i] %= 10;
			}
			else if (money[i] / 5 != 0) {
				cents[i][2] = money[i] / 5;
				money[i] %= 5;
			}
			else {
				cents[i][3] = money[i];
				money[i] = 0;
			}
		}
	}

	for (int i = 0; i < tc; i++) {
		for (int k = 0; k < 4; k++) {
			cout << cents[i][k] << ' ';
		}
		cout << '\n';
	}

	return 0;
}