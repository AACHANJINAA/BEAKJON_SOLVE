#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int m, n;
	int small_num = -1, sum = 0;
	cin >> m >> n;

	for (int i = m; i <= m + (n - m); i++) {
		int k = sqrt(i);
		if (k * k == i) {
			if (small_num == -1) {
				small_num = i;
			}
			else if (small_num > i) {
				small_num = i;
			}
			sum += i;
		}
	}

	if (small_num != -1)
		cout << sum << endl << small_num;
	else
		cout << small_num;
}