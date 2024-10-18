#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class STUDENT {
public:
	string name;
	string year, month, day;
};

int main() {
	int test_case;
	cin >> test_case;
	vector<STUDENT> s(test_case);
	vector<string> birthday(test_case);
	vector<int> old(test_case);
	int i, j;
	string young_man, old_man;
	for (i = 0; i < test_case; i++) {
		cin >> s[i].name;
		cin >> s[i].day >> s[i].month >> s[i].year;
		if (stoi(s[i].month) < 10 && stoi(s[i].day) < 10) {
			birthday[i] = s[i].year + '0' + s[i].month + '0' + s[i].day;
		}
		else if (stoi(s[i].month) < 10) {
			birthday[i] = s[i].year + '0' + s[i].month + s[i].day;
		}
		else if (stoi(s[i].day) < 10) {
			birthday[i] = s[i].year +  s[i].month + '0' + s[i].day;
		}
		else {
			birthday[i] = s[i].year + s[i].month + s[i].day;
		}
		old[i] = stoi(birthday[i]);
	}
	
	sort(old.begin(), old.end());

	for (i = 0; i < test_case; i++) {
		if (old[0] == stoi(birthday[i]))
			old_man = s[i].name;
		if (old[test_case - 1] == stoi(birthday[i]))
			young_man = s[i].name;
	}

	cout << young_man << endl << old_man;
}