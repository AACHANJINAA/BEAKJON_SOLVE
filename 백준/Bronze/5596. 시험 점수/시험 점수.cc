#include <iostream>
using namespace std;
#define n 4

int main() {
	int i, j, s[n], t[n];
	int s_sum = 0, t_sum = 0;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < n; j++) {
			if (i == 0) {
				cin >> s[n];
				s_sum += s[n];
			}
			else {
				cin >> t[n];
				t_sum += t[n];
			}
		}
	}

	if (s_sum >= t_sum)
		cout << s_sum;
	else
		cout << t_sum;
}