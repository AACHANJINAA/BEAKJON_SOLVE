#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> money) {
    int n = money.size();

    // 원형으로 되어 있어 마지막과 첫 번째가 인접해 있기에 두 개로 나눔 
    vector<int> dp1(n, 0);
    vector<int> dp2(n, 0);

    dp1[0] = money[0];
    dp1[1] = money[0];

    dp2[0] = 0;
    dp2[1] = money[1];

    for (int i = 2; i < n; ++i) dp1[i] = max(dp1[i - 1], dp1[i - 2] + money[i]);
    for (int i = 2; i < n; ++i) dp2[i] = max(dp2[i - 1], dp2[i - 2] + money[i]);


    return max(dp1[n - 2], dp2[n - 1]);
}