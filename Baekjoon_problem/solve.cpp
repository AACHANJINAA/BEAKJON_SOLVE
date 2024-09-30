#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int size = 0;
    cin >> size;  // 배열의 행 크기 입력

    // 동적으로 2차원 배열 할당 (크기: size x 10)
    int** arr = new int* [size];  // 첫 번째 차원의 크기를 입력받은 size로 설정
    int i, j;

    // 각 행에 10개의 열을 가지는 배열 할당
    for (i = 0; i < size; i++)
        arr[i] = new int[10];  // 각 행은 10개의 열을 가짐

    // 배열에 값 입력 (크기: size x 10)
    for (i = 0; i < size; i++)
        for (j = 0; j < 10; j++)
            cin >> arr[i][j];  // 각 요소에 값을 입력

    // 각 행을 오름차순으로 정렬
    for (i = 0; i < size; i++)
        sort(arr[i], arr[i] + 10);  // 각 행의 값을 정렬

    // 각 행의 7번째 값을 출력 (0-based 인덱스이므로 arr[i][7]은 8번째 값)
    for (i = 0; i < size; i++)
        cout << arr[i][7] << endl;  // 각 행의 7번째 값을 출력

    // 동적 배열 메모리 해제 (각 행에 할당된 메모리 해제)
    for (i = 0; i < size; i++)
        delete[] arr[i];  // 각 행의 메모리 해제
    delete[] arr;  // 첫 번째 차원의 메모리 해제

    return 0;
}
