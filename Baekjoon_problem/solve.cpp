#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int size; // 테스트 케이스의 개수
    cin >> size; // 테스트 케이스 수 입력

    int i, j; // 반복문용 변수
    // 2차원 배열 동적 할당: size개의 배열을 가짐, 각 배열은 7개의 정수를 담음
    int** t = new int* [size] {};
    // 각 테스트 케이스마다 짝수들의 합을 저장할 배열
    int* sum = new int[size] {};
    // 각 테스트 케이스마다 최소 짝수를 저장할 배열
    int* smallest_num = new int[size];

    // 각 테스트 케이스별로 7개의 정수를 저장할 배열 동적 할당
    for (i = 0; i < size; i++)
        t[i] = new int[7] {};

    // 각 테스트 케이스 입력받기
    for (i = 0; i < size; i++) {
        for (j = 0; j < 7; j++) {
            cin >> t[i][j]; // 각 테스트 케이스의 7개의 정수를 입력받음
        }
        sort(t[i], t[i] + 7, less<>()); // 입력받은 7개의 정수를 오름차순으로 정렬
        smallest_num[i] = 100; // 최소 짝수를 100으로 초기화 (최대값으로 설정)
    }

    // 각 테스트 케이스에 대해 짝수를 찾고 합산하며, 최소 짝수 찾기
    for (i = 0; i < size; i++) {
        for (j = 0; j < 7; j++) {
            if (t[i][j] % 2 == 0) { // 짝수인 경우
                if (smallest_num[i] == 100) // 아직 최소 짝수를 찾지 못했으면
                    smallest_num[i] = t[i][j]; // 첫 번째 짝수를 최소값으로 설정
                sum[i] += t[i][j]; // 짝수들의 합을 저장
            }
        }
    }

    // 결과 출력: 각 테스트 케이스마다 짝수들의 합과 최소 짝수 출력
    for (i = 0; i < size; i++)
        cout << sum[i] << ' ' << smallest_num[i] << endl;

    // 동적 할당된 메모리 해제
    for (i = 0; i < size; i++)
        delete[] t[i]; // 각 테스트 케이스에 해당하는 배열을 해제
    delete[] t; // 2차원 배열 해제
    delete[] sum; // 합계를 저장한 배열 해제
    delete[] smallest_num; // 최소 짝수를 저장한 배열 해제

    return 0;
}
