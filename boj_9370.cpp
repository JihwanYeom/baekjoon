//<9370>번 : <미확인 도착지>
#include <bits/stdc++.h>
#define INF 100000000

using namespace std;

vector<pair<int, int>> adj[2001];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
vector<int> result;
int d[2001] = {};
int ds[2001] = {};
int dg[2001] = {};
int dh[2001] = {};

int T, n, m, t, s, g, h, a, b, w, x;

void dijkstra(int st)
{
    fill(d, d+n+1, INF);
    d[st] = 0;
    pq.push({0,st});

    while(!pq.empty())
    {
        int u = pq.top().second;
        int du = pq.top().first;
        pq.pop();

        if(du != d[u]) continue;

        for(pair<int, int> e : adj[u])
        {
            int v = e.second;
            int w = e.first;
            if(d[v] > d[u] + w)
            {
                d[v] = d[u] + w;
                pq.push({d[v], v});
            }
        }

    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> T;
    while(T--)
    {
        cin >> n >> m >> t >> s >> g >> h;
        for(int i = 0; i < m; i++)
        {
            cin >> a >> b >> w;
            adj[a].push_back({w,b});
            adj[b].push_back({w,a});
        }

        dijkstra(s);
        for(int i = 1; i <= n; i++)
            ds[i] = d[i];

        dijkstra(g);
        for(int i = 1; i <= n; i++)
            dg[i] = d[i];

        dijkstra(h);
        for(int i = 1; i <= n; i++)
            dh[i] = d[i];

        for(int i = 0; i < t; i++)
        {
            int x;
            cin >> x;
            if(dg[s] + dg[h] + dh[x] == ds[x] ||
               dh[s] + dh[g] + dg[x] == ds[x])
                result.push_back(x);
        }

        sort(result.begin(), result.end());
        for(int r : result)
            cout << r << ' ';
        cout << '\n';

        for(int i = 0; i <= n; i++)
            adj[i].clear();
        result.clear();
    }

    return 0;
}