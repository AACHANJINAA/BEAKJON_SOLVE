#include <iostream>
#include <vector>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	vector<int> bn(tc), result(tc, 0);
	int i, k;
	for (i = 0; i < tc; i++) {
		cin >> bn[i];
		if (bn[i] < 10) {
			result[i] = 1;
		}
		else {
			int n = bn[i];
			vector<bool> check_num(10, false);
			while (n > 0) {
				int digit = n % 10;
				check_num[digit] = true;
				n /= 10;
			}
			for (k = 0; k < 10; k++)
				if (check_num[k])
					result[i]++;
		}
	}

	for (i = 0; i < tc; i++)
		cout << result[i] << endl;
}