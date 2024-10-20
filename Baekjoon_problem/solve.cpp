#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> game(5);
	int result = 0;

	for (int i = 0; i < 5; i++)
		result += game[i];

	cout << result;

	return 0;
}