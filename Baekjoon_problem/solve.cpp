#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int tc, i;
	cin >> tc;
	vector<pair<int, int>> xy(tc);
	for (i = 0; i < tc; i++) 
		cin >> xy[i].second >> xy[i].first;

	sort(xy.begin(), xy.end());

	for (i = 0; i < tc; i++)
		cout << xy[i].second << ' ' << xy[i].first << '\n';

	return 0;
}