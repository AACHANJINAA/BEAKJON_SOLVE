#include <iostream>
using namespace std;

int main() {
    int Tast_Case;
    cin >> Tast_Case;  // �׽�Ʈ ���̽� �� �Է�
    int* cnt = new int[Tast_Case] {};  // �� �׽�Ʈ ���̽����� �ߺ��� �¼� ���� ������ �迭
    int i, j, k;

    for (i = 0; i < Tast_Case; i++) {
        int player, seat;
        cin >> player >> seat;  // �� �׽�Ʈ ���̽����� �÷��̾� ���� �¼� �� �Է�
        int* pos = new int[player];  // �� �÷��̾ ���� �¼� ��ȣ�� ������ �迭

        // �÷��̾ ������ �¼� ��ȣ �Է�
        for (j = 0; j < player; j++)
            cin >> pos[j];

        // �¼� ��ȣ �ߺ� �˻�
        for (j = 0; j < player; j++) {
            for (k = j + 1; k < player; k++) {
                // �ߺ��� �¼� �߰� ��
                if (pos[j] == pos[k] && pos[j] != 0) {
                    pos[j] = 0;  // �ߺ��� �¼� ��ȣ�� 0���� �����Ͽ� ó��
                    cnt[i]++;  // �ش� �׽�Ʈ ���̽����� �ߺ��� �¼� ī��Ʈ�� ����
                }
            }
        }

        delete[] pos;  // ���� �迭 �޸� ����
    }

    // �� �׽�Ʈ ���̽����� �ߺ��� �¼� �� ���
    for (i = 0; i < Tast_Case; i++)
        cout << cnt[i] << endl;

    delete[] cnt;  // �������� �Ҵ�� cnt �迭 �޸� ����

    return 0;
}
