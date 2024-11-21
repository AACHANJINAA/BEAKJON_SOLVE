#include <iostream>
#include <vector>
using namespace std;

int main() {	
	int tc;
	cin >> tc;
	vector<pair<int, int>> body(tc);
	for (int i = 0; i < tc; i++) {
		cin >> body[i].first >> body[i].second;
	}

	vector<int> level(tc, 1);

	for (int i = 0; i < tc; i++) {
		for (int j = 0; j < tc; j++) {
			if (i != j &&
				body[i].first < body[j].first &&
				body[i].second < body[j].second)
				level[i]++;
		}
	}

	for (const auto& pr : level) {
		cout << pr << ' ';
	}
	cout << endl;

	return 0;
}