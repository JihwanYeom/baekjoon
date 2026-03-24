//<1916>번 : <최소비용 구하기>
#include <iostream>
#include <vector>
#include <queue>
#define INF 1000000000

using namespace std;

vector<pair<int, int>> adj[1001];
vector<int> dist(1001, INF);
priority_queue<
    pair<int, int>,
    vector<pair<int, int>>,
    greater<pair<int, int>>
> pq;

int n, m;

void dijkstra(int s) {
    dist[s] = 0;
    pq.push({0, s});

    while(!pq.empty()) {
        int w = pq.top().first;
        int v = pq.top().second;
        pq.pop();
        if(dist[v] < w) continue;
        
        for(auto e : adj[v]) {
            int nw = w + e.first;
            int nv = e.second;

            if(dist[nv] > nw) {
                dist[nv] = nw;
                pq.push({nw, nv});
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({w, v});
    }
    int s, e;
    cin >> s >> e;
    dijkstra(s);
    cout << dist[e];
    return 0;
}
