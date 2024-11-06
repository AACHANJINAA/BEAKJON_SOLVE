#include <iostream>
#include <vector>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	vector<int> pos(tc);
	vector<bool> seat(101, false);
	int cnt = 0;
	for (int i = 0; i < tc; i++) {
		cin >> pos[i];
		if (seat[pos[i]]) {
			cnt++;
		}
		else {
			seat[pos[i]] = true;
		}
	}

	cout << cnt;

	return 0;
}