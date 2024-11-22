#include <iostream>
#include <vector>
using namespace std;

int main() {	
	int tc;
	cin >> tc;
	vector<int> play_tc(tc);
	vector<string> result(tc);
	for (int i = 0; i < tc; i++) {
		cin >> play_tc[i];
		vector<pair<char, char>> rcp(tc);
		pair<int, int> win{};
		for (int j = 0; j < play_tc[i]; j++) {
			cin >> rcp[i].first >> rcp[i].second;
			char a = rcp[i].first, b = rcp[i].second;
			if (a == 'R') {
				if (b == 'R')
					continue;
				else if (b == 'S')
					win.first++;
				else if (b == 'P')
					win.second++;
			}
			else if (a == 'S') {
				if (b == 'S')
					continue;
				else if (b == 'P')
					win.first++;
				else if (b == 'R')
					win.second++;
			}
			else if (a == 'P') {
				if (b == 'P')
					continue;
				else if (b == 'R')
					win.first++;
				else if (b == 'S')
					win.second++;
			}
		}
		if (win.first > win.second) {
			result[i] = "Player 1";
		}
		else if (win.first < win.second) {
			result[i] = "Player 2";
		}
		else {
			result[i] = "TIE";
		}
	}

	for (const auto& pr : result) {
		cout << pr << '\n';
	}
	return 0;
}