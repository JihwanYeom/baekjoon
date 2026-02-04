//<24479>번 : <알고리즘 수업 - 깊이 우선 탐색 2>
#include <bits/stdc++.h>
using namespace std;

int n, m, r;
vector<int> adj[100001];
int order[100001] = {};
int cnt = 0;

void dfs(int v)
{
    cnt++;
    order[v] = cnt;
    for(int a : adj[v])
    {
        if(order[a] == 0)
            dfs(a);
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
    dfs(r);
    for(int i = 1; i <= n; i++)
        cout << order[i] << '\n';

    return 0;
}
