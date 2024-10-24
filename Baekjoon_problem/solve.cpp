#include <iostream>
using namespace std;

string DayOfWeek(int day, int month, int year) {
	if (month == 1 || month == 2) {
		month += 12;
		year -= 1;
	}

	int two_lower = year % 100;
	int two_higher = year / 100;

	int DOW = (day + (13 * (month + 1)) / 
		      5 + two_lower + (two_lower / 4) +
			  (two_higher / 4) + (two_higher * 5)) % 7;

	switch (DOW)
	{
	case 0:
		return "SAT";
		break;
	case 1:
		return "SUN";
		break;
	case 2:
		return "MON";
		break;
	case 3:
		return "TUE";
		break;
	case 4:
		return "WED";
		break;
	case 5:
		return "THU";
		break;
	case 6:
		return "FRI";
		break;
	default:
		break;
	}
}

int main() {
	int x, y;
	cin >> x >> y;

	cout << DayOfWeek(y, x, 2007);
	return 0;
}