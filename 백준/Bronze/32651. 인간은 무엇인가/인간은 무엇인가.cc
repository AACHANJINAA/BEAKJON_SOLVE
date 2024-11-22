#include <iostream>
using namespace std;

int main() {	
	int n;
	cin >> n;
	if (n < 100000) {
		if (n % 2024 != 0)
			cout << "No";
		else
			cout << "Yes";
	}
	else
		cout << "No";

	return 0;
}