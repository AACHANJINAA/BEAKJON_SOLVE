#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <sstream>
#include <set>

using namespace std;

struct HUMAN
{
    string attack;
    string receive;
};

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;

    // 1. Key = 신고당한 사람, Value = 그 사람을 신고한 사람들의 목록(set(중복제거))
    map<string, set<string>> reported_by;

    // 2. 메일함 사전: Key = 유저 이름, Value = 받을 메일 개수
    map<string, int> mail_count;

    // 3. 신고 기록 파싱 (아주 잘하신 부분!)
    for (const string& r : report) {
        stringstream ss(r);
        string attacker, receiver;
        ss >> attacker >> receiver;

        // "receiver를 신고한 사람 목록에 attacker를 추가해라!"
        reported_by[receiver].insert(attacker);
    }

    // 4. 누가 정지 먹었는지 확인하고, 신고자들에게 메일 쏘기!
    for (const auto& item : reported_by) {
        if (item.second.size() >= k) {
            // 정지 시키면 신고자들에게 메일 보내기
            for (const string& attacker : item.second) {
                mail_count[attacker]++;
            }
        }
    }

    // 5. 정답 배열 만들기
    for (const string& id : id_list) {
        answer.push_back(mail_count[id]);
    }

    return answer;
}
