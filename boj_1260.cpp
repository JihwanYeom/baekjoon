//<1260>번 : <DFS와 BFS>
#include<bits/stdc++.h>

using namespace std;

vector<int> adj[10001];
bool visited[1001] = {};
queue<int> q;

void dfs(int v)
{
    cout << v << ' ';
    visited[v] = true;
    for(int u : adj[v])
    {
        if(!visited[u]) dfs(u);
    }
}

void bfs(int v)
{
    visited[v] = true;
    q.push(v);

    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        cout << u << ' ';
        for(int w : adj[u])
        {
            if(!visited[w])
            {
                visited[w] = true;
                q.push(w);
            }
        }
    }

    cout << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, v;
    cin >> n >> m >> v;

    for(int i = 1; i <= m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i = 0; i <= n; i++)
        sort(adj[i].begin(), adj[i].end());

    dfs(v);
    cout << '\n';
    for(int i = 0; i <= n; i++)
        visited[i] = false;
    bfs(v);

    return 0;
}