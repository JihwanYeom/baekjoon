//<1753>번 : <최단경로>
#include <bits/stdc++.h>
using namespace std;

priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> pq;
int d[20001];
vector<pair<int, int>> adj[20001];
int V, E, K;

void dijkstra()
{
    fill(d, d+V+1, INT_MAX);
    pq.push({0, K});
    d[K] = 0;
    while(!pq.empty())
    {
        int u = pq.top().second;
        int w = pq.top().first;
        pq.pop();
        if(w != d[u]) continue;

        for(pair<int, int> e : adj[u])
        {
            if(d[e.first] > d[u] + e.second)
            {
                d[e.first] = d[u] + e.second;
                pq.push({d[u] + e.second, e.first});
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> V >> E >> K;
    for(int i = 0; i < E; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v,w});
    }
    dijkstra();
    for(int i = 1; i <= V; i++) 
    {
        if(d[i] == INT_MAX) cout << "INF\n";
        else cout << d[i] << '\n';
    }
    return 0;
}