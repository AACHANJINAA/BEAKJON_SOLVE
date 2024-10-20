#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> a, b;

	while(true) {
		int n, k;
		cin >> n >> k;
		if (n == 0 && k == 0) {
			break;
		}
		else {
			a.push_back(n);
			b.push_back(k);
		}
	}

	for (int i = 0; i < size(a); i++) {
		cout << a[i] + b[i];
	}
}