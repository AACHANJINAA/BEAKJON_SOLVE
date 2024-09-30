#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[9];  // 9명의 난쟁이 키를 저장할 배열
    int sum = 0;  // 9명의 난쟁이 키의 합

    // 9명의 난쟁이 키 입력
    for (int i = 0; i < 9; i++) {
        cin >> a[i];
        sum += a[i];  // 전체 키의 합 계산
    }

    // 2명을 제외한 합이 100이 되는지 확인하는 이중 루프
    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 9; j++) {
            // 두 명을 제외한 나머지 7명의 합이 100인 경우
            if (sum - a[i] - a[j] == 100) {
                a[i] = a[j] = -1;  // 제외할 난쟁이들을 -1로 표시
                break;
            }
        }
        if (a[i] == -1) break;  // 두 명을 제외한 경우 루프 종료
    }

    // 나머지 7명의 난쟁이 키를 오름차순으로 정렬
    sort(a, a + 9);

    // -1이 아닌 값들만 출력 (즉, 나머지 7명의 난쟁이 키)
    for (int i = 2; i < 9; i++) {
        cout << a[i] << endl;
    }

    return 0;
}