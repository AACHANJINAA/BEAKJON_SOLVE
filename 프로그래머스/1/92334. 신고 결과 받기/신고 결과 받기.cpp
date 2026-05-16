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
    map<string, set<string>> reported_by;
    map<string, int> mail_count;

    for (const string& r : report) {
        stringstream ss(r);
        string attacker, receiver;
        ss >> attacker >> receiver;

        reported_by[receiver].insert(attacker);
    }

    for (const auto& item : reported_by) {
        if (item.second.size() >= k) {
            for (const string& attacker : item.second) {
                mail_count[attacker]++;
            }
        }
    }

    for (const string& id : id_list) {
        answer.push_back(mail_count[id]);
    }

    return answer;
}
