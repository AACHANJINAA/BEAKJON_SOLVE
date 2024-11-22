#include <iostream>
#include <vector>
using namespace std;
#define n 10

int main() {	
	vector<int> f_p(n), s_p(n);
	int i;
	for (i = 0; i < n; i++) {
		cin >> f_p[i];
	}
	for (i = 0; i < n; i++) {
		cin >> s_p[i];
	}
	
	pair<int, int> win;

	for (i = 0; i < n; i++) {
		if (f_p[i] > s_p[i])
			win.first++;
		else if (f_p[i] < s_p[i])
			win.second++;
	}

	if (win.first > win.second)
		cout << 'A';
	else if (win.first < win.second)
		cout << 'B';
	else
		cout << 'D';
 	
	return 0;
}