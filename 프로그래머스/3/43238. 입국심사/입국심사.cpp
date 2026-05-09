#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 최댓값을 찾을땐 check 성공 시 start, 최솟값을 찾을 때는 end

bool check(long long mid, int n, const vector<int>& times)
{
    long long total = 0;
	for (const auto& num : times)
	{
        total += mid / num;
	}

    return total >= n;
}


long long solution(int n, vector<int> times) {
    long long answer = 0;

    long long start = 0;
    long long max_time = *max_element(times.begin(), times.end());
    long long end = max_time * n;
    long long mid = 0;
    while (start <= end)
    {
	    mid = (start + end) / 2;

        if (check(mid, n, times))
        {
            answer = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return answer;
}
