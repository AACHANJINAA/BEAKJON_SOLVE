#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	string s;
	cin >> s;
	vector<string> arr(s.size());
	int i, j;
	for (i = 0; i < s.size(); i++) {
		for (j = i; j < s.size(); j++) {
			arr[i] += s[j];
		}
	}
	sort(arr.begin(), arr.end(), less<>());

	for (i = 0 ; i < s.size(); i++){
		cout << arr[i] << endl;
	}
}
