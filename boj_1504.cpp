//<1504>번 : <특정한 최단 경로>
#include <bits/stdc++.h>
#define INF 2147483647

using namespace std;

priority_queue<pair<int,int>, vector<pair<int, int>>, greater<pair<int,int>>> pq;
vector<pair<int,int>> adj[801];
int d[801];

int N, E, a, b, c ,v1, v2;

void dij(int s)
{
    fill(d, d+801, INF);
    d[s] = 0;
    pq.push({0,s});
    while(!pq.empty())
    {
        int w1 = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if(w1 != d[u]) continue;
        
        for(pair<int,int> e : adj[u])
        {
            int w2 = e.first;
            int v = e.second;
            if(d[v] > d[u] + w2)
            {
                d[v] = d[u] + w2;
                pq.push({d[u] + w2, v});
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> E;
    for(int i = 0; i < E; i++)
    {
        cin >> a >> b >> c;
        adj[a].push_back({c,b});
        adj[b].push_back({c,a});
    }
    cin >> v1 >> v2;
    
    long long p[5];
    dij(v1);
    p[0] = d[1]; p[1] = d[v2]; p[2] = d[N];
    dij(v2); 
    p[3] = d[1]; p[4] = d[N];

    long long d1 = p[0] + p[1] + p[4];
    long long d2 = p[3] + p[1] + p[2];
    
    if(d1 >= INF && d2 >= INF)
    {
        cout << "-1\n";
    }else cout << min(d1, d2) << '\n';

    return 0;
}