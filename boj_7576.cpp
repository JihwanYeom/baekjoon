//<7576>번 : <토마토>
#include <bits/stdc++.h>
using namespace std;

int box[1000][1000];
int visited[1000][1000];
queue<pair<int,int>> q;
int in, n, m, cnt;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void bfs()
{
    while(!q.empty())
    {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++)
        {
            if(x+dx[i] < 0 || x+dx[i] > m-1 ||
               y+dy[i] < 0 || y+dy[i] > n-1) continue;
            
            if(!visited[y+dy[i]][x+dx[i]])
            {
                q.push({y+dy[i], x+dx[i]});
                visited[y+dy[i]][x+dx[i]] = true;
                box[y+dy[i]][x+dx[i]] = box[y][x]+1;
            }
        }
    }
}

int getResult()
{
    int day = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(box[i][j] == 0) return -1;
            day = max(day, box[i][j]);
        }
    }
    return day-1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> m >> n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> box[i][j];
            if(box[i][j] == 1)
            {
                q.push({i,j});
                visited[i][j] = true;
            }
            if(box[i][j] == -1)
                visited[i][j] = true;
        }
    }
    bfs();
    cout << getResult() << '\n';

    return 0;
}