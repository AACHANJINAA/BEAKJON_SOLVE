#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

void first_process(vector<string>& s) {
	sort(s.begin(), s.end(), less<>());
}

void second_process(vector<string>& s) {
	sort(s.begin(), s.end(), [](string a, string b) { 
		return a.size() > b.size(); });
}

void third_process(vector<string>& s) {
	map<string, int> freq;
	for (const auto& w : s) {
		freq[w]++;
	}
	sort(s.begin(), s.end(),[&](const string& a, const string& b) {
		if (freq[a] != freq[b]) return freq[a] > freq[b];
		if (a.size() != b.size()) return a.size() > b.size();
		return a < b; 
	});
	s.erase(unique(s.begin(), s.end()), s.end());
}

int main() {
	int w_num, w_len;
	cin >> w_num >> w_len;
	vector<string> words(w_num);
	vector<string> result;

	for (int i = 0; i < w_num; i++) {
		cin >> words[i];
		if (words[i].length() >= w_len)
			result.push_back(words[i]);
	}

	first_process(result);
	second_process(result);
	third_process(result);

	for (const auto& pr : result) {
		cout << pr << '\n';
	}

	cout << endl;
	
	return 0;
}