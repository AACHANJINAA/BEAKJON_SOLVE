#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    answer.resize(n);

    for (int i = 0; i < n; ++i)
    {
        int combined = arr1[i] | arr2[i];
        
        for (int j = n - 1; j >= 0; --j)
        {
            if ((combined >> j) & 1) answer[i] += '#';
            else answer[i] += ' ';
        }
    }

    return answer;
}