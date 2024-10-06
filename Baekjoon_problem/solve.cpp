#include <iostream>
using namespace std;

int reverse_int(int r) {
    int result = 0;

    // 입력 숫자의 자릿수를 뒤집는 과정
    while (r > 0) {
        result = result * 10 + r % 10; // 가장 마지막 자릿수를 result에 추가
        r /= 10; // 마지막 자릿수를 제거
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