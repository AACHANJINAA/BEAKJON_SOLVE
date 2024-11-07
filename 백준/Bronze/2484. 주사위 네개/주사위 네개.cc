#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	vector<int> dice(4);
	vector<int> num(7, 0);
	vector<int> price(tc, 0);

	for (int i = 0; i < tc; i++) {
		for (int k = 0; k < 4; k++) {
			cin >> dice[k];
			num[dice[k]]++;
		}
		int max_num = 0, max_pos = 0, dup_max_pos = 0;
		bool dup_two = false;
		for (int u = 1; u < 7; u++) {
			if (max_num < num[u]) {
				max_num = num[u];
				max_pos = u;
			}
			else if (max_num == 2 && num[u] == 2) {
				dup_two = true;
				dup_max_pos = u;
			}
		}
		sort(dice.begin(), dice.end(), greater<>());
		switch (max_num)
		{
		case 1:
			price[i] = dice[0] * 100;
			break;
		case 2:
			if (dup_two) {
				price[i] = 2000 + max_pos * 500 + dup_max_pos * 500;
			}
			else {
				price[i] = 1000 + max_pos * 100;
			} 
			break;
		case 3:
			price[i] = 10000 + max_pos * 1000;
			break;
		case 4:
			price[i] = 50000 + max_pos * 5000;
			break;
		default:
			break;
		}
		for (int j = 1; j < 7; j++)
			num[j] = 0;
	}

	sort(price.begin(), price.end(), greater<>());
	
	cout << price.front();

	return 0;
}