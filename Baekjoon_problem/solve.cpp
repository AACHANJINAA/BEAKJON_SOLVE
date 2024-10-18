#include <iostream>
#include <string>
using namespace std;

int main() {
    string now_t, com_t;
    cin >> now_t >> com_t;  // ���� �ð��� ��ǥ �ð� �Է�
    int time[2]{};

    // ���� �ð��� ��ǥ �ð��� �� ������ ��ȯ�Ͽ� ����
    time[0] = stoi(now_t.substr(0, 2)) * 3600 + stoi(now_t.substr(3, 2)) * 60 + stoi(now_t.substr(6, 2));
    time[1] = stoi(com_t.substr(0, 2)) * 3600 + stoi(com_t.substr(3, 2)) * 60 + stoi(com_t.substr(6, 2));

    // ��ǥ �ð����� ���� �ð��� ���� ���� �� ���
    int result_seconds = time[1] - time[0];
    if (result_seconds < 0)  // ��ǥ �ð��� ���� �ð����� ������ ���� �������� �ð��� ����
        result_seconds += 24 * 3600;

    int clock, minute, seconds;

    // ���� �ʸ� �ð�, ��, �ʷ� ��ȯ
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
    else {  // ���� �ð��� 1�ð� �̸��� ��
        clock = 0;
        minute = 0;
        seconds = result_seconds;
    }

    string result{};

    // �ð� ���� ���缭 ���ڿ��� ���� (�� �ڸ� ���� ���)
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

    // ��� ���
    cout << result;
}
