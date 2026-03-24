//<2468>번 : <안전 영역>
#include <iostream>
#include <queue>

using namespace std;

int h[100][100] = {};
vector<vector<bool>> visited(100, vector<bool>(100, false));
int dy[4] = {1, -1, 0, 0};
int dx[4] = {0, 0, -1, 1};
int n;

int bfs(int sy, int sx, int w) {
    if(visited[sy][sx] || h[sy][sx] <= w) return 0;
    queue<pair<int, int>> q;
    q.push({sy, sx});
    visited[sy][sx] = true;
    while(!q.empty()) {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++) {
            int ny = y + dy[i];
            int nx = x + dx[i];
        
            if(nx < 0 || nx > n-1 || ny < 0 || ny > n-1) continue;
            if(visited[ny][nx] || h[ny][nx] <= w) continue;
            visited[y][x] = true;
            q.push({ny, nx});
        }
    }
    return 1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> h[i][j];
        }
    }

    int max_cnt = 0;
    int cnt;
    for(int w = 0; w <= 100; w++) {
        cnt = 0;
        visited = vector(100, vector<bool>(100, false));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cnt += bfs(i, j, w);
            }
        }
        max_cnt = max(max_cnt, cnt);
    }
    cout << max_cnt << '\n';
    return 0;
}