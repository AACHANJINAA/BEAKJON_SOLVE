#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int tc, i;
	cin >> tc;
	vector<pair<int, int>> xy(tc);
	for (i = 0; i < tc; i++) 
		cin >> xy[i].first >> xy[i].second;

	sort(xy.begin(), xy.end());

	for (i = 0; i < tc; i++)
		cout << xy[i].first << ' ' << xy[i].second << '\n';

	return 0;
}