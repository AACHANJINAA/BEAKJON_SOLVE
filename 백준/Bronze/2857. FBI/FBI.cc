#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define N 5

int main() {
	string player[N];
	int i, j;
	vector<int> result;
	for (i = 0; i < N; i++) {
		cin >> player[i];
	}

	for (i = 0; i < N; i++) {
		for (j = 0; j < player[i].length() - 2; j++) {
			if (player[i].find("FBI") != string::npos) {
				result.push_back(i + 1);
				break;
			}
		}
	}

	if (!result.empty()) {
		for (i = 0; i < result.size(); i++) {
			cout << result[i];
			if (i < result.size() - 1)
				cout << ' ';
			else
				cout << endl;
		}
	}
	else
		cout << "HE GOT AWAY!" << endl;
}