//<24444>번 : <알고리즘 수업 - 너비 우선 탐색 2>
#include <bits/stdc++.h>
using namespace std;

int n, m, r;
vector<int> adj[100001];
int order[100001] = {};
queue<int> q;
int cnt = 1;

void bfs(int v)
{
    order[v] = cnt++;
    q.push(v);

    while(!q.empty())
    {
        int u = q.front(); q.pop();
        for (int a : adj[u])
        {
            if(order[a] == 0)
            {
                order[a] = cnt++;
                q.push(a);
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m >> r;
    for(int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i = 1; i <= n; i++)
        sort(adj[i].begin(), adj[i].end(), greater<>());
    bfs(r);
    for(int i = 1; i <= n; i++)
        cout << order[i] << '\n';

    return 0;
}
