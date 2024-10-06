#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int kind_of_coin, price_sum; // ���� ������ ������ ��ǥ �ݾ��� ������ ����
    cin >> kind_of_coin; // ���� ���� �Է�
    int* coin_num = new int[kind_of_coin]; // ���� ������ŭ �迭 ���� �Ҵ�
    cin >> price_sum; // ��ǥ �ݾ� �Է�

    // �� ������ ��ġ�� �Է¹���
    for (int i = 0; i < kind_of_coin; i++)
        cin >> coin_num[i];

    int idx = kind_of_coin - 1, cnt = 0; // ���� ū �������� ����� ���̹Ƿ� �ε����� ���������� ����, ���� ������ �� cnt �ʱ�ȭ

    // �������� �ݾ��� ����� ���� ����
    while (idx > -1) { // ������ ������ ���� �ִ� ���� �ݺ�
        if (price_sum - coin_num[idx] > -1) { // ���� ������ ����� �� �ִ��� Ȯ�� (price_sum���� ������ �� �� �ִ��� Ȯ��)
            price_sum -= coin_num[idx]; // �ش� ������ ����ϰ� �ݾ׿��� ������ ���� ��
            cnt++; // ����� ���� ������ ����
        }
        else {
            idx--; // ���� ������ ����� �� ���ٸ�, ���� ���� �������� �̵�
        }
    }

    // �ּ� ���� ���� ���
    cout << cnt << endl;

    return 0;
}
