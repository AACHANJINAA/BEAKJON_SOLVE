#include <iostream>
#include <string>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	string result;
	for (int i = 0; i < N && result.length() < M; i++)
		result += to_string(N);
	
	cout << result.substr(0, M);

	return 0;
}