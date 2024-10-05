#include <iostream>
using namespace std;

int main() {
    string s; // 문자열을 저장할 변수
    int str_num[26]; // 알파벳 26개의 위치를 저장할 배열 (a~z)
    int i; // 반복문에 사용할 변수

    // 배열 초기화: 모든 알파벳의 위치를 -1로 초기화
    for (i = 0; i < 26; i++)
        str_num[i] = -1;

    // 문자열 입력
    cin >> s;

    // 문자열의 각 문자를 순차적으로 탐색
    for (i = 0; i < s.length(); i++) {
        int index = s[i] - 97; // 문자의 ASCII 값에서 'a'의 ASCII 값(97)을 뺌으로써 알파벳의 위치 계산
        if (str_num[index] == -1) // 해당 문자가 처음 등장했을 때만 그 위치를 저장
            str_num[index] = i;
    }

    // 결과 출력: 알파벳 순서대로 각 문자의 첫 등장 위치를 출력
    for (i = 0; i < 26; i++)
        cout << str_num[i] << " ";

    return 0;
}
