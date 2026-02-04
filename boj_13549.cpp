//<13549>번 : <숨바꼭질 3>
#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> adj[100001];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
int d[100001];

int n, m;

void dijkstra()
{
    fill(d, d+100001, 200000);
    q.push({0,n});
    d[n] = 0;

    while(!q.empty())
    {
        int u = q.top().second;
        int du = q.top().first;
        q.pop();
        
        if(du != d[u]) continue;

        for(pair<int, int> e : adj[u])
        {
            int w = e.first;
            int v = e.second;
            if(d[v] > du + w)
            {
                d[v] = du + w;
                q.push({du+w, v});
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    for(int i = 0; i <= 100000; i++)
    {
        if(i > 0) adj[i].push_back({1,i-1});
        if(i < 100000) adj[i].push_back({1,i+1});
        if(i*2 <= 100000) adj[i].push_back({0,i*2});
    }

    dijkstra();

    cout << d[m] << '\n';

    return 0;
}
