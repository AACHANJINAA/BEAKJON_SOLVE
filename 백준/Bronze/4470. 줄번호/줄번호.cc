#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {	
	int tc;
	cin >> tc;
	vector<string> text(tc);
	cin.ignore();
	for (int i = 0; i < tc; i++) {
		getline(cin, text[i]);
	}

	for (int i = 0; i < tc; i++) {
		cout << i + 1 << ". " << text[i] << '\n';
	}

	return 0;
}