#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
string solution(vector<int> numbers) {
    string answer = "";
    vector<string> str_nums;

    for (int num : numbers) {
        str_nums.push_back(to_string(num));
    }

    sort(str_nums.begin(), str_nums.end(), [](const string& a, const string& b) {
        // a와 b를 이어 붙여보고, 더 큰 쪽이 앞으로 오도록 내림차순 정렬
        return a + b > b + a;
        });

    for (const string& str : str_nums) {
        answer += str;
    }
    if (answer[0] == '0') {
        return "0";
    }


    return answer;
}