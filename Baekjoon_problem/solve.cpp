#include <iostream>
#include <vector>
using namespace std;

int main() {
	int test_case;
	cin >> test_case;
	vector<string> result_name(test_case);
	vector<int> result_price(test_case);

	for (int i = 0; i < test_case; i++) {
		int p;
		cin >> p;
		vector<string> name(p);
		vector<int> price(p);
		for (int j = 0; j < p; j++) {
			cin >> price[j];
			cin >> name[j];

			if (i == 0) {
				result_name[i] = name[j];
				result_price[i] = price[j];
			}
			else {
				if (result_price[i] < price[j]) {
					result_name[i] = name[j];
					result_price[i] = price[j];
				}
			}
		}
	}

	for (int i = 0; i < test_case; i++) {
		cout << result_name[i] << endl;
	}
}