#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, X, i;
	cin >> N >> X;
	vector<int> num(N), result;

	for (i = 0; i < N; i++) {
		cin >> num[i];
		if (num[i] < X)
			result.push_back(num[i]);
	}

	for (i = 0; i < result.size(); i++) {
		cout << result[i] << ' ';
	}

	return 0;
}