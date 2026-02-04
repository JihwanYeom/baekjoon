//<16928>번 : <뱀과 사다리 게임>
#include <bits/stdc++.h>
using namespace std;

int ls[101];
int board[101] = {};
int visited[101] = {};
queue<int> q;

void bfs()
{
    q.push(1);
    visited[1] = true;
    while(!q.empty())
    {
        int v = q.front();
        q.pop();

        for(int i = 1; i <= 6; i++)
        {
            int u = v + i;
            u = ls[u];
            if(u > 100) continue;
            if(!visited[u])
            {
                visited[u] = true;
                board[u] = board[v]+1;
                q.push(u);
            }
        }
        if(visited[100]) break;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, a, b;
    cin >> n >> m;
    for(int i = 0; i < 101; i++)
        ls[i] = i;

    for(int i = 0; i < n; i++)
    {
        cin >> a >> b;
        ls[a] = b;
    }

    for(int i = 0; i < m; i++)
    {
        cin >> a >> b;
        ls[a] = b;
    }

    bfs();
    cout << board[100] << '\n';

    return 0;
}