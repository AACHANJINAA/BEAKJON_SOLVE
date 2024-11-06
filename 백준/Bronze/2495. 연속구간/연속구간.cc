#include <iostream>
using namespace std;

int main() {
	int cnt[3];
	for (int i = 0; i < 3; i++) {
		string s;
		cin >> s;

		int max_cnt = 1;
		int cur_cnt = 1;

		for (int k = 1; k < 8; k++) {
			if (s[k - 1] == s[k])
				cur_cnt++;
			else {
				if (max_cnt < cur_cnt)
					max_cnt = cur_cnt;
				cur_cnt = 1;
			}
		}
		if (max_cnt < cur_cnt)
			max_cnt = cur_cnt;
		cnt[i] = max_cnt;
	}
	
	for (int i = 0; i < 3; i++)
		cout << cnt[i] << '\n';

	return 0;
}