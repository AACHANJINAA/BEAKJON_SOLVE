#include <iostream>
using namespace std;

int main() {
    int size, i, j;
    cin >> size;  // �׽�Ʈ ���̽� ���� �Է¹���
    int* miss_pos = new int[size];   // �߸��� ������ ��ġ�� ������ �迭
    string* str = new string[size];  // ���ڿ��� ������ �迭

    // �� �׽�Ʈ ���̽��� �߸��� ���� ��ġ�� ���ڿ� �Է�
    for (i = 0; i < size; i++) {
        cin >> miss_pos[i] >> str[i];  // miss_pos�� �߸��� ���� ��ġ, str�� ���ڿ�
    }

    // �� �׽�Ʈ ���̽��� ���� ó��
    for (i = 0; i < size; i++) {
        // �� ���ڿ��� ���ڵ��� Ȯ���ϸ鼭 �߸��� ��ġ�� ���ڴ� ������� ����
        for (j = 0; j < str[i].length(); j++) {
            if (j != miss_pos[i] - 1) {  // �߸��� ���� ��ġ�� 1-based index�̹Ƿ� 0-based�� ���߱� ���� -1
                cout << str[i][j];  // �߸��� ��ġ�� �ƴ� ���ڸ� ���
            }
        }
        // ������ �׽�Ʈ ���̽��� �ƴ϶�� �ٹٲ� �߰�
        if (i != size - 1)
            cout << endl;  // �� ���̽� ��� �� �ٹٲ�
    }

    // �������� �Ҵ��� �迭 ����
    delete[] miss_pos;
    delete[] str;

    return 0;
}