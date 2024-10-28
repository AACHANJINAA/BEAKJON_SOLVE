#include <iostream>
using namespace std;

int main() {
	int n;
	string first_bit, second_bit;
	cin >> n;
	cin >> first_bit >> second_bit;
	bool succeeded = true;

	if (n % 2 == 1) {
		for (int i = 0; i < first_bit.length(); i++) {
			if (first_bit[i] == second_bit[i]) {
				succeeded = false;
				break;
			}
		}
	}
	else {
		for (int i = 0; i < first_bit.length(); i++) {
			if (first_bit[i] != second_bit[i]) {
				succeeded = false;
				break;
			}
		}
	}

	if (succeeded) {
		cout << "Deletion succeeded";
	}
	else {
		cout << "Deletion failed";
	}
}