#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>

std::vector<std::vector<int>> graph;
bool visited[10'0005];

std::vector<int> breath;
std::vector<long long> order;
long long current_order = 1;

struct NODE
{
	int node;
	int depth;
};

void bfs(int start_node)
{
	std::queue<NODE> q;
	visited[start_node] = true;
	q.push({start_node, 0});

	while (!q.empty())
	{
		NODE nq = q.front();
		q.pop();

		breath[nq.node] = nq.depth;
		order[nq.node] = current_order++;

		for (int to : graph[nq.node])
		{
			if (!visited[to])
			{
				visited[to] = true;
				q.push({to, nq.depth + 1});
			}
		}
	}
}

int main()
{
	int N, M, V;
	std::cin >> N >> M >> V;

	graph.assign(N + 1, {});
	breath.resize(N + 1, -1);
	order.resize(N + 1, 0);

	for (int i = 1; i <= M; ++i)
	{
		int n1, n2;
		std::cin >> n1 >> n2;
		graph[n1].push_back(n2);
		graph[n2].push_back(n1);
	}

	for (int i = 1; i <= N; ++i)
		std::sort(graph[i].begin(), graph[i].end(), [](int n1, int n2)
			{
				return n1 < n2;
			});

	bfs(V);

	long long res = 0;
	for (int n = 1; n <= N; n++) {
		if (breath[n] != -1) res += order[n] * breath[n];
		//std::cout << order[n] << "*" << breath[n] << " = " << res <<'\n';
	}
	std::cout << res;
}