#include <iostream>
using namespace std;

int fibonaci(int x) {
	int result = 0;
	if (x == 0)
		result = 0;
	else if (x == 1)
		result = 1;
	
	int n1 = 1, n2 = 0;
	if (x > 1) {
		for (int i = 2; i < x + 1; i++) {
			result = n1 + n2;
			n2 = n1;
			n1 = result;
		}
	}

	return result;
}

int main() {
	int n;
	cin >> n;
	cout << fibonaci(n);
}