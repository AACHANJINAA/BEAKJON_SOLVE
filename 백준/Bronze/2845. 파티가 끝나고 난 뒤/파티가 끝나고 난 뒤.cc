#include <iostream>
using namespace std;

int main() {
	int people, extent;
	int i, newspaper[5];
	cin >> people >> extent;
	for (i = 0; i < 5; i++) {
		cin >> newspaper[i];
		newspaper[i] -= people * extent;
	}
	for (i = 0; i < 5; i++) {
		cout << newspaper[i] << ' ';
	}
}