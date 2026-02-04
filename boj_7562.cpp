//<7562>번 : <나이트의 이동>
#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int board[300][300] = {};
bool visited[300][300] = {};
int dy[8] = {2, 2, -2, -2, 1, 1, -1, -1};
int dx[8] = {1, -1, 1, -1, 2, -2, 2, -2};
queue<pair<int,int>> q;


int t, n, y1, x1, y2, x2;

void init()
{
    memset(board, 0, sizeof(int)*300*300);
    memset(visited, 0, sizeof(bool)*300*300);
    while(!q.empty()) q.pop();
}

void bfs()
{
    init();
    visited[y1][x1] = true;
    q.push({y1, x1});

    while(!q.empty())
    {
        pair<int, int> cur = q.front();
        q.pop();
        int y = cur.first;
        int x = cur.second;

        for(int i = 0; i < 8; i++)
        {
            if(x+dx[i] < 0 || x + dx[i] > n-1 ||
               y+dy[i] < 0 || y + dy[i] > n-1) continue;
            
            if(!visited[y+dy[i]][x+dx[i]])
            {
                visited[y+dy[i]][x+dx[i]] = true;
                board[y+dy[i]][x+dx[i]] = board[y][x] + 1;
                q.push({y+dy[i], x+dx[i]});
            }
        }
        if(visited[y2][x2]) break;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> n >> y1 >> x1 >> y2 >> x2;
        bfs();
        cout << board[y2][x2] << '\n';
    }

    return 0;
}