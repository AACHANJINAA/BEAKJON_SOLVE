#include <iostream>
#include <vector>
#include <algorithm>

struct TIME
{
	int start;
	int end;
};

int main()
{
	int T;
	std::cin >> T;
	std::vector<TIME> v(T);

	for (int i = 0; i < T; ++i)
	{
		std::cin >> v[i].start >> v[i].end;
	}

	std::sort(v.begin(), v.end(), [](const TIME& a, const TIME& b) {
		if (a.end == b.end)
		{
			return a.start < b.start;
		}
		return a.end < b.end;
		});

	int start = v[0].start, end = v[0].end, cnt = 1;
	for (int i = 1; i < T; ++i)
	{
		if (end <= v[i].start)
		{
			start = v[i].start;
			end = v[i].end;
			++cnt;
		}
	}

	std::cout << cnt << '\n';
}