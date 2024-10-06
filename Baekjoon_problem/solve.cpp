#include <iostream>
using namespace std;

int main() {
	int size;
	cin >> size;
	int i, j;
	char** s = new char*[size];
	int* sum = new int[size];
	for (i = 0; i < size; i++) {
		s[i] = new char[3];
	}

	for (i = 0; i < size; i++) {
		for (j = 0; j < 3; j++) {
			cin >> s[i][j];
		}
		sum[i] = (s[i][0] - 48) + (s[i][2] - 48);
	}

	for (i = 0; i < size; i++) {
		cout << sum[i] << endl;
	}


	for (i = 0; i < size; i++)
		delete[] s[i];
	delete[] s;
	delete[] sum;

	return 0;
}