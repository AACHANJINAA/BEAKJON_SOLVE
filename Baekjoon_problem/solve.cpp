

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int cnt = 0; // ť�� ��� ������ �����ϴ� ���� ����

// ť�� �ڿ� ��Ҹ� �߰��ϴ� �Լ�
void push(vector<int>& data, int x) {
    data.push_back(x); // ť�� ���� x�� �߰�
    cnt++; // ��� ���� ����
}

// ť�� �տ��� ��Ҹ� �����ϰ� ����ϴ� �Լ�
void pop(vector<int>& data) {
    if (!data.empty()) { // ť�� ������� �ʴٸ�
        cout << data[0] << endl; // ť�� �� ��� ���
        data.erase(data.begin()); // ť�� �� ��� ����
        cnt--; // ��� ���� ����
    }
    else { // ť�� ����ִٸ�
        cout << -1 << endl; // -1 ���
    }
}

int main() {
    int tc; // ����� ������ ������ ����
    cin >> tc;
    vector<string> input(tc); // ��ɾ���� ������ ����
    vector<int> data; // ť�� ��Ÿ���� ����
    int i;

    // ��ɾ� �Է� �ޱ�
    for (i = 0; i < tc; i++) {
        cin >> input[i];
        if (input[i] == "push") { // push ��ɾ��� ���
            int x;
            cin >> x;
            push(data, x); // ť�� ��� �߰�
        }
        else if (input[i] == "pop") { // pop ��ɾ��� ���
            pop(data); // ť���� ��� ����
        }
        else if (input[i] == "size") { // size ��ɾ��� ���
            cout << data.size() << endl; // ť�� ���� ũ�� ���
        }
        else if (input[i] == "empty") { // empty ��ɾ��� ���
            if (data.empty()) { // ť�� ����ִٸ�
                cout << 1 << endl; // 1 ���
            }
            else { // ť�� ������� �ʴٸ�
                cout << 0 << endl; // 0 ���
            }
        }asd
        else if (input[i] == "front") { // front ��ɾ��� ���
            if (!data.empty()) { // ť�� ������� �ʴٸ�
                cout << data.front() << endl; // ť�� �� ��� ���
            }
            else { // ť�� ����ִٸ�
                cout << -1 << endl; // -1 ���
            }
        }
        else if (input[i] == "back") { // back ��ɾ��� ���
            if (!data.empty()) { // ť�� ������� �ʴٸ�
                cout << data.back() << endl; // ť�� �� ��� ���
            }
            else { // ť�� ����ִٸ�
                cout << -1 << endl; // -1 ���
            }
        }
    }

    return 0;
}
