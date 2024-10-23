#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	vector<double> subject(tc);
	double avr = 0.0;
	int i;
	for (i = 0; i < tc; i++) {
		cin >> subject[i];
	}
	sort(subject.begin(), subject.end(), greater<>());
	for (i = 0; i < tc; i++) {
		avr += subject[i] / subject[0] * 100;
	}
	cout << fixed;
	cout << avr / double(tc);
}