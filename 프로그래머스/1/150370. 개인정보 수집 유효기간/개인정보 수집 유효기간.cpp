#include <string>
#include <vector>

using namespace std;

int chagne_to_day(const string today)
{
	int year = stoi(today.substr(0, 4));
	int month = stoi(today.substr(5, 2));
	int day = stoi(today.substr(8, 2));

	return year * 28 * 12 + month * 28 + day;
}

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
	vector<int> answer;

	int to = chagne_to_day(today);

	vector<int> input;
	vector<int> time;

	for (int i = 0; i < privacies.size(); ++i)
	{
		input.push_back(chagne_to_day(privacies[i]));

		for (int j = 0; j < terms.size(); ++j)
		{
			if (terms[j][0] == privacies[i][11])
			{
				int expire_month = stoi(terms[j].substr(2));
				time.push_back(expire_month * 28);
				break;
			}
		}
	}

	for (int i = 0; i < privacies.size(); ++i)
	{
		if (input[i] + time[i] <= to)
		{
			answer.push_back(i + 1);
		}
	}

	return answer;
}