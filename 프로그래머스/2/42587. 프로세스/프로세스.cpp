#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int solution(vector<int> p, int location) {
    queue<pair<int,int>> q;
    
    // q in 2, 1, 3, 2
    for (int i = 0; i < p.size(); ++i)
    {
        q.push({i, p[i]});
    }
    
    
    int cnt = 0; 
    
    // loop 1 : 2 1 3 2
    // loop 2 : 1 3 2 2
    // loop 3 : 3 2 2 1
    // loop 4 : 2 2 1
    // ......
    // loop 7 : 1
    // loop 8 : 0
    while(!q.empty())
    {
        auto max_value = max_element(p.begin(), p.end());
        
        if(q.front().second < *max_value)
        {
            auto a = q.front();
            q.pop();
            q.push({a.first, a.second});
        }
        else
        {
            auto a = q.front();
            q.pop();
            p[a.first] = 0;
            cnt++;
            
            if (a.first == location) {
                return cnt;
            }
        }
    }
    
    return cnt;
}