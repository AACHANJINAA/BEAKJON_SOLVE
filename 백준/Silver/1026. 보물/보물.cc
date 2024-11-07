#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	vector<int> A_arr(tc);
	vector<int> B_arr(tc);
	int i, result = 0;

	for (i = 0; i < tc; i++) {
		cin >> A_arr[i];
	}
	for (i = 0; i < tc; i++) {
		cin >> B_arr[i];
	}

	sort(A_arr.begin(), A_arr.end(), less<>());
	sort(B_arr.begin(), B_arr.end(), greater<>());

	for (i = 0; i < tc; i++) {
		result += A_arr[i] * B_arr[i];
	}

	cout << result;

	return 0;
}