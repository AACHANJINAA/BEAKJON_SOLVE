#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	string s;
	vector<string> find_nemo;
	while (true) {
		getline(cin, s);
		if (s == "EOI")
			break;
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		if (s.find("nemo") != string::npos)
			find_nemo.push_back("Found");
		else
			find_nemo.push_back("Missing");
	}
	for (int i = 0; i < find_nemo.size(); i++)
		cout << find_nemo[i] << endl;
}