#include <iostream>
#include <vector>
using namespace std;

int main() {
	int row, line;
	cin >> row >> line;
	vector<vector<char>> matrix(row, vector<char>(line));
	vector<vector<bool>> has_c(row, vector<bool>(line, false));
	vector<vector<int>> result(row, vector<int>(line, -1));

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < line; j++) {
			cin >> matrix[i][j];
			if (matrix[i][j] == 'c')
				has_c[i][j] = true;
		}
	}

	int minute = 1;

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < line; j++) {
			if (has_c[i][j]) {
				int k = j;
				for (int u = k; u < line; u++) {
					result[i][u] = -1;
				}
				for (int u = k; u < line; u++) {
					result[i][u] += minute;
					minute++;
				}
				minute = 1;
			}
		}
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < line; j++) {
			cout << result[i][j] << ' ';
		}
		cout << endl;
	}
}