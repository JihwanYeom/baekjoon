//<10026>번 : <적록색약>
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int dx[4] = {1, -1, 0 ,0};
int dy[4] = {0, 0, 1, -1};
char grid[100][100];
bool visited[100][100] = {};
int n;

int bfs(int sy, int sx) {
    if(visited[sy][sx]) {
        return 0;
    }
    queue<pair<int, int>> q;
    visited[sy][sx] = true;
    q.push({sy, sx});
    while(!q.empty()) {
        int x = q.front().second;
        int y = q.front().first;
        q.pop();
        for(int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx < 0 || nx > n-1 || 
                ny < 0 || ny > n-1) continue;
            if(visited[ny][nx] || 
               grid[ny][nx] != grid[sy][sx]) continue;
            
            visited[ny][nx] = true;
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
    string in;
    for(int i = 0; i < n; i++) {
        cin >> in;
        for(int j = 0; j < n; j++) {
            grid[i][j] = in[j];
        }
    }
    int cnt1 = 0;
    int cnt2 = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cnt1 += bfs(i, j);
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(grid[i][j] == 'G') {
                grid[i][j] = 'R';
            }
        }
    }

    fill(&visited[0][0], &visited[n][0], false);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cnt2 += bfs(i, j);
        }
    }
    cout << cnt1 << ' ' << cnt2 << '\n';
    return 0;
}
