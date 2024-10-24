#include <iostream>
using namespace std;

int main() {
	int size;
	cin >> size;
	int i, j;

	for (i = 1; i <= size; i++) {
		if (i == size) {
			for (j = 1; j <= 2 * size - 1; j++) {
				cout << '*';
			}
		}
		else {
			for (j = 1; j <= size - i; j++) 
				cout << ' ';
			cout << '*';
			if (i > 1) {
				for (j = 1; j <= ((2 * (i - 1)) - 1); j++)
					cout << ' ';
				cout << '*';
			}
		}
		cout << endl;
	}

	return 0;
}