#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    answer.reserve(commands.size());
    
    for(const auto& c : commands)
    {
        vector<int> temp = array;
        sort(temp.begin() + c[0] - 1, temp.begin() + c[1]);
        
        answer.emplace_back(temp[c[2] + c[0] - 2]);
    }
    
    
    return answer;
}