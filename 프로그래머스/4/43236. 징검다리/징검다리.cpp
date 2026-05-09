#include <vector>
#include <iostream>
#include <algorithm>

/*
[ 징검다리 (파라메트릭 서치) 핵심 로직 요약 ]

1. 핵심: '바위 사이의 최소 간격(mid)'을 미리 정해두고, 이 간격을 유지하기 위해 바위를 몇 개 부숴야 하는지 테스트!
2. 이전 위치 기억(prev): 출발점(0)부터 시작해서, '현재 바위 - prev' 거리를 잼.
3. 파괴 or 보존: 거리가 mid보다 짧으면 기준 미달이므로 파괴(cnt++), 길면 보존하고 prev를 현재 바위 위치로 갱신!
4. 마지막 징검다리: 배열을 다 돈 후, '도착지점(distance) - 마지막 prev' 거리도 mid보다 짧으면 파괴 카운트 추가.
5. 방향 결정: 부순 바위가 n개 '이하'라면? 넉넉하게 성공했으므로 간격을 더 넓혀봄 👉 start = mid + 1
*/

using namespace std;

bool check(int mid, int dis, const vector<int>& rocks, int remove_num)
{
    int remove_cnt = 0;
    int prev = 0;

    for (const auto& r : rocks)
    {
        if (r - prev < mid)
        {
            remove_cnt++;
        }
        else
        {
            prev = r;
        }
    }

    if (dis - prev < mid)
    {
        remove_cnt++;
    }

    return remove_cnt <= remove_num;
}

int solution(int distance, vector<int> rocks, int n) {
    int answer = 0;

    sort(rocks.begin(), rocks.end());

    int start = 0;
    int end = distance;
    int mid = 0;

    while (start <= end)
    {
        mid = (start + end) / 2;

        if (check(mid, distance, rocks, n))
        {
            answer = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return answer;
}

int main()
{
    cout << solution(25, { 2, 14, 11, 21, 17 }, 2);
}