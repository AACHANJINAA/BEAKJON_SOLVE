#include <iostream>
using namespace std;

int main() {
    string s; // ���ڿ��� ������ ����
    int str_num[26]; // ���ĺ� 26���� ��ġ�� ������ �迭 (a~z)
    int i; // �ݺ����� ����� ����

    // �迭 �ʱ�ȭ: ��� ���ĺ��� ��ġ�� -1�� �ʱ�ȭ
    for (i = 0; i < 26; i++)
        str_num[i] = -1;

    // ���ڿ� �Է�
    cin >> s;

    // ���ڿ��� �� ���ڸ� ���������� Ž��
    for (i = 0; i < s.length(); i++) {
        int index = s[i] - 97; // ������ ASCII ������ 'a'�� ASCII ��(97)�� �����ν� ���ĺ��� ��ġ ���
        if (str_num[index] == -1) // �ش� ���ڰ� ó�� �������� ���� �� ��ġ�� ����
            str_num[index] = i;
    }

    // ��� ���: ���ĺ� ������� �� ������ ù ���� ��ġ�� ���
    for (i = 0; i < 26; i++)
        cout << str_num[i] << " ";

    return 0;
}
