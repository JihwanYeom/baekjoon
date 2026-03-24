//<1967>번 : <트리의 지름>
#include <iostream>
#include <vector>
#include <queue>

#define INF 1000000000

using namespace std;

vector<int> p(100001, 0);
vector<vector<pair<int, int>>> adj(100001);
int n;

pair<int, int> bfs(int s) {
    queue<int> q;
    vector<int> d(100001, INF);

    q.push(s);
    d[s] = 0;
    while(!q.empty()) {
        int u = q.front();
        q.pop();
        for(auto e : adj[u]) {
            int v = e.first;
            int w = e.second;
            if(d[v] != INF) continue;
            d[v] = d[u] + w;
            q.push(v);
        }
    }

    int m = 0, mi = 0;
    for(int i = 1; i <= n; i++) {
        if(m < d[i]) {
            m = d[i];
            mi = i;
        }
    }

    return {m, mi};
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    if(n == 1) {
        cout << 0 << '\n';
        return 0;
    }
    int a, b, c;
    for(int i = 0; i < n-1; i++) {
        cin >> a >> b >> c;
        adj[a].push_back({b, c});
        adj[b].push_back({a, c});
    }

    int k = bfs(1).second;
    int r = bfs(k).first;
    cout << r << '\n';

    return 0;
}