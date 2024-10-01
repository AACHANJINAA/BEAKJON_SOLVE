#include <iostream>
using namespace std;

int main() {
    int int_num, result = 0;  // 입력받을 정수의 개수와 결과값(합계)을 저장하는 변수
    cin >> int_num;  // 정수의 개수 입력
    int* integer = new int[int_num];  // 입력받은 정수를 저장할 동적 배열 할당

    // 정수를 입력받고, 입력된 값이 0일 경우 이전 값을 찾아 0으로 만듦
    for (int i = 0; i < int_num; i++) {
        cin >> integer[i];  // 정수 입력
        if (integer[i] == 0) {  // 만약 입력된 값이 0이라면
            for (int j = i - 1; j > -1; j--) {  // 이전 값들을 역순으로 탐색
                if (integer[j] != 0) {  // 0이 아닌 값을 찾으면
                    integer[j] = 0;  // 그 값을 0으로 만듦
                    break;  // 하나만 처리하고 반복 종료
                }
            }
        }
    }

    // 배열의 값들을 모두 더하여 결과 계산
    for (int k = 0; k < int_num; k++)
        result += integer[k];  // 0이 아닌 값들을 합산

    cout << result << endl;  // 결과 출력

    // 동적으로 할당한 배열 메모리 해제
    delete[] integer;

    return 0;
}
