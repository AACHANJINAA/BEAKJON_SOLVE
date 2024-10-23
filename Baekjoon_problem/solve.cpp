#include <iostream>
using namespace std;

int main() {
	int arr[3][4]{};
	int result[3]{};
	int i, j;
	for (i = 0; i < 3; i++){
		for (j = 0; j < 4; j++) {
			cin >> arr[i][j];
			result[i] += arr[i][j];
		}
	}

	for (i = 0; i < 3; i++) {
		switch(result[i])
		{
		case 0:
			cout << 'D' << endl;
			break;
		case 1:
			cout << 'C' << endl;
			break;
		case 2:
			cout << 'B' << endl;
			break;
		case 3:
			cout << 'A' << endl;
			break;
		case 4:
			cout << 'E' << endl;
			break;
		default:
			break;
		}
	}
}