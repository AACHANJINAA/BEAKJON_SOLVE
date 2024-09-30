#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int size = 0;
    cin >> size;  // �迭�� �� ũ�� �Է�

    // �������� 2���� �迭 �Ҵ� (ũ��: size x 10)
    int** arr = new int* [size];  // ù ��° ������ ũ�⸦ �Է¹��� size�� ����
    int i, j;

    // �� �࿡ 10���� ���� ������ �迭 �Ҵ�
    for (i = 0; i < size; i++)
        arr[i] = new int[10];  // �� ���� 10���� ���� ����

    // �迭�� �� �Է� (ũ��: size x 10)
    for (i = 0; i < size; i++)
        for (j = 0; j < 10; j++)
            cin >> arr[i][j];  // �� ��ҿ� ���� �Է�

    // �� ���� ������������ ����
    for (i = 0; i < size; i++)
        sort(arr[i], arr[i] + 10);  // �� ���� ���� ����

    // �� ���� 7��° ���� ��� (0-based �ε����̹Ƿ� arr[i][7]�� 8��° ��)
    for (i = 0; i < size; i++)
        cout << arr[i][7] << endl;  // �� ���� 7��° ���� ���

    // ���� �迭 �޸� ���� (�� �࿡ �Ҵ�� �޸� ����)
    for (i = 0; i < size; i++)
        delete[] arr[i];  // �� ���� �޸� ����
    delete[] arr;  // ù ��° ������ �޸� ����

    return 0;
}
