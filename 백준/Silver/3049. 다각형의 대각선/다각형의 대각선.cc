#include <iostream>
using namespace std;

int main() {	
	int n;
	cin >> n;
	int rst = 1;
	if (n < 4) {
		rst = 0;
	}
	else {
		for (int i = 0; i < 4; i++) {
			rst *= n - i;
		}
		rst /= 24;
	}

	cout << rst;
	return 0;
}