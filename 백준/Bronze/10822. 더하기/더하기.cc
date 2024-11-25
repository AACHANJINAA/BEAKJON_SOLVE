#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	string s;
	cin >> s;
	vector<int> num;
	int last_pos = 0;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ',') {
			num.push_back(stoi(s.substr(last_pos, i - last_pos)));
			last_pos = i + 1;
		}
		else if (i == s.length() - 1) {
			num.push_back(stoi(s.substr(last_pos, s.length() - last_pos)));
		}
	}
	
	int result = 0;
	for (int i = 0; i < num.size(); i++)
		result += num[i];

	cout << result << endl;

	return 0;
}