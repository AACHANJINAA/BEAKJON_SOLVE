#include <iostream>
#include <string>
using namespace std;

int main() {
    int size;
    cin >> size;  // �׽�Ʈ ���̽� �� �Է�

    // �� �׽�Ʈ ���̽����� ����� �� ���� ���ڿ��� ������ �迭 ���� �Ҵ�
    string* str1 = new string[size];
    string* str2 = new string[size];

    // �� ���ڿ� �Է� ó��
    for (int i = 0; i < size; i++)
        cin >> str1[i] >> str2[i];  // �� �׽�Ʈ ���̽��� �� ���ڿ� �Է� ����

    // �Ÿ� ��� �� ���
    for (int i = 0; i < size; i++) {
        cout << "Distances: ";  // ������ ��� ���� (�������� �䱸�ϴ� ���)

        for (int j = 0; j < str1[i].length(); j++) {
            // �� ���ڿ� ���� ���� ��� (���ĺ� �� ���̸� ���)
            int diff = str2[i][j] - str1[i][j];

            // ���ĺ� ��ȯ ó�� (������ ��� 26�� ���� ��ȯ)
            if (diff < 0)
                diff += 26;

            // ��� ���
            cout << diff << " ";
        }
        cout << endl;  // �� �׽�Ʈ ���̽��� ���� �� �� �ٲ�
    }

    // �������� �Ҵ��� �޸� ����
    delete[] str1;
    delete[] str2;

    return 0;
}
