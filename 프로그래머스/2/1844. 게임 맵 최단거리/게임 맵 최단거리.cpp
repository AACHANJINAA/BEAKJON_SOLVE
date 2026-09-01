#include<vector>
#include<queue>
using namespace std;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int solution(vector<vector<int> > maps)
{
    int m = maps.size();    // 행 크기
    int n = maps[0].size(); // 열 크기
    
    vector<vector<int>> dist(m, vector<int>(n, -1));
   
    queue<pair<int, int>> q;
    q.push({0, 0});
    dist[0][0] = 1; 
    
    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        // 목적지 체크: x는 m-1, y는 n-1이어야 함
        if(x == m - 1 && y == n - 1) {
            return dist[x][y];
        }
        
        for(int i = 0; i < 4; ++i) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            // 범위 체크: nx는 m 미만, ny는 n 미만
            if(nx >= 0 && nx < m && ny >= 0 && ny < n) {
                if(maps[nx][ny] == 1 && dist[nx][ny] == -1) {
                    dist[nx][ny] = dist[x][y] + 1;
                    q.push({nx, ny});
                }
            }
        }
    }
    return -1;
}