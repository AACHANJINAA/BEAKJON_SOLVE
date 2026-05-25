#include <vector>
#include <algorithm>

using namespace std;

// 주의: INF를 1e9로 잡으면 아래 3중 for문에서 1e9 + 1e9 = 2e9가 되어 오버 플로우 위험
const int INF = 20000000;

int solution(int n, int s, int a, int b, vector<vector<int>> fares) {
    vector<vector<int>> dist(n + 1, vector<int>(n + 1, INF));

    for (int i = 1; i <= n; i++) dist[i][i] = 0;

    for (const auto& f : fares) {
        int u = f[0], v = f[1], w = f[2];
        dist[u][v] = dist[v][u] = w;
    }

    // 플로이드 워셜 알고리즘
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (dist[i][k] + dist[k][j] < dist[i][j]) dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }

    int min_time = INF;
    for (int i = 1; i <= n; i++) {
        if (dist[s][i] != INF && dist[i][a] != INF && dist[i][b] != INF) {
            int total_time = dist[s][i] + dist[i][a] + dist[i][b];
            min_time = min(min_time, total_time);
        }
    }

    return min_time;
}