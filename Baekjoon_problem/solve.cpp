#include <iostream>
#include <string>
using namespace std;

int main() {
    string now_t, com_t;
    cin >> now_t >> com_t;  // 현재 시간과 목표 시간 입력
    int time[2]{};

    // 현재 시간과 목표 시간을 초 단위로 변환하여 저장
    time[0] = stoi(now_t.substr(0, 2)) * 3600 + stoi(now_t.substr(3, 2)) * 60 + stoi(now_t.substr(6, 2));
    time[1] = stoi(com_t.substr(0, 2)) * 3600 + stoi(com_t.substr(3, 2)) * 60 + stoi(com_t.substr(6, 2));

    // 목표 시간에서 현재 시간을 빼서 남은 초 계산
    int result_seconds = time[1] - time[0];
    if (result_seconds < 0)  // 목표 시간이 현재 시간보다 작으면 다음 날까지의 시간을 더함
        result_seconds += 24 * 3600;

    int clock, minute, seconds;

    // 남은 초를 시간, 분, 초로 변환
    if (result_seconds >= 3600) {
        clock = result_seconds / 3600;
        minute = (result_seconds % 3600) / 60;
        seconds = result_seconds % 60;
    }
    else if (result_seconds < 3600 && result_seconds >= 60) {
        clock = 0;
        minute = result_seconds / 60;
        seconds = result_seconds - (minute * 60);
    }
    else {  // 남은 시간이 1시간 미만일 때
        clock = 0;
        minute = 0;
        seconds = result_seconds;
    }

    string result{};

    // 시간 형식 맞춰서 문자열로 저장 (두 자리 수로 출력)
    if (clock >= 10) {
        result += to_string(clock) + ':';
    }
    else {
        result += '0' + to_string(clock) + ':';
    }

    if (minute >= 10) {
        result += to_string(minute) + ':';
    }
    else {
        result += '0' + to_string(minute) + ':';
    }

    if (seconds >= 10) {
        result += to_string(seconds);
    }
    else {
        result += '0' + to_string(seconds);
    }

    // 결과 출력
    cout << result;
}
