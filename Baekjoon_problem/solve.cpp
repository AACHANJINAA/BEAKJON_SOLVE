#include <iostream>
#include <algorithm>
using namespace std;

// �Ǻ���ġ ������ ����ϰ� ����� ����ϴ� �Լ�
void Fibonacci(int n);

int main() {
    int fibo_num;
    cin >> fibo_num; // �Ǻ���ġ �������� �� ��° ���� ������� �Է�

    Fibonacci(fibo_num); // �Է��� ���� �ش��ϴ� �Ǻ���ġ �� ��� �� ���

    return 0;
}

void Fibonacci(int n) {
    int n1 = 0, n2 = 1; // ù ��°�� �� ��° �Ǻ���ġ ��(0�� 1) �ʱ�ȭ
    // �Էµ� n ���� ���� �Ǻ���ġ ���� ���
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) { // ¦�� ��°�� ���� n1�� �� ����
            n1 = n1 + n2; // n1�� n1 + n2 ���� ���� ����
        }
        else if (i % 2 == 1) { // Ȧ�� ��°�� ���� n2�� �� ����
            n2 = n1 + n2; // n2�� n1 + n2 ���� ���� ����
        }
    }

    // ���������� ���� ���� ¦�� ��°�� �ش��ϸ� n1 ���
    if (n % 2 == 0)
        cout << n1 << endl;
    // ���������� ���� ���� Ȧ�� ��°�� �ش��ϸ� n2 ���
    else if (n % 2 == 1)
        cout << n2 << endl;
}