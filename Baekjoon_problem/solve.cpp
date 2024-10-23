#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else {
        int result = 0, n1 = 0, n2 = 1;
        for (int i = 2; i <= n; i++) {
            result = n1 + n2;
            n1 = n2;
            n2 = result;
        }
        return result;
    }

    return -1;
}

int main() {
    int n;
    cin >> n;
    cout << fibonacci(n);
    return 0;
}