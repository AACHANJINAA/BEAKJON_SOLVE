#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {	
	int tc;
	cin >> tc;
	vector<int> n(tc);
	for (int i = 0; i < tc; i++) {
		cin >> n[i];
	}
	
	sort(n.begin(), n.end(), less<>());

	cout << n[0] << ' ';

	for (int i = 1; i < tc; i++) {
		if (n[i] != n[i - 1]) {
			cout << n[i] << ' ';
		}
	}

	return 0;
}