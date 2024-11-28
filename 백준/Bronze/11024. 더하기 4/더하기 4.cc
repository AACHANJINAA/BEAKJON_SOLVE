#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	vector<int> result(tc);
	string s;
	cin.ignore();
	for (int i = 0; i < tc; i++) {
		getline(cin, s);
		istringstream ss(s);
		int num;
		while (ss >> num) {
			result[i] += num;
		}
	}
	
	for (int i = 0; i < tc; i++) {
		cout << result[i] << endl;
	}

	return 0;
}