#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int m, int n, vector<vector<int>> puddles) {
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    for (int i = 0; i < puddles.size(); i++) {
        int x = puddles[i][0]; // 가로
        int y = puddles[i][1]; // 세로
        dp[y][x] = -1; 
    }

    dp[1][1] = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i == 1 && j == 1) continue;

            if (dp[i][j] == -1) {
                dp[i][j] = 0; 
                continue;
            }

            // (위쪽 칸 + 왼쪽 칸) -> 오른쪽, 아래이동이니 이렇게 그리고 문제에 맞게 나머지 연산
            dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % 10'0000'0007;
        }
    }

    return dp[n][m];
}