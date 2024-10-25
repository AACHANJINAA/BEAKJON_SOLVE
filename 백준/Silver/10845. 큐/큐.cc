#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	queue<int> q;
	vector<string> in(tc);

	for (int i = 0; i < tc; i++) {
		cin >> in[i];
		if (in[i] == "push") {
			int x;
			cin >> x;
			q.push(x);
		}
		else if (in[i] == "pop") {
			if (q.empty())
				cout << -1 << endl;
			else {
				cout << q.front() << endl;
				q.pop();
			}
		}
		else if (in[i] == "size") {
			cout << q.size() << endl;
		}
		else if (in[i] == "empty") {
			if (q.empty())
				cout << 1 << endl;
			else
				cout << 0 << endl;
		}
		else if (in[i] == "front") {
			if (q.empty())
				cout << -1 << endl;
			else
				cout << q.front() << endl;
		}
		else if (in[i] == "back") {
			if (q.empty())
				cout << -1 << endl;
			else 
				cout << q.back() << endl;
		}
	}
}