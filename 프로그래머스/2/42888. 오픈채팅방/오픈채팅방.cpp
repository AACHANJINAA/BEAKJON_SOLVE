#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <sstream>

/*
[ 오픈채팅방 (Map + Stringstream) 핵심 로직 요약 ]

1. 사전 준비: uid를 Key로, 닉네임을 Value로 저장할 map을 만듦.
2. 행동 기록: 출력 순서를 기억하기 위해 행동(Enter/Leave)과 uid를 묶어서 vector에 따로 저장함.
3. 1차 순회 (정보 갱신): stringstream으로 문자열을 자르고, Enter나 Change일 때만 map의 닉네임을 최신으로 덮어씀.
4. 2차 순회 (메시지 조립): 따로 저장해 둔 행동 기록을 순서대로 꺼내면서, map에 완성된 '최종 닉네임'을 붙여 문장 생성.
5. 결과 반환: 완성된 문장들을 answer 배열에 담아서 끝!
*/

using namespace std;

vector<string> solution(vector<string> record) {
    vector<string> answer;

    // uid, nickname
    map<string, string> uid_to_nickname;

    // command, uid
    vector<pair<string, string>> events;

    // 최신 닉네임 갱신 및 행동(Event) 기록하기
    for (const string& r : record) {
        stringstream ss(r);
        string command, uid, nickname;

        ss >> command >> uid; // 모든 명령어는 command와 uid를 무조건 가짐

        if (command == "Enter") {
            ss >> nickname; // Enter는 닉네임도 같이 오니까 뽑아줌
            uid_to_nickname[uid] = nickname; // 사전에 최신 닉네임 등록(또는 덮어쓰기)
            events.push_back({ "Enter", uid }); // 메시지를 만들어야 하니 장부에 기록!

        }
        else if (command == "Leave") {
            events.push_back({ "Leave", uid }); // 나간 것도 장부에 기록! (닉네임 변경은 없음)

        }
        else if (command == "Change") {
            ss >> nickname; // Change도 닉네임이 같이 옴
            uid_to_nickname[uid] = nickname; // 닉네임만 최신으로 덮어쓰기 (장부 기록 X)
        }
    }

    // 2차 순회: 장부(events)를 보며 최종 메시지 조립하기
    for (const auto& event : events) {
        string command = event.first;
        string uid = event.second;

        // 사전(map)에서 이 uid가 가진 '가장 마지막(최신) 닉네임'을 꺼내옴!
        string final_nickname = uid_to_nickname[uid];

        if (command == "Enter") {
            answer.push_back(final_nickname + "님이 들어왔습니다.");
        }
        else if (command == "Leave") {
            answer.push_back(final_nickname + "님이 나갔습니다.");
        }
    }

    return answer;
}