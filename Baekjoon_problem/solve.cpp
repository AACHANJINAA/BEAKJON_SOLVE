#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s; // �Է¹��� ���ڿ�

    cout << s[0]; // ù ��° ���ڴ� �ٷ� ��� (����� ù ����)

    // �� ��° ���ں��� ������ �ݺ��ϸ鼭 '-' ���� ���� ���
    for (int i = 1; i < s.length(); i++) {
        if (s[i - 1] == '-') { // ���� ���ڰ� '-'�̸� ���� ���ڰ� ����� ù ����
            cout << s[i];
        }
    }

    cout << endl; // ��� ��� �� �� �ٲ�
    return 0;
}