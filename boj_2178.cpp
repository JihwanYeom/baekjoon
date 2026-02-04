//<2178>번 : <미로 탐색>
#include <bits/stdc++.h>
using namespace std;

int n, m, cnt = 0;
queue<pair<int,int>> q;

int maze[100][100];
bool visited[100][100] = {};
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

void bfs()
{
    q.push({0,0});
    visited[0][0] = true;

    cnt = 1;

    while(!q.empty())
    {
        pair<int, int> v = q.front();
        q.pop();
        int y = v.first;
        int x = v.second;

        if(y == n-1 && x == m-1)
            break;

        for(int i = 0; i < 4; i++)
        {
            if(y+dy[i] < 0 || y+dy[i] > n-1 || x+dx[i] < 0 || x+dx[i] > m-1)
                continue;
            if(!visited[y+dy[i]][x+dx[i]] && maze[y+dy[i]][x+dx[i]])
            {
                visited[y+dy[i]][x+dx[i]] = true;
                q.push({y+dy[i],x+dx[i]});
                maze[y+dy[i]][x+dx[i]] = maze[y][x]+1;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        string in;
        cin >> in;
        for(int j = 0; j < m; j++)
            maze[i][j] = in[j]-'0';
    }

    bfs();
    cout << maze[n-1][m-1] << '\n';

    return 0;
}