#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    sort(citations.begin(), citations.end());
    int n = citations.size();
    
    for (int i = 0; i < n; ++i) {
        int h = n - i; // i번째 논문 이상으로 인용된 논문의 개수
        
        // 해당 논문의 인용 횟수가 h번 이상이면 H-Index 조건 충족
        if (citations[i] >= h) {
            return h;
        }
    }
    
    return 0;
}