#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    sort(people.begin(), people.end());
    
    int min = 0;
    for (int i = people.size() - 1; i >= min; --i)
    {
        if (people[i] + people[min] <= limit)
        {
            answer++;
            min++;
        }
        else answer++;
    }
	
    return answer;
}
