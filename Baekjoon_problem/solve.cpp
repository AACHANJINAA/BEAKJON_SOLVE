#include <iostream>
#include <vector>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N; // M�� N�� �Է� ����
    vector<int> decimal; // �Ҽ��� ������ ����
    int i, j, result = 0;

    // M���� N������ ���ڿ� ���� �Ҽ� �Ǻ�
    for (i = M; i <= N; i++) {
        if (i < 2) // 2���� ���� ���ڴ� �Ҽ��� �ƴ�
            continue;
        else {
            bool isPrime = true;
            // i�� �Ҽ����� Ȯ���ϱ� ���� �ݺ��� (2���� sqrt(i)���� �˻�)
            for (j = 2; j * j <= i; j++) {
                if (i % j == 0) { // ������ �������� �Ҽ��� �ƴ�
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) // �Ҽ���� ���Ϳ� �߰�
                decimal.push_back(i);
        }
    }

    // ���Ϳ� ����� �Ҽ����� ���� ���
    for (i = 0; i < decimal.size(); i++) {
        result += decimal[i];
    }

    // �Ҽ��� ���� ��� -1 ���, �ִ� ��� �հ� �ּ� �Ҽ� ���
    if (decimal.empty())
        cout << -1;
    else
        cout << result << '\n' << decimal[0];

    return 0;
}
