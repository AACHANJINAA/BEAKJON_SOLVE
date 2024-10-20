#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
	int test_case, i, j;
	cin >> test_case;
	vector<int> term(test_case);
	vector<vector<int>> credit(test_case);
	vector<vector<double>> point(test_case);

	for (i = 0; i < test_case; i++) {
		cin >> term[i];
		credit[i].resize(term[i]);
		point[i].resize(term[i]);
		for (j = 0; j < term[i]; j++) {
			cin >> credit[i][j] >> point[i][j];
		}
	}

	cout << fixed;
	for (i = 0; i < test_case; i++) {
		int i_sum = 0;
		double d_sum = 0;
		for (j = 0; j < term[i]; j++) {
			i_sum += credit[i][j];
			d_sum += point[i][j] * credit[i][j];
		}
		d_sum /= i_sum;
		cout << i_sum << ' ' << setprecision(1) << d_sum << endl;
	}

	return 0;
}