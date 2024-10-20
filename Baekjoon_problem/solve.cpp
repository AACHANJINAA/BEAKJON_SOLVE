#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, i;
	cin >> N;
	vector<int> first_dice(N);
	vector<int> second_dice(N);

	for (i = 0; i < N; i++) {
		cin >> first_dice[i] >> second_dice[i];
	}

	for (i = 0; i < N; i++) {
		cout << "Case " << i << ": " << first_dice[i] + second_dice[i] << endl;

	}

	return 0;
}