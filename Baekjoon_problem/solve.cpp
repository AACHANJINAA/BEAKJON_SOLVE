#include <iostream>
#include <string>
using namespace std;

int main() {
	int size;
	cin >> size;
	cin.ignore();
	string* s = new string[size];
	int i;

	for (i = 0; i < size; i++) {
		getline(cin, s[i]);
	}

	for (i = 0; i < size; i++) {
		if (s[i][0] - 97 >= 0)
			s[i][0] -= 32;
	}

	for (i = 0; i < size; i++) {
		cout << s[i] << endl;
	}

	delete[] s;

	return 0;
}