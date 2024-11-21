#include <iostream>
#include <vector>
using namespace std;

int main() {	
	int tc;
	cin >> tc;
	vector<string> s(tc);
	string r_s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	vector<int> sum(tc);
	for (int i = 0; i < tc; i++) {
		cin >> s[i];
	}
	bool is[26]{};
	for (int i = 0; i < tc; i++) {
		for (int j = 0; j < s[i].length(); j++) {
			for (int k = 0; k < 26; k++) {
				if (s[i][j] == r_s[k]) {
					is[k] = true;
					break;
				}
			}
		}
		
		for (int j = 0; j < 26; j++) {
			if (!is[j])
				sum[i] += r_s[j];
			is[j] = false;
		}
	}

	for (const auto& pr : sum) {
		cout << pr << '\n';
	}

	return 0;
}