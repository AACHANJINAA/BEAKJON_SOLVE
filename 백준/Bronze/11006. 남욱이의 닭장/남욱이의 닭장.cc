#include <iostream>
#include <vector>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	vector<int> leg(tc), chicken(tc);
	vector<int> sick(tc), normal(tc);
	for (int i = 0; i < tc; i++) {
		cin >> leg[i] >> chicken[i];
		normal[i] = leg[i] - chicken[i];
		sick[i] = chicken[i] - normal[i];
	}

	for (int i = 0; i < tc; i++) {
		cout << sick[i] << ' ' << normal[i] << endl;
	}

	return 0;
}