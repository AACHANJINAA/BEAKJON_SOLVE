#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	vector<string> car(tc), name(tc);
	vector<int> num(tc), price(tc);
	vector<bool> good_car_number(tc);
	int i, j;
	for (i = 0; i < tc; i++) {
		cin >> car[i];
		name[i] = car[i].substr(0, 3);
		num[i] = stoi(car[i].substr(4, 4));
	}
	
	for (i = 0; i < tc; i++) {
		for (j = 0; j < 3; j++) {
			int x = name[i][j] - 'A';
			price[i] += x * pow(26, abs(j - 2));
		}
		if (abs(price[i] - num[i]) <= 100)
			good_car_number[i] = true;
		else
			good_car_number[i] = false;
	}

	for (i = 0; i < tc; i++) {
		if (good_car_number[i])
			cout << "nice" << endl;
		else
			cout << "not nice" << endl;
	}
}