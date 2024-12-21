#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main() {
	int tc1, tc2;
	cin >> tc1 >> tc2;
	set<string> heared;
	vector<string> result;

	for (int i = 0; i < tc1; i++) {
		string name;
		cin >> name;
		heared.insert(name);
	}

	for (int i = 0; i < tc2; i++) {
		string name;
		cin >> name;
		if (heared.find(name) != heared.end())
			result.push_back(name);
	}

	sort(result.begin(), result.end());
	cout << result.size() << '\n';
	for (const string& pr : result) {
		cout << pr << '\n';
	}
	cout << endl;

	return 0;
}