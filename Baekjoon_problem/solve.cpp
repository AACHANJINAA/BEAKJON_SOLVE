#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
using std::cout;

int main() {
    string password, text;   // password: 모든 입력을 저장할 문자열, text: 한 줄씩 입력받을 문자열
    int i, last_change_num = 0;   // i: 반복문 인덱스, last_change_num: 마지막으로 뒤집은 부분의 시작 위치

    while (true) {
        getline(cin, text);   // 한 줄씩 입력받음

        if (text == "END")   // 입력이 "END"이면 입력 종료
            break;

        password += text + "\n";   // 입력받은 문자열에 줄바꿈을 추가하고 password에 저장
    }

    // password 내의 각 줄을 뒤집는 로직
    for (i = 0; i < password.length(); i++) {
        if (password[i] == '\n') {   // 줄바꿈 문자를 만나면 그 앞의 문자열을 뒤집음
            if (last_change_num == 0) {
                // 첫 번째 줄을 뒤집음
                reverse(password.begin(), password.begin() + i);
            }
            else if (password[i] == password.length()) {
                // 마지막 줄을 뒤집음 (비어 있는 마지막 줄을 처리할 때)
                reverse(password.begin() + last_change_num, password.end());
            }
            else {
                // 중간 줄을 뒤집음
                reverse(password.begin() + last_change_num, password.begin() + i);
            }

            last_change_num = i + 1;   // 다음 줄의 시작 위치를 저장
        }
    }

    // 마지막에 추가된 \n을 제거하고 출력
    for (i = 0; i < password.length() - 1; i++)
        cout << password[i];

    return 0;
}