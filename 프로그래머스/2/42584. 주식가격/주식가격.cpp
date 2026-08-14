#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
    int idx = prices.size();
    
    for(int i = 0; i < idx; ++i)
    {
        int n = 0;
        for (int j = i + 1; j < idx; ++j)
        {
            n++;
            if(prices[i] > prices[j]) break;
        }
        answer.push_back(n);
    }
    
  
    return answer;
}