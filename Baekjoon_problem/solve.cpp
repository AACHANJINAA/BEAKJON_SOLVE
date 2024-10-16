#include <iostream>
using namespace std;

class STACK {
private:
    int t;
public:
    int data[10000]{};
    STACK() { t = -1; };
    void push(int x);
    int pop();
    int size();
    int empty();
    int top();
};

int main() {
    int size;
    cin >> size;
    STACK S;

    for (int i = 0; i < size; i++) {
        string command;
        cin >> command;
        if (command == "push") {
            int n;
            cin >> n;
            S.push(n);
        }
        else if (command == "pop") {
            cout << S.pop() << endl;
        }
        else if (command == "size") {
            cout << S.size() << endl;
        }
        else if (command == "empty") {
            cout << S.empty() << endl;
        }
        else if (command == "top") {
            cout << S.top() << endl;
        }
    }

    return 0;
}

void STACK::push(int x) {
    t++;
    data[t] = x;
}
int STACK::pop() {
    if (empty() == 1) {
        return -1;
    }
    else {
        return data[t--];
    }
}
int STACK::size() {
    return t + 1;
}
int STACK::empty() {
    if (t == -1) {
        return 1;
    }
    else {
        return 0;
    }
}
int STACK::top() {
    if (empty() == 1) {
        return -1;
    }
    else {
        return data[t];
    }
}