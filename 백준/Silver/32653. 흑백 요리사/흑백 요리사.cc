#include <iostream>
#include <vector>
using namespace std;

long long gcd(long long a, long long b) {
	while (b != 0) {
		long long temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}

long long lcm(long long a, long long b) {
	return (a * b) / gcd(a, b);
}

long long fuc(int n, vector<int>& arr) {
	if (n == 1) return arr[0]; 
	return lcm(arr[n - 1], fuc(n - 1, arr));
}

int main() {	
	int tc;
	cin >> tc;
	vector<int> meet(tc);
	for (int i = 0; i < tc; i++) {
		cin >> meet[i];
	}

	long long result = 2 * fuc(tc, meet);

	cout << result << endl;

	return 0;
}