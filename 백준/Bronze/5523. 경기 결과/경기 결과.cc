#include <iostream>
#include <vector>
using namespace std;

int main() {	
	int tc;
	cin >> tc;
	vector<pair<int, int>> point(tc);
	pair<int, int> win_num;
	for (int i = 0; i < tc; i++) {
		cin >> point[i].first >> point[i].second;
		if (point[i].first > point[i].second)
			win_num.first++;
		else if (point[i].first < point[i].second)
			win_num.second++;
	}

	cout << win_num.first << ' ' << win_num.second;

	return 0;
}