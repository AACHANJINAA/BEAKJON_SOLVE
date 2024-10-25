

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int cnt = 0; // 큐의 요소 개수를 관리하는 전역 변수

// 큐의 뒤에 요소를 추가하는 함수
void push(vector<int>& data, int x) {
    data.push_back(x); // 큐의 끝에 x를 추가
    cnt++; // 요소 개수 증가
}

// 큐의 앞에서 요소를 제거하고 출력하는 함수
void pop(vector<int>& data) {
    if (!data.empty()) { // 큐가 비어있지 않다면
        cout << data[0] << endl; // 큐의 앞 요소 출력
        data.erase(data.begin()); // 큐의 앞 요소 제거
        cnt--; // 요소 개수 감소
    }
    else { // 큐가 비어있다면
        cout << -1 << endl; // -1 출력
    }
}

int main() {
    int tc; // 명령의 개수를 저장할 변수
    cin >> tc;
    vector<string> input(tc); // 명령어들을 저장할 벡터
    vector<int> data; // 큐를 나타내는 벡터
    int i;

    // 명령어 입력 받기
    for (i = 0; i < tc; i++) {
        cin >> input[i];
        if (input[i] == "push") { // push 명령어인 경우
            int x;
            cin >> x;
            push(data, x); // 큐에 요소 추가
        }
        else if (input[i] == "pop") { // pop 명령어인 경우
            pop(data); // 큐에서 요소 제거
        }
        else if (input[i] == "size") { // size 명령어인 경우
            cout << data.size() << endl; // 큐의 현재 크기 출력
        }
        else if (input[i] == "empty") { // empty 명령어인 경우
            if (data.empty()) { // 큐가 비어있다면
                cout << 1 << endl; // 1 출력
            }
            else { // 큐가 비어있지 않다면
                cout << 0 << endl; // 0 출력
            }
        }asd
        else if (input[i] == "front") { // front 명령어인 경우
            if (!data.empty()) { // 큐가 비어있지 않다면
                cout << data.front() << endl; // 큐의 앞 요소 출력
            }
            else { // 큐가 비어있다면
                cout << -1 << endl; // -1 출력
            }
        }
        else if (input[i] == "back") { // back 명령어인 경우
            if (!data.empty()) { // 큐가 비어있지 않다면
                cout << data.back() << endl; // 큐의 뒤 요소 출력
            }
            else { // 큐가 비어있다면
                cout << -1 << endl; // -1 출력
            }
        }
    }

    return 0;
}
