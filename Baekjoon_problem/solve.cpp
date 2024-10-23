#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int i, a[7]{};
	vector<int> odd;
	for (i = 0; i < 7; i++) {
		cin >> a[i];
		if (a[i] % 2 == 1)
			odd.push_back(a[i]);
	}
	if (!odd.empty()) {
		int sum = 0;
		for (i = 0; i < odd.size(); i++)
			sum += odd[i];
		sort(odd.begin(), odd.end(), less<>());
		cout << sum << '\n' << odd[0];
	}
	else
		cout << -1;
}