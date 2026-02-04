//<1766>번 : <문제집>
#include <bits/stdc++.h>
using namespace std;

vector<int> adj[32001];
vector<int> order;
priority_queue<int, vector<int>, greater<int>> q;
int deg[32001] = {};
int n, m;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        int v, u;
        cin >> v >> u;
        adj[v].push_back(u);
        deg[u]++;
    }

    for(int i = 1; i <= n; i++)
    {
        if(deg[i] == 0)
            q.push(i);
    }
    while(!q.empty())
    {
        int v = q.top();
        order.push_back(v);
        q.pop();
        for(int u : adj[v])
        {
            deg[u]--;
            if(deg[u] == 0)
                q.push(u);
        }
    }
    
    for(int e : order)
        cout << e << ' ';
    cout << '\n';

    return 0;
}