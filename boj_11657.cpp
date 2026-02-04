//<11657>번 : <타임머신>
#include <bits/stdc++.h>
#define INF 100000000
using namespace std;

int n, m;
long long d[501];
vector<pair<pair<int,int>, int>> edges;

int bellmanFord()
{
    fill(d, d+n+1, INF);
    d[1] = 0;
    for(int i = 0; i < n-1; i++)
    {
        for(auto e : edges)
        {
            int u = e.first.first;
            int v = e.first.second;
            int w = e.second;

            if(d[u] == INF) continue;
            d[v] = min(d[v], d[u] + w);
        }
    }

    for(auto e : edges)
    {
        int u = e.first.first;
        int v = e.first.second;
        int w = e.second;

        if(d[u] == INF) continue;
        if(d[u] + w < d[v])
            return -1;
    }
    return 0;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edges.push_back({{a,b},c});
    }

    if(bellmanFord() == -1)
    {
        cout << -1 << '\n';
        return 0;
    }

    for(int i = 2; i <= n; i++)
    {
        if(d[i] == INF) cout << -1 << '\n';
        else cout << d[i] << '\n';
    }

    return 0;
}
