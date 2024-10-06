#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int kind_of_coin, price_sum; // 동전 종류의 개수와 목표 금액을 저장할 변수
    cin >> kind_of_coin; // 동전 종류 입력
    int* coin_num = new int[kind_of_coin]; // 동전 종류만큼 배열 동적 할당
    cin >> price_sum; // 목표 금액 입력

    // 각 동전의 가치를 입력받음
    for (int i = 0; i < kind_of_coin; i++)
        cin >> coin_num[i];

    int idx = kind_of_coin - 1, cnt = 0; // 가장 큰 동전부터 사용할 것이므로 인덱스를 마지막으로 설정, 동전 개수를 셀 cnt 초기화

    // 동전으로 금액을 만들기 위한 루프
    while (idx > -1) { // 동전의 종류가 남아 있는 동안 반복
        if (price_sum - coin_num[idx] > -1) { // 현재 동전을 사용할 수 있는지 확인 (price_sum에서 동전을 뺄 수 있는지 확인)
            price_sum -= coin_num[idx]; // 해당 동전을 사용하고 금액에서 동전의 값을 뺌
            cnt++; // 사용한 동전 개수를 증가
        }
        else {
            idx--; // 현재 동전을 사용할 수 없다면, 다음 작은 동전으로 이동
        }
    }

    // 최소 동전 개수 출력
    cout << cnt << endl;

    return 0;
}
