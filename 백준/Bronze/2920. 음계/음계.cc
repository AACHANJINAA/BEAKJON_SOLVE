#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	string ns1 = { "1 2 3 4 5 6 7 8" };
	string ns2 = { "8 7 6 5 4 3 2 1" };
	getline(cin, s);
	if (s == ns1)
		cout << "ascending";
	else if (s == ns2)
		cout << "descending";
	else
		cout << "mixed";
}