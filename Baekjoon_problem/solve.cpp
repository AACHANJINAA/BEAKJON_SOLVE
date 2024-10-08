#include <iostream>
#include <string>
using namespace std;

int main() {
    int size;
    cin >> size;  // 테스트 케이스 수 입력

    // 각 테스트 케이스에서 사용할 두 개의 문자열을 저장할 배열 동적 할당
    string* str1 = new string[size];
    string* str2 = new string[size];

    // 두 문자열 입력 처리
    for (int i = 0; i < size; i++)
        cin >> str1[i] >> str2[i];  // 각 테스트 케이스의 두 문자열 입력 받음

    // 거리 계산 및 출력
    for (int i = 0; i < size; i++) {
        cout << "Distances: ";  // 수정된 출력 형식 (문제에서 요구하는 대로)

        for (int j = 0; j < str1[i].length(); j++) {
            // 두 문자열 간의 차이 계산 (알파벳 간 차이를 계산)
            int diff = str2[i][j] - str1[i][j];

            // 알파벳 순환 처리 (음수일 경우 26을 더해 순환)
            if (diff < 0)
                diff += 26;

            // 결과 출력
            cout << diff << " ";
        }
        cout << endl;  // 각 테스트 케이스가 끝날 때 줄 바꿈
    }

    // 동적으로 할당한 메모리 해제
    delete[] str1;
    delete[] str2;

    return 0;
}
