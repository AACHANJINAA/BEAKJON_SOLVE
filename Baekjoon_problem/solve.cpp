#include <iostream>
using namespace std;

int main() {
    int size, i;
    cin >> size;
    string* s = new string[size];
    for (i = 0; i < size; i++) {
        cin >> s[i];
    }

    for (i = 0; i < size; i++) {
        if (s[i].length() > 1) {
            cout << s[i][0] << s[i][s[i].length() - 1] << endl;
        }
        else {
            cout << s[i][0] << s[i][0] << endl;
        }
    }

    return 0;
}