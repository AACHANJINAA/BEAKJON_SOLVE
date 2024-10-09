#include <iostream>
using namespace std;

int main() {
    int size, i, j;
    cin >> size;  // 테스트 케이스 개수 입력받음
    int* miss_pos = new int[size];   // 잘못된 문자의 위치를 저장할 배열
    string* str = new string[size];  // 문자열을 저장할 배열

    // 각 테스트 케이스의 잘못된 문자 위치와 문자열 입력
    for (i = 0; i < size; i++) {
        cin >> miss_pos[i] >> str[i];  // miss_pos는 잘못된 문자 위치, str은 문자열
    }

    // 각 테스트 케이스에 대해 처리
    for (i = 0; i < size; i++) {
        // 각 문자열의 문자들을 확인하면서 잘못된 위치의 문자는 출력하지 않음
        for (j = 0; j < str[i].length(); j++) {
            if (j != miss_pos[i] - 1) {  // 잘못된 문자 위치는 1-based index이므로 0-based로 맞추기 위해 -1
                cout << str[i][j];  // 잘못된 위치가 아닌 문자만 출력
            }
        }
        // 마지막 테스트 케이스가 아니라면 줄바꿈 추가
        if (i != size - 1)
            cout << endl;  // 각 케이스 출력 후 줄바꿈
    }

    // 동적으로 할당한 배열 해제
    delete[] miss_pos;
    delete[] str;

    return 0;
}