#include <iostream>
using namespace std;

int main() {
	int n, num[5]{};
	cin >> n;
	int i = 0, cnt = 0;
	for (i = 0; i < 5; i++) {
		cin >> num[i];
		if (n == num[i])
			cnt++;
	}
	cout << cnt;
}