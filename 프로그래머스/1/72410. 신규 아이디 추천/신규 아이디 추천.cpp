#include <string>
#include <cctype>

using namespace std;

string solution(string new_id) {
	string answer = "";

	for (int i = 0; i < new_id.length(); ++i)
	{
		char c = new_id[i];
		if (c == '_' || c == '-') answer += c;
		else if (c >= '0' && c <= '9') answer += c;
		else if (c == '.')
		{
			if (!answer.empty() && answer.back() == '.') continue;
			else answer += c;
		}
		else if (c >= 'A' && c <= 'Z') answer += tolower(c);
		else if (c >= 'a' && c <= 'z') answer += c;
	}

	if (!answer.empty() && answer.front() == '.') answer.erase(answer.begin());
	if (!answer.empty() && answer.back() == '.') answer.pop_back();
    
	if (answer.empty()) answer = "a";
    
	if (answer.length() > 15) answer = answer.substr(0, 15);
	if (answer.back() == '.') answer.pop_back();
	if (answer.length() < 3) {
		char c = answer.back();
		while (answer.length() < 3)
			answer += c;
	}
	return answer;
}