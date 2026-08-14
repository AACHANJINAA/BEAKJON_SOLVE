#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> days(progresses.size(), 0);
    int idx = progresses.size();
    
    for (int i = 0; i < idx; ++i)
    {
        int day = ceil(double(100 - progresses[i]) / speeds[i]);
        days[i] = day;
    }
    
    int max_day = days[0];
    int cnt = 1;
    for (int i = 1; i < days.size(); ++i)
    {
        if(days[i] <= max_day)
        {
            cnt++;  
        }
        else
        {
            answer.push_back(cnt);
            max_day = days[i];
            cnt = 1;
        }
    }
    
    answer.push_back(cnt);
    
    return answer;
}