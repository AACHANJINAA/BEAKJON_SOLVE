#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	vector<string> sentence(tc);
	int i, j;
	
	for (i = 0; i < tc; i++) {
		cin >> sentence[i];
	}
	
	sort(sentence.begin(), sentence.end(), [](const string& a, const string& b) {
		if (a.length() == b.length()) {
			return a < b;  
		}
		return a.length() < b.length(); 
		});

	sentence.erase(unique(sentence.begin(), sentence.end()), sentence.end());


	for (const auto& s : sentence)
		cout << s << '\n';

	return 0;
}