#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[9];
    int sum = 0;

    for (int i = 0; i < 9; i++) {
        cin >> a[i];
        sum += a[i];
    }

    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (sum - a[i] - a[j] == 100) {
                a[i] = a[j] = -1;
                break;
            }
        }
        if (a[i] == -1) break;
    }

    sort(a, a + 9);

    for (int i = 2; i < 9; i++) {
        cout << a[i] << endl;
    }

    return 0;
}
