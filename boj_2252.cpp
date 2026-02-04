//<2252>번 : <줄 세우기>
#include <bits/stdc++.h>
using namespace std;

vector<int> g[32001];
vector<int> order;
queue<int> q;
int idg[32001] = {};

int n, m;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        int v, u;
        cin >> v >> u;
        g[v].push_back(u);
        idg[u]++;
    }
    for(int i = 1; i <= n; i++)
    {
        if(idg[i] == 0)
        {
            q.push(i);
            order.push_back(i);
        }
    }
    while(!q.empty())
    {
        int v = q.front();
        q.pop();
        for(int u : g[v])
        {
            idg[u]--;
            if(idg[u] == 0) 
            {
                order.push_back(u);
                q.push(u);
            }
        }
    }
    for(int v : order)
        cout << v << ' ';
    cout << '\n';

    return 0;
}
