#include <iostream>
#include <vector>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	vector<int> p(tc);
	int result = 0, sequence = 0;
	for (int i = 0; i < tc; i++) {
		cin >> p[i];
		if (p[i] == 1) {
			sequence++;
			result += sequence;
		}
		else {
			sequence = 0;
		}
	}
	cout << result;
}