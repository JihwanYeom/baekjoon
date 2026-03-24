//<11725>번 : <트리의 부모 찾기>
#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100001];
queue<int> q;
int p[100001] = {};

void bfs(int s) {
    q.push(s);
    while(!q.empty()) {
        int w = q.front();
        q.pop();
        for(int v : adj[w]) {
            if(p[w] == v) continue;
            q.push(v);
            p[v] = w;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, w, v;
    cin >> n;
    for(int i = 0; i < n-1; i++) {
        cin >> w >> v;
        adj[w].push_back(v);
        adj[v].push_back(w);
    }
    bfs(1);

    for(int i = 2; i <= n; i++) {
        cout << p[i] << '\n';
    }

    return 0;
}