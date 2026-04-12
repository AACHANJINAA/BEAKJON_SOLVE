#include <iostream>
#include <vector>

int solution(int n, std::vector<int> lost, std::vector<int> reserve) {
    int answer = 0;

    std::vector<int> clothes(n + 2, 1);

    for (int i : lost) clothes[i]--;
    for (int i : reserve) clothes[i]++;

    for (int i = 1; i <= n; ++i)
    {
        if (clothes[i] == 0) 
        {
            if (clothes[i - 1] == 2) {
                clothes[i - 1]--;
                clothes[i]++;
            }
            else if (clothes[i + 1] == 2) {
                clothes[i + 1]--;
                clothes[i]++;
            }
        }

        if (clothes[i] > 0) answer++;
    }

    return answer;
}
