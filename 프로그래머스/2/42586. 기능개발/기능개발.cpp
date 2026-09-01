#include <string>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> p, vector<int> speeds) {
    vector<int> days;
    for (int i = 0; i < p.size(); ++i)
    {
        int value = ceil((float(100 - p[i]) / speeds[i]));
        days.push_back(value);
    }
    
    vector<int> count;
    int max_day = days[0];
    int cnt = 1;
    
    for (int i = 1; i < days.size(); ++i)
    {
        if (max_day >= days[i]) cnt++;
        else
        {
            count.push_back(cnt);
            max_day = days[i];
            cnt = 1;
        }
    }
    
    count.push_back(cnt);
    
    for(const auto& day : days) cout << day << '\n';
    
    return count;
}