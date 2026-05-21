#include <queue>
#include <string>
#include <vector>

using namespace std;

vector<int> dijkstra(int start, const vector<vector<int>>& graph)
{
	vector<int> d(graph.size(), 1e9);
	d[start] = 0;

	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	pq.push({ 0, start });

	while (!pq.empty())
	{
		int dist = pq.top().first; 
		int now = pq.top().second; 
		pq.pop();

		if (d[now] < dist) continue;

		for (int next_node = 1; next_node < graph.size(); ++next_node)
		{
			if (graph[now][next_node] == 1e9) continue;
			int cost = graph[now][next_node];
			int new_cost = dist + cost;
			// 거쳐서 가는 것이 기존 최단 거리보다 더 짧다면 갱신
			if (new_cost < d[next_node])
			{
				d[next_node] = new_cost;
				pq.push({ new_cost, next_node });
			}
		}
	}
	return d;
}

// 지점의 개수 n, 출발지점을 나타내는 s, A의 도착지점을 나타내는 a, B의 도착지점을 나타내는 b
// fares[i] = [c, d, f]는 c-d의 간선 비용이 f
int solution(int n, int s, int a, int b, vector<vector<int>> fares) {
	vector<vector<int>> graph(n + 1, vector<int>(n + 1, 1e9));

    for (const auto& f : fares)
    {
		int u = f[0], v = f[1], w = f[2];
		graph[u][v] = graph[v][u] = w;
    }

	vector<int> dist_s = dijkstra(s, graph);
	vector<int> dist_a = dijkstra(a, graph);
	vector<int> dist_b = dijkstra(b, graph);

	int min_time = 2e9;
	for (int i = 1; i <= n; ++i)
	{
		if (dist_s[i] != 1e9 && dist_a[i] != 1e9 && dist_b[i] != 1e9)
		{
			int total_time = dist_s[i] + dist_a[i] + dist_b[i];
			min_time = min(min_time, total_time);
		}
	}

	return min_time;
}