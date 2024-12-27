#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, tc;
    cin >> n >> tc;
    vector<int> bulb(n);

    for (int i = 0; i < n; i++) {
        cin >> bulb[i];
    }

    for (int i = 0; i < tc; i++) {
        int operated_num;
        int n1, n2;
        cin >> operated_num >> n1 >> n2;
        switch (operated_num)
        {
        case 1:
            bulb[n1 - 1] = n2;
            break;
        case 2:
            for (int j = n1 - 1; j <= n2 - 1; j++) {
                bulb[j] = 1 - bulb[j];
            }
            break;
        case 3:
            for (int j = n1 - 1; j <= n2 - 1; j++) {
                bulb[j] = 0;
            }
            break;
        case 4:
            for (int j = n1 - 1; j <= n2 - 1; j++) {
                bulb[j] = 1;
            }
            break;
        default:
            break;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << bulb[i] << ' ';
    }


    return 0;
}
