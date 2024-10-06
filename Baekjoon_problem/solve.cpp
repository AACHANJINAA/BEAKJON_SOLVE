#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s; // 입력받은 문자열

    cout << s[0]; // 첫 번째 글자는 바로 출력 (약어의 첫 글자)

    // 두 번째 글자부터 끝까지 반복하면서 '-' 다음 글자 출력
    for (int i = 1; i < s.length(); i++) {
        if (s[i - 1] == '-') { // 이전 문자가 '-'이면 현재 문자가 약어의 첫 글자
            cout << s[i];
        }
    }

    cout << endl; // 결과 출력 후 줄 바꿈
    return 0;
}