#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	int k;
	vector<int> multiple_cadidate;
	cin >> n;
	while (true) {
		cin >> k;
		if (k == 0)
			break;
		multiple_cadidate.push_back(k);
	}
	for (int i = 0; i < multiple_cadidate.size(); i++) {
		cout << multiple_cadidate[i];
		if (multiple_cadidate[i] % n != 0)
			cout << " is NOT a multiple of ";
		else
			cout << " is a multiple of ";
		cout << n << '.' << '\n';
	}
}