//<11724>번 : <연결 요소의 개수>
#include <bits/stdc++.h>
using namespace std;

vector<int> adj[1001];
stack<int> s;
bool visited[1001] = {};
int n, m;

void dfs(int i) {
    s.push(i);
    while(!s.empty()) {
        int u = s.top();
        s.pop();

        if(visited[u]) continue;
        visited[u] = true;

        for(int v : adj[u]) {
            s.push(v);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    int u, v;
    for(int i = 0; i < m; i++) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int cnt = 0;
    for(int i = 1; i <=n; i++) {
        if(visited[i]) continue;
        dfs(i);
        cnt++;
    }

    cout << cnt << '\n';

    return 0;
}