#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
	while (b != 0) {
		int temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}

int lcd(int a, int b) {
	return (a * b) / gcd(a, b);
}

int main() {
	int tc;
	cin >> tc;
	vector<int> a(tc), b(tc);
	for (int i = 0; i < tc; i++) {
		cin >> a[i] >> b[i];
	}

	for (int i = 0; i < tc; i++) {
		cout << lcd(a[i], b[i]) << ' ' << gcd(a[i], b[i]) << endl;;
	}

	return 0;
}