#include <iostream>
#include <vector>
using namespace std;

int main() {
	int size, i;
	cin >> size;
	vector<int> vertex(size), edge(size), result(size);

	for (i = 0; i < size; i++) {
		cin >> vertex[i] >> edge[i];
		result[i] = 2 - vertex[i] + edge[i];
	}

	for (i = 0; i < size; i++) {
		cout << result[i] << endl;
	}

	return 0;
}