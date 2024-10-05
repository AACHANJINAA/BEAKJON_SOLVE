#include <iostream>
#include <algorithm>
using namespace std;

// 피보나치 수열을 계산하고 결과를 출력하는 함수
void Fibonacci(int n);

int main() {
    int fibo_num;
    cin >> fibo_num; // 피보나치 수열에서 몇 번째 값을 계산할지 입력

    Fibonacci(fibo_num); // 입력한 값에 해당하는 피보나치 수 계산 및 출력

    return 0;
}

void Fibonacci(int n) {
    int n1 = 0, n2 = 1; // 첫 번째와 두 번째 피보나치 수(0과 1) 초기화
    // 입력된 n 값에 따라 피보나치 수열 계산
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) { // 짝수 번째일 때는 n1에 값 갱신
            n1 = n1 + n2; // n1에 n1 + n2 값을 더해 갱신
        }
        else if (i % 2 == 1) { // 홀수 번째일 때는 n2에 값 갱신
            n2 = n1 + n2; // n2에 n1 + n2 값을 더해 갱신
        }
    }

    // 마지막으로 계산된 값이 짝수 번째에 해당하면 n1 출력
    if (n % 2 == 0)
        cout << n1 << endl;
    // 마지막으로 계산된 값이 홀수 번째에 해당하면 n2 출력
    else if (n % 2 == 1)
        cout << n2 << endl;
}