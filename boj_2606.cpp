//<2606>번 : <바이러스>
#include <bits/stdc++.h>
using namespace std;

vector<int> adj[101];
bool visited[101] = {};
int cnt = 0;

void dfs(int v)
{
    cnt++;
    visited[v] = true;
    for(int u : adj[v])
    {
        if(!visited[u])
            dfs(u);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1);

    cout << cnt-1 << '\n';
}