#include <iostream>
using namespace std;

int main() {
	int a, b;
	string op;
	int case_cnt = 1; 
	while (op != "E") {
		cin >> a >> op >> b;
		if (op == ">") {
			if (a > b) {
				cout << "Case " << case_cnt << ": true" << '\n';
			}
			else {
				cout << "Case " << case_cnt << ": false" << '\n';
			}
		}
		else if (op == ">=") {
			if (a >= b) {
				cout << "Case " << case_cnt << ": true" << '\n';
			}
			else {
				cout << "Case " << case_cnt << ": false" << '\n';
			}
		}
		else if (op == "<") {
			if (a < b) {
				cout << "Case " << case_cnt << ": true" << '\n';
			}
			else {
				cout << "Case " << case_cnt << ": false" << '\n';
			}
		}
		else if (op == "<=") {
			if (a <= b) {
				cout << "Case " << case_cnt << ": true" << '\n';
			}
			else {
				cout << "Case " << case_cnt << ": false" << '\n';
			}
		}
		else if (op == "==") {
			if (a == b) {
				cout << "Case " << case_cnt << ": true" << '\n';
			}
			else {
				cout << "Case " << case_cnt << ": false" << '\n';
			}
		}
		else if (op == "!=") {
			if (a != b) {
				cout << "Case " << case_cnt << ": true" << '\n';
			}
			else {
				cout << "Case " << case_cnt << ": false" << '\n';
			}
		}
		case_cnt++;
	}

	return 0;
}