#include <iostream>
#include <climits>  // INT_MIN 사용을 위해 추가
using namespace std;

int main() {
    string s;
    cin >> s;  // 문자열 입력

    int i, alphabet[26] = {};  // 알파벳 빈도수를 저장할 배열, 초기값 0으로 설정
    int max = INT_MIN, max_pos = 0;  // 최대 빈도수를 저장할 변수, INT_MIN으로 초기화
    char result;  // 최종 결과를 저장할 문자

    // 입력된 문자열을 모두 대문자로 변환 (소문자를 대문자로 통일)
    for (i = 0; i < s.length(); i++) {
        if (s[i] - 'a' < 0)  // 소문자인 경우 (소문자의 아스키 코드가 더 큼)
            s[i] += 'a' - 'A';  // 소문자에서 대문자로 변환
    }

    // 각 문자의 빈도수를 계산하여 배열에 저장 (알파벳 'a' ~ 'z'까지 처리)
    for (i = 0; i < s.length(); i++) {
        alphabet[s[i] - 'a']++;  // 'a'의 아스키 값을 기준으로 인덱스에 빈도수 추가
    }

    // 가장 많이 나온 알파벳을 찾기 위한 반복문
    for (i = 0; i < 26; i++) {
        if (max < alphabet[i]) {  // 현재 최대 빈도수보다 더 큰 빈도수를 찾으면
            max = alphabet[i];  // 최대 빈도수 갱신
            max_pos = i;  // 최대 빈도수를 가진 알파벳의 위치 저장
        }
    }

    // 빈도수가 가장 높은 알파벳의 대문자를 결과로 설정
    result = static_cast<char>(max_pos + 'A');  // 'a' 대신 'A'로 변환하여 결과에 저장

    // 동일한 빈도수를 가진 알파벳이 있는지 확인
    for (i = 0; i < 26; i++) {
        if (max == alphabet[i] && max_pos != i) {  // 동일한 빈도수의 알파벳이 다른 곳에 있으면
            result = '?';  // 결과를 '?'로 설정
        }
    }

    // 결과 출력
    cout << result;

    return 0;
}
