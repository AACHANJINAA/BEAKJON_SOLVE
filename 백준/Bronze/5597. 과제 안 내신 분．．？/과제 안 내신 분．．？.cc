#include <iostream>
#include <vector>
using namespace std;
#define n 28

int main() {
	int i, j, subject[n];
	bool DONT_HAVE_NUMBER;
	vector<int> rst;
	for (i = 0; i < n; i++) {
		cin >> subject[i];
	}
	for (i = 1; i <= 30; i++) {
		DONT_HAVE_NUMBER = true;
		for (j = 0; j < n; j++) {
			if (i == subject[j]) {
				DONT_HAVE_NUMBER = false;
			}
		}
		if (DONT_HAVE_NUMBER) {
			rst.push_back(i);
		}
	}

	for (i = 0; i < rst.size(); i++) {
		cout << rst[i] << endl;
	}
}