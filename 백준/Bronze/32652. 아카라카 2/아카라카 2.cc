#include <iostream>
using namespace std;

int main() {	
	int n;
	cin >> n;
	string AR;
	for (int i = 0; i < n; i++) {
		if (i == 0)
			AR += "AKARAKA";
		else  {
			AR += "RAKA";
		}
	}

	cout << AR;

	return 0;
}