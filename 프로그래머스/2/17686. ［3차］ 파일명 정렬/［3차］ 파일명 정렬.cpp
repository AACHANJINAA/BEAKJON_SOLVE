#include <string>
#include <vector>
#include <algorithm>
#include <cctype> 

/*
[ 파일명 정렬 (algorithm 파싱 + 커스텀 정렬) 핵심 로직 요약 ]

1. 데이터 보존: 정렬 후에도 훼손되지 않도록 구조체에 '원본', 'HEAD', 'NUMBER'를 한 번에 묶어서 저장!
2. 우아한 파싱: find_if와 isdigit을 써서 숫자의 시작점과 끝점(경계)을 찾아내어 문자열을 깔끔하게 자름.
3. 커스텀 정렬 (cmp): 대소문자 구분을 없애기 위해 HEAD를 전부 소문자로 바꿔 비교하고, 같으면 NUMBER 오름차순!
4. 순서 보장 (stable_sort): 조건이 완전히 똑같은 파일들은 '원래 입력 순서'를 지켜야 하므로 stable_sort 사용.
5. 결과 추출: 정렬이 완벽하게 끝난 구조체 배열에서 original(원본) 문자열만 쏙쏙 빼서 반환.
*/

using namespace std;

struct SORT_FILE {
    string original;
    string head;
    int num;
};

bool cmp(const SORT_FILE& a, const SORT_FILE& b) {
    string headA = "", headB = "";
    for (char c : a.head) headA += tolower(c);
    for (char c : b.head) headB += tolower(c);

    if (headA == headB) {
        return a.num < b.num;
    }

    return headA < headB;
}

vector<string> solution(vector<string> files) {
    vector<SORT_FILE> parsed_files;

    for (const string& f : files) {

        auto num_start = find_if(f.begin(), f.end(), ::isdigit);

        auto num_end = find_if_not(num_start, f.end(), ::isdigit);

        string head(f.begin(), num_start);
        string number(num_start, num_end);

        parsed_files.push_back({ f, head, stoi(number) });
    }

    stable_sort(parsed_files.begin(), parsed_files.end(), cmp);

    vector<string> answer;
    for (const auto& pf : parsed_files) {
        answer.push_back(pf.original);
    }

    return answer;
}