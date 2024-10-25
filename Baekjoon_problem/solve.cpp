#include <iostream>
#include <vector>
#include <string>
using namespace std;

int cnt = 0;

void push(vector<int>& data, int x) {
	data.push_back(x);
	cnt++;
}
void pop(vector<int>& data) {
	if (!data.empty()) {
		cout << data[cnt - 1] << endl;
		data.pop_back();
		cnt--;
	}
	else
		cout << -1 << endl;
}
void top(vector<int>& data){
	if (!data.empty()) {
		cout << data[cnt - 1] << endl;
	}
	else
		cout << -1 << endl;
}

int main() {
	int tc;
	cin >> tc;
	vector<string> input(tc);
	vector<int> data;
	int i;

	for (i = 0; i < 14; i++) {
		cin >> input[i];
		if (input[i] == "push") {
			int x;
			cin >> x;
			push(data, x);
		}
		else if (input[i] == "pop") {
			pop(data);
		}
		else if (input[i] == "size") {
			cout << data.size() << endl;
		}
		else if (input[i] == "empty") {
			if (data.empty())
				cout << 1 << endl;
			else
				cout << 0 << endl;
		}
		else if (input[i] == "top") {
			top(data);
		}
	}

	return 0;
}