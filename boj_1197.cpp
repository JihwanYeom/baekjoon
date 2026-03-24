//<1197>번 : <최소 스패닝 트리>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> p(10001, -1);
vector<pair<int, pair<int, int>>> edges;

int find(int x) {
    if(p[x] < 0) {
        return x;
    }
    return p[x] = find(p[x]);
}

bool uni(int a, int b) {
    if(find(a) == find(b)) {
        return false;
    }
    int u = find(a);
    int v = find(b);
    p[v] = u;
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        edges.push_back({w, {u,v}});
    }
    sort(edges.begin(), edges.end());
    int cnt = 0;
    for(auto e : edges) {
        int u = e.second.first;
        int v = e.second.second;
        int w = e.first;
        
        if(find(u) == find(v)) continue;
        uni(u, v);
        cnt += w;
    }
    cout << cnt << '\n';
    return 0;
}