#include <iostream>
using namespace std;

int main() {
    int int_num, result = 0;  // �Է¹��� ������ ������ �����(�հ�)�� �����ϴ� ����
    cin >> int_num;  // ������ ���� �Է�
    int* integer = new int[int_num];  // �Է¹��� ������ ������ ���� �迭 �Ҵ�

    // ������ �Է¹ް�, �Էµ� ���� 0�� ��� ���� ���� ã�� 0���� ����
    for (int i = 0; i < int_num; i++) {
        cin >> integer[i];  // ���� �Է�
        if (integer[i] == 0) {  // ���� �Էµ� ���� 0�̶��
            for (int j = i - 1; j > -1; j--) {  // ���� ������ �������� Ž��
                if (integer[j] != 0) {  // 0�� �ƴ� ���� ã����
                    integer[j] = 0;  // �� ���� 0���� ����
                    break;  // �ϳ��� ó���ϰ� �ݺ� ����
                }
            }
        }
    }

    // �迭�� ������ ��� ���Ͽ� ��� ���
    for (int k = 0; k < int_num; k++)
        result += integer[k];  // 0�� �ƴ� ������ �ջ�

    cout << result << endl;  // ��� ���

    // �������� �Ҵ��� �迭 �޸� ����
    delete[] integer;

    return 0;
}
