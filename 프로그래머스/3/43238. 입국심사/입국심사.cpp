#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(int n, vector<int> times) {
    long long answer = 0;
    
    sort(times.begin(), times.end());
    
    long long start = 1; 
    long long end = (long long)times.back() * n;
    
    while(start <= end)
    {
        long long mid = (start + end) / 2;
        long long total = 0; // mid 시간 동안 심사할 수 있는 총 인원
        
        for (int t : times) {
            total += mid / t;
        }
        
        if (total >= n) {
            answer = mid;       // 조건 충족 시 정답 후보 기록
            end = mid - 1;      // 더 적은 시간도 가능한지 왼쪽 범위 탐색
        } else {
            start = mid + 1;    // 시간이 부족하므로 오른쪽 범위 탐색
        }
    }
    
    return answer;
}