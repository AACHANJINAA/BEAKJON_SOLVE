#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// map으로 다시 풀어보기

struct ALBUM
{
    string topic;
    int play_num;
    int num;
};

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    vector<ALBUM> album;
    vector<string> kindoftopic;
    for (int i = 0; i < genres.size(); ++i)
    {
        if (find(kindoftopic.begin(), kindoftopic.end(), genres[i]) 
            == kindoftopic.end())
            kindoftopic.push_back(genres[i]);
        album.push_back({ genres[i], plays[i], i});
    }


    sort(kindoftopic.begin(), kindoftopic.end(), [&](const string& a, const string& b)
        {
            int sum_a = 0, sum_b = 0;
            for (const auto& song : album)
            {
                if (song.topic == a) sum_a += song.play_num;
                if (song.topic == b) sum_b += song.play_num;
            }
            return sum_a > sum_b; 
        });

    sort(album.begin(), album.end(), [](const ALBUM& a1, const ALBUM& a2)
        {
            if (a1.play_num != a2.play_num) return a1.play_num > a2.play_num; 
    		return a1.num < a2.num; 
        });

    vector<int> cnt(kindoftopic.size(), 0);

    for (int i = 0; i < kindoftopic.size(); ++i)
    {
        for (int j = 0; j < album.size(); ++j) 
        {
            if (album[j].topic == kindoftopic[i] && cnt[i] < 2)
            {
                cnt[i]++;
                answer.push_back(album[j].num);
            }
        }
    }

    return answer;
}
