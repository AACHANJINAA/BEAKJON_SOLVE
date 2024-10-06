#include <iostream>
using namespace std;

int reverse_int(int r) {
    int result = 0;

    // �Է� ������ �ڸ����� ������ ����
    while (r > 0) {
        result = result * 10 + r % 10; // ���� ������ �ڸ����� result�� �߰�
        r /= 10; // ������ �ڸ����� ����
    }
    return result;
}

int main() {
    int n1, n2, rst;
    
    cin >> n1 >> n2;

    rst = reverse_int(n1) + reverse_int(n2);

    cout << reverse_int(rst) << endl;

    return 0;
}