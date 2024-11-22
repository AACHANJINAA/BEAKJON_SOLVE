#include <iostream>
#include <vector>
using namespace std;

int main() {	
	int tc;
	cin >> tc;
	vector<string> name(tc);
	for (int i = 0; i < tc; i++) {
		cin >> name[i];
		for (int j = 0; j < name[i].length(); j++)
			if(name[i][j] >= 'A')
				name[i][j] = tolower(name[i][j]);
	}
	
	
	for (const auto& pr : name) {
		cout << pr << '\n';
	}

	return 0;
}