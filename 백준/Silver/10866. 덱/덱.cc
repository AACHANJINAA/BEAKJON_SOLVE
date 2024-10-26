#include <iostream>
#include <vector>
using namespace std;
class Deque {
private:
	vector<int> data;
public:
	void push_front(int x) {
		data.insert(data.begin(), x);
	}
	void pop_front() {
		if (data.empty())
			cout << -1 << endl;
		else {
			cout << data.front() << endl;
			data.erase(data.begin());
		}
	}
	void push_back(int x) {
		data.push_back(x);
	}
	void pop_back() {
		if (data.empty())
			cout << -1 << endl;
		else {
			cout << data.back() << endl;
			data.pop_back();
		}
	}
	void size() {
		cout << data.size() << endl;
	}
	void empty() {
		if (data.empty()) {
			cout << 1 << endl;
		}
		else {
			cout << 0 << endl;
		}
	}
	void front() {
		if (data.empty()) {
			cout << -1 << endl;
		}
		else {
			cout << data.front() << endl;
		}
	}
	void back() {
		if (data.empty()) {
			cout << -1 << endl;
		}
		else {
			cout << data.back() << endl;
		}
	}
};


int main() {
	int tc;
	cin >> tc;
	Deque d;
	string s;
	for (int i = 0; i < tc; i++) {
		cin >> s;
		if (s == "push_front") {
			int x;
			cin >> x;
			d.push_front(x);
		}
		else if (s == "push_back") {
			int x;
			cin >> x;
			d.push_back(x);
		}
		else if (s == "pop_front") {
			d.pop_front();
		}
		else if (s == "pop_back") {
			d.pop_back();
		}
		else if (s == "size") {
			d.size();
		}
		else if (s == "empty") {
			d.empty();
		}
		else if (s == "front") {
			d.front();
		}
		else if (s == "back") {
			d.back();
		}
	}
	return 0;
}