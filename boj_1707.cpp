//<1707>번 : <이분 그래프>
#include <bits/stdc++.h>
using namespace std;

vector<int> g[20001];
queue<int> q;
int visited[20001] = {};
bool isBipartite = true;
int k, n, m, cnt = 0;

void bfs(int s)
{

    q.push(s);
    visited[s] = 1;

    while(!q.empty())
    {
        int v = q.front();
        q.pop();
        for(auto u : g[v])
        {
            if(visited[u] == visited[v])
            {
                isBipartite = false;
                return;
            }
            if(!visited[u])
            {
                q.push(u);
                visited[u] = -visited[v];
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> k;
    for(int t = 0; t < k; t++)
    {
        cin >> n >> m;
        
        for(int i = 0; i < m; i++)
        {
            int u, v;
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }

        for(int i = 1; i <= n; i++)
        {
            if(visited[i] == 0) bfs(i);
        }
            
        
        if(isBipartite) cout << "YES\n";
        else cout << "NO\n";

        for(int i = 0; i <= n; i++) 
            g[i].clear();
        memset(visited, 0, 20001*sizeof(int));
        q = queue<int>();
        isBipartite = true;
    }

    return 0;
}