#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    vector<string> str;
    int store_pos = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') { // 공백 처리
            string temp = s.substr(0, i); 
            reverse(temp.begin(), temp.end());
            str.push_back(temp + " "); 
            s.erase(0, i + 1); 
            i = -1; 
        }
        else if (s[i] == '<') { 
            if (i > 0) { 
                string temp = s.substr(0, i);
                reverse(temp.begin(), temp.end());
                str.push_back(temp);
                s.erase(0, i); 
                i = 0; 
            }

            int f = s.find('>', i);
            if (f != string::npos) {
                str.push_back(s.substr(0, f + 1));
                s.erase(0, f + 1);
                i = -1; 
            }
        }
    }

    if (!s.empty()) {
        reverse(s.begin(), s.end());
        str.push_back(s);
    }

    for (const auto& pr : str) {
        cout << pr;
    }

    return 0;
}
