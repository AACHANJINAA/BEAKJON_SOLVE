#include <iostream>
#include <vector>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N; // M과 N을 입력 받음
    vector<int> decimal; // 소수를 저장할 벡터
    int i, j, result = 0;

    // M부터 N까지의 숫자에 대해 소수 판별
    for (i = M; i <= N; i++) {
        if (i < 2) // 2보다 작은 숫자는 소수가 아님
            continue;
        else {
            bool isPrime = true;
            // i가 소수인지 확인하기 위한 반복문 (2부터 sqrt(i)까지 검사)
            for (j = 2; j * j <= i; j++) {
                if (i % j == 0) { // 나누어 떨어지면 소수가 아님
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) // 소수라면 벡터에 추가
                decimal.push_back(i);
        }
    }

    // 벡터에 저장된 소수들의 합을 계산
    for (i = 0; i < decimal.size(); i++) {
        result += decimal[i];
    }

    // 소수가 없는 경우 -1 출력, 있는 경우 합과 최소 소수 출력
    if (decimal.empty())
        cout << -1;
    else
        cout << result << '\n' << decimal[0];

    return 0;
}
