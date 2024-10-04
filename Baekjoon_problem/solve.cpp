#include <iostream>
using namespace std;

int main() {
    int small_man[9];
    int i, j, sum = 0;
    int pass_num[2] = {0, 1};
    bool change = false;

    for (i = 0; i < 9; i++)
        cin >> small_man[i];

    while (1) {
        sum = 0;
        for (j = 0; j < 9; j++) {
            if (j != pass_num[0] && j != pass_num[1]) {
                sum += small_man[j];
            }
        }
        if (sum != 100) {
            if (!change) {
                pass_num[1]++;
            }
            else {
                pass_num[0]++;
                pass_num[1] = pass_num[0] + 1;
                change = false;
            }
        }
        else {
            small_man[pass_num[0]] = 0;
            small_man[pass_num[1]] = 0;
            break;
        }

        if (pass_num[1] > 7)
            change = true;

        if (pass_num[0] > 6)
            break;
    }

    for (i = 0; i < 9; i++) {
        if(small_man[i] != 0)
            cout << small_man[i] << endl;
    }

    return 0;
}
