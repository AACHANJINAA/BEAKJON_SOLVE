#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>

std::vector<std::vector<int>> graph;
bool visited[10'0005];

std::vector<int> order;
int current_order = 1;

void bfs(int start_node)
{
	std::queue<int> q;
	visited[start_node] = true;
	q.push(start_node);

	while (!q.empty())
	{
		int nq = q.front();
		q.pop();

		order[nq] = current_order++;

		for (int to : graph[nq])
		{

			if (!visited[to])
			{
				visited[to] = true;
				q.push(to);
			}
		}
	}
}

int main()
{
	int N, M, V;
	std::cin >> N >> M >> V;

	graph.assign(N + 1, {});
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

	for (int n = 1; n <= N; n++) {
		std::cout << order[n] << '\n';
	}
}