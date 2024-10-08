#include <iostream>
using namespace std;

int main() {
	int n;
	string number;
	cin >> n >> number;
	int i, result = 0;

	for (i = 0; i < n; i++)
		result += number[i] - 48;

	cout << result << endl;

	return 0;
}