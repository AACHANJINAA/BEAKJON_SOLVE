#include <algorithm>
#include <iostream>
#include <vector>

std::vector<std::vector<int>> graph;
std::vector<int> depth;
bool visited[10'0001]{};

void dfs(int start_node, int current_depth)
{
	if (visited[start_node]) return;
	visited[start_node] = true;

	depth[start_node] = current_depth;

	for (int n : graph[start_node])
	{
		if (!visited[n]) dfs(n, current_depth + 1);
	}
}

int main()
{
	int a, b, start_node;

	std::cin >> a >> b >> start_node;

	graph.assign(b + 1, {});
	depth.resize(a + 1, -1);

	for (int i = 1; i <= b; ++i)
	{
		int n1, n2;
		std::cin >> n1 >> n2;
		graph[n1].push_back(n2);
		graph[n2].push_back(n1);
	}

	for (int i = 1; i <= b; ++i)
	{
		std::sort(graph[i].begin(), graph[i].end(), [](int n1, int n2)
		{
			return n1 < n2;
		});
	}

	dfs(start_node, 0);

	for (int i = 1; i <= a; ++i)
	{
		std::cout << depth[i] << '\n';
	}
}