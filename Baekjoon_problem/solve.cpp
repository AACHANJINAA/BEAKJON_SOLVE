#include <iostream>
#include <vector>
using namespace std;

int main() {
	int size;
	cin >> size;
	vector<int> n(size);
	int result = 0, i, j;
	
	for (i = 0; i < size; i++) {
		cin >> n[i];

		if (n[i] > 1) {
			int cnt = 0;
			for (j = 2; j < n[i]; j++) {
				if (n[i] % j == 0) {
					cnt++;
				}
			}
			if (cnt == 0)
				result++;
		}
	}

	for (i = 0; i < result; i++)
		cout << result;
	
	return 0;
}