#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;
	int n = s.length() / 10 + 1, i;
	string* a = new string[n];

	for (i = 0; i < n; i++) {
		if (i != n - 1)
			a[i] = s.substr(i * 10, 10);
		else
			a[i] = s.substr(i * 10);
	}

	for (i = 0; i < n; i++)
		cout << a[i] << endl;

	delete[] a;

	return 0;
}