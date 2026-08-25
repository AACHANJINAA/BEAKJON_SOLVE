#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> cmd) {
    vector<int> ans;
    for(const auto& c : cmd)
    {
        int begin = c[0] - 1;
        int end = c[1]; // end는 제외되서 정렬되기 때문
        int find = c[2] - 1;
        
        vector<int> temp_arr(arr);
        
        sort(temp_arr.begin() + begin, temp_arr.begin() + end);
        
        ans.push_back(temp_arr[begin + find]);
    }
    
    return ans;
}