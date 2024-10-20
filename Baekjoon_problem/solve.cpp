#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, i;
	cin >> N;
	vector<int> candy(N);
	vector<int> brother(N);

	for (i = 0; i < N; i++) {
		cin >> candy[i] >> brother[i];
	}

	for (i = 0; i < N; i++) {
		printf("You get %d piece(s) and your dad gets %d piece(s).",
			candy[i] / brother[i], candy[i] % brother[i]);
		cout << endl;
	}

	return 0;
}