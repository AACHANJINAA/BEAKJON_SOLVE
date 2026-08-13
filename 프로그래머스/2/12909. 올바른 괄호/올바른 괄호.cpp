#include<string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = false;
    
    bool num = false;
    bool order = true;
    
    int cnt[2] = {0, 0};
    
    for (const auto& c : s)
    {
        if (c == '(') cnt[0]++;
        else cnt[1]++;
        
        if (cnt[1] > cnt[0]) order = false;
    }
    
    num = (cnt[0] == cnt[1]);

    
    answer = num && order;
    
    return answer;
}