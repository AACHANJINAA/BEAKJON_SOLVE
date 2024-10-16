#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    string v1, v2;

    cin >> v1 >> v2;

    int freqA[2][26]{};

    int i, j, result = 0;

    for (i = 0; i < v1.length(); i++) {
        freqA[0][v1[i] - 'a']++;
    }

    for (i = 0; i < v2.length(); i++) {
        freqA[1][v2[i] - 'a']++;
    }

    for (i = 0; i < 26; i++) {
        if (freqA[0][i] > 0 || freqA[1][i] > 0) {
            result += abs(freqA[0][i] - freqA[1][i]);
        }
    }

    cout << result;
}