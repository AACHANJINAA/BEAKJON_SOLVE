#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[9]{}, i, j;
    for (i = 0; i < 9; i++) {
        cin >> arr[i];
    }
    int big_num = -1;
    for (i = 0; i < 9; i++) {
        if (big_num < arr[i])
            big_num = arr[i];
    }

    for (i = 0; i < 9; i++) {
        if (big_num == arr[i]) {
            cout << big_num << '\n' << i;
        }
    }
    return 0;
}