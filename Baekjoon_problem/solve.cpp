#include <iostream>
using namespace std;

int main() {
    int Tast_Case;
    cin >> Tast_Case;  // 테스트 케이스 수 입력
    int* cnt = new int[Tast_Case] {};  // 각 테스트 케이스에서 중복된 좌석 수를 저장할 배열
    int i, j, k;

    for (i = 0; i < Tast_Case; i++) {
        int player, seat;
        cin >> player >> seat;  // 각 테스트 케이스에서 플레이어 수와 좌석 수 입력
        int* pos = new int[player];  // 각 플레이어가 앉을 좌석 번호를 저장할 배열

        // 플레이어가 선택한 좌석 번호 입력
        for (j = 0; j < player; j++)
            cin >> pos[j];

        // 좌석 번호 중복 검사
        for (j = 0; j < player; j++) {
            for (k = j + 1; k < player; k++) {
                // 중복된 좌석 발견 시
                if (pos[j] == pos[k] && pos[j] != 0) {
                    pos[j] = 0;  // 중복된 좌석 번호를 0으로 설정하여 처리
                    cnt[i]++;  // 해당 테스트 케이스에서 중복된 좌석 카운트를 증가
                }
            }
        }

        delete[] pos;  // 동적 배열 메모리 해제
    }

    // 각 테스트 케이스에서 중복된 좌석 수 출력
    for (i = 0; i < Tast_Case; i++)
        cout << cnt[i] << endl;

    delete[] cnt;  // 동적으로 할당된 cnt 배열 메모리 해제

    return 0;
}
