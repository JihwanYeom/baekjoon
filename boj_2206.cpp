//<2206>번 : <벽 부수고 이동하기>
#include <bits/stdc++.h>
using namespace std;

int n, m;
int mat[1000][1000] = {};
int visited[1000][1000][2] = {};
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
queue<pair<pair<int,int>, int>> q;

void bfs()
{
    q.push({{0,0},0});
    visited[0][0][0] = 1;

    while(!q.empty())
    {
        int x = q.front().first.first;
        int y = q.front().first.second;
        int broke = q.front().second;
        q.pop();
        
        for(int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx < 0 || nx > m-1 || 
               ny < 0 || ny > n-1) continue;

            if(broke == 0)
            {
                if(visited[ny][nx][0] == 0 && mat[ny][nx] == 0)
                {
                    visited[ny][nx][0] = visited[y][x][0] + 1;
                    q.push({{nx,ny},0});
                }
                if(visited[ny][nx][1] == 0 && mat[ny][nx] == 1)
                {
                    visited[ny][nx][1] = visited[y][x][0] + 1;
                    q.push({{nx,ny},1});
                }
            }
            if(broke == 1)
            {
                if(visited[ny][nx][1] == 0 && mat[ny][nx] == 0)
                {
                    visited[ny][nx][1] = visited[y][x][1] + 1;
                    q.push({{nx,ny},1});
                }
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    string in;
    for(int i = 0; i < n; i++)
    {
        cin >> in;
        for(int j = 0; j < m; j++)
            mat[i][j] = in[j]-'0';
    }

    bfs();

    int result;
    if(visited[n-1][m-1][0] == 0 && visited[n-1][m-1][1] == 0)
        result = -1;
    else if(visited[n-1][m-1][0] == 0)
        result = visited[n-1][m-1][1];
    else if(visited[n-1][m-1][1] == 0)
        result = visited[n-1][m-1][0];
    else
        result = min(visited[n-1][m-1][0], visited[n-1][m-1][1]);

    cout << result << '\n';
    return 0;
}