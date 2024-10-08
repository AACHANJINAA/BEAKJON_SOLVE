#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int size, i, j;
    cin >> size;   // 테스트 케이스의 개수를 입력받음

    // 2차원 배열을 동적으로 할당 (각 테스트 케이스마다 두 개의 정수 입력받기 위해)
    int** test_case = new int* [size];
    for (i = 0; i < size; i++) {
        test_case[i] = new int[2];   // 각 테스트 케이스마다 2개의 정수 배열 할당 (범위 시작과 끝)
    }

    // 각 테스트 케이스의 범위 입력
    for (i = 0; i < size; i++) {
        for (j = 0; j < 2; j++) {
            cin >> test_case[i][j];   // 테스트 케이스의 두 값을 입력받음 (범위 시작값, 끝값)
        }
    }

    string zero_str;   // 숫자를 문자열로 저장할 변수

    // 각 테스트 케이스에 대해 처리
    for (i = 0; i < size; i++) {
        // test_case[i][0]에서 test_case[i][1]까지의 숫자를 문자열로 변환하여 zero_str에 저장
        for (j = test_case[i][0]; j <= test_case[i][1]; j++) {
            zero_str += to_string(j);   // 숫자를 문자열로 변환해 zero_str에 추가
        }

        // zero_str에서 '0'의 개수를 세고 출력
        cout << count(zero_str.begin(), zero_str.end(), '0') << endl;

        // 다음 테스트 케이스를 위해 zero_str을 초기화
        zero_str = {};
    }

    // 동적으로 할당한 메모리 해제
    for (i = 0; i < size; i++)
        delete[] test_case[i];   // 각 테스트 케이스에 할당된 메모리 해제
    delete[] test_case;          // test_case 자체에 할당된 메모리 해제

    return 0;
}
