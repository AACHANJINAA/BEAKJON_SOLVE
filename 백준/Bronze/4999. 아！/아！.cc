#include <iostream>
using namespace std;

int main() {
	string jh_scream, doctor_want_scream;
	cin >> jh_scream >> doctor_want_scream;
	if (jh_scream.length() < doctor_want_scream.length())
		cout << "no";
	else
		cout << "go";
}