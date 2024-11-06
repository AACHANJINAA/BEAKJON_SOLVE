#include <iostream>
using namespace std;
#define n 6

int main() {
	int total_peace[n] = { 1, 1, 2, 2, 2, 8 }; // 킹, 퀸, 룩, 비숍 나이트, 폰
	int i, find_peace[n];
	for (i = 0; i < n; i++) {
		cin >> find_peace[i];
		total_peace[i] -= find_peace[i];
	}
	
	for (i = 0; i < n; i++) {
		cout << total_peace[i] << ' ';
	}
}