#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    string answer = my_string;
    
    int overwrite_length = overwrite_string.length();
    
    for (int i = 0; i < overwrite_length; ++i)
    {
        answer[s + i] = overwrite_string[i]; 
    }
    
    return answer;
}