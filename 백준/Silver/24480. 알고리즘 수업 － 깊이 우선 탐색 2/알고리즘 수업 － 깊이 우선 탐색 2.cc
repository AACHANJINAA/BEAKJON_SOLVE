#include <algorithm>
#include <iostream>
#include <vector>

std::vector<std::vector<int>> graph;
std::vector<int> order;
bool visited[10'0001]{};
int curr_order = 1;

void dfs(int start_node)
{
	if (visited[start_node]) return;
	visited[start_node] = true;
	order[start_node] = curr_order;
	curr_order++;

	for (int n : graph[start_node])
	{
		if (!visited[n]) dfs(n);
	}
}

int main()
{
	int a, b, start_node;

	std::cin >> a >> b >> start_node;

	graph.assign(b + 1, {});
	order.resize(a + 1, 0);

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
				return n1 > n2;
		});
	}

	dfs(start_node);

	for (int i = 1; i <= a; ++i)
	{
		std::cout << order[i] << '\n';
	}
}