#include <iostream>
#include <vector>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	vector<int> student(tc);
	vector<int> apples(tc);
	int left_apples = 0;

	for (int i = 0; i < tc; i++) {
		cin >> student[i] >> apples[i];
		
		if (student[i] <= apples[i]) {
			left_apples += apples[i] % student[i];
		}
		else {
			left_apples += apples[i];
		}
	}

	cout << left_apples;
	return 0;
}