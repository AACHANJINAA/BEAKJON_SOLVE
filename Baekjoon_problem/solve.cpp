#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int size, i, j;
    cin >> size;   // �׽�Ʈ ���̽��� ������ �Է¹���

    // 2���� �迭�� �������� �Ҵ� (�� �׽�Ʈ ���̽����� �� ���� ���� �Է¹ޱ� ����)
    int** test_case = new int* [size];
    for (i = 0; i < size; i++) {
        test_case[i] = new int[2];   // �� �׽�Ʈ ���̽����� 2���� ���� �迭 �Ҵ� (���� ���۰� ��)
    }

    // �� �׽�Ʈ ���̽��� ���� �Է�
    for (i = 0; i < size; i++) {
        for (j = 0; j < 2; j++) {
            cin >> test_case[i][j];   // �׽�Ʈ ���̽��� �� ���� �Է¹��� (���� ���۰�, ����)
        }
    }

    string zero_str;   // ���ڸ� ���ڿ��� ������ ����

    // �� �׽�Ʈ ���̽��� ���� ó��
    for (i = 0; i < size; i++) {
        // test_case[i][0]���� test_case[i][1]������ ���ڸ� ���ڿ��� ��ȯ�Ͽ� zero_str�� ����
        for (j = test_case[i][0]; j <= test_case[i][1]; j++) {
            zero_str += to_string(j);   // ���ڸ� ���ڿ��� ��ȯ�� zero_str�� �߰�
        }

        // zero_str���� '0'�� ������ ���� ���
        cout << count(zero_str.begin(), zero_str.end(), '0') << endl;

        // ���� �׽�Ʈ ���̽��� ���� zero_str�� �ʱ�ȭ
        zero_str = {};
    }

    // �������� �Ҵ��� �޸� ����
    for (i = 0; i < size; i++)
        delete[] test_case[i];   // �� �׽�Ʈ ���̽��� �Ҵ�� �޸� ����
    delete[] test_case;          // test_case ��ü�� �Ҵ�� �޸� ����

    return 0;
}
