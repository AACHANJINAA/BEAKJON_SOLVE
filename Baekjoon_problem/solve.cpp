#include <iostream>
using namespace std;

int main() {
	int a[4][2];
	int i, j;
	int human_num = 0, many_people = -1;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 2; j++) {
			cin >> a[i][j];
			if(j == 0)
				human_num -= a[i][j];
			else if(j == 1)
				human_num += a[i][j];
		}
		if (human_num > many_people)
			many_people = human_num;
	}
	cout << many_people;
}