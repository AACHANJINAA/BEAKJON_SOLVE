#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> triangle) {
    vector<vector<int>> dp = triangle;

    for (int i = dp.size() - 2; i >= 0; --i) {
        for (int j = 0; j < dp[i].size(); ++j) {

            //  내 값 += max(왼쪽 자식, 오른쪽 자식)
            dp[i][j] += max(dp[i + 1][j], dp[i + 1][j + 1]);
        }
    }

    return dp[0][0];
}
