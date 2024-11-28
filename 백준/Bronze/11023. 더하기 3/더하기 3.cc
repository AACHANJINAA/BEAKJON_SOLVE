#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	string s;
	int result = 0;
	getline(cin, s);
	istringstream ss(s);
	int num;
	while (ss >> num) {
		result += num;
	}

	cout << result;

	return 0;
}