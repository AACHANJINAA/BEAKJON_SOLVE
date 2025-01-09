#include <iostream>
#include <vector>
using namespace std;

int main() {
	int tc;
	cin >> tc;

	vector<pair<int, int>> m(tc);
	for (int i = 0; i < tc; i++) {
		cin >> m[i].first >> m[i].second;
	}

	vector<int> result(tc, 1);

	for (int i = 0; i < tc; i++) {
		for (int j = 0; j < tc; j++) {
			if (m[i].first < m[j].first && m[i].second < m[j].second)
				result[i]++;
		}
	}

	for (const int& pr : result)
		cout << pr << ' ';
}