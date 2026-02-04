//<1697>번 : <숨바꼭질>
#include <bits/stdc++.h>
using namespace std;

bool visited[100001];
int sec[100001] = {};
queue<int> q;
int n, k;

void bfs()
{
    q.push(n);
    visited[n] = true;
    while(!q.empty())
    {
        int v = q.front();
        q.pop();
        if(v < 100000 && !visited[v+1])
        {
            visited[v+1] = true;
            sec[v+1] = sec[v]+1;
            q.push(v+1);
        }
        if(v > 0 && !visited[v-1])
        {
            visited[v-1] = true;
            sec[v-1] = sec[v]+1;
            q.push(v-1);
        }
        if(v < 50001 && !visited[v*2])
        {
            visited[v*2] = true;
            sec[v*2] = sec[v]+1;
            q.push(v*2);
        }

        if(visited[k]) break;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> k;
    bfs();
    cout << sec[k] << '\n';

    return 0;
}