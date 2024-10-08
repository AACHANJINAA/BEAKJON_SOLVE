#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
using std::cout;

int main() {
    string password, text;   // password: ��� �Է��� ������ ���ڿ�, text: �� �پ� �Է¹��� ���ڿ�
    int i, last_change_num = 0;   // i: �ݺ��� �ε���, last_change_num: ���������� ������ �κ��� ���� ��ġ

    while (true) {
        getline(cin, text);   // �� �پ� �Է¹���

        if (text == "END")   // �Է��� "END"�̸� �Է� ����
            break;

        password += text + "\n";   // �Է¹��� ���ڿ��� �ٹٲ��� �߰��ϰ� password�� ����
    }

    // password ���� �� ���� ������ ����
    for (i = 0; i < password.length(); i++) {
        if (password[i] == '\n') {   // �ٹٲ� ���ڸ� ������ �� ���� ���ڿ��� ������
            if (last_change_num == 0) {
                // ù ��° ���� ������
                reverse(password.begin(), password.begin() + i);
            }
            else if (password[i] == password.length()) {
                // ������ ���� ������ (��� �ִ� ������ ���� ó���� ��)
                reverse(password.begin() + last_change_num, password.end());
            }
            else {
                // �߰� ���� ������
                reverse(password.begin() + last_change_num, password.begin() + i);
            }

            last_change_num = i + 1;   // ���� ���� ���� ��ġ�� ����
        }
    }

    // �������� �߰��� \n�� �����ϰ� ���
    for (i = 0; i < password.length() - 1; i++)
        cout << password[i];

    return 0;
}