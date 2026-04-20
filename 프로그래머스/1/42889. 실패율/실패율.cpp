#include <vector>
#include <algorithm>
#include <iostream>

struct STAGES
{
    int num;
    int cnt;
    double fail_percetage;
};

std::vector<int> solution(int N, std::vector<int> stages) {
    std::vector<STAGES> answer;

    answer.resize(N + 1,{0, 0, 0.0});

    for (int i = 0; i < N + 1; ++i) answer[i].num = i + 1;
    for (int i = 0; i < stages.size(); ++i)
    {
		if (stages[i] - 1 < N) answer[stages[i] - 1].cnt++;
    }

    int div = stages.size();
    for (int i = 0; i < N; ++i)
    {
        if (div > 0) answer[i].fail_percetage = (double)answer[i].cnt / (double)(div);
        div -= answer[i].cnt;
    }
    
    std::sort(answer.begin(), answer.end(),[](STAGES s1, STAGES s2)
    {
            if (s1.fail_percetage != s2.fail_percetage) return s1.fail_percetage > s2.fail_percetage;
            else return s1.num < s2.num;
    });
    
    std::vector<int> result;
    for (int i = 0; i < N; ++i)
    {
        result.push_back(answer[i].num);
    }

    return result;
}