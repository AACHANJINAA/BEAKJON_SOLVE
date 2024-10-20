#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> computer(N);
	int result = 0;

	for (int i = 0; i < N; i++) {
		cin >> computer[i];
		result += computer[i];
	}
	
	result -= N - 1;

	cout << result;

	return 0;
}