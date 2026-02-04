//<3665>번 : <최종 순위>
#include <bits/stdc++.h>
using namespace std;

vector<int> ranks;
queue<int> q;
int idg[501] = {};
int team[501] = {};
int adj[501][501] = {};
int n, m, t;

bool ts()
{
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            if(adj[i][j] == 1)
                idg[j]++;

    for(int i = 1; i <= n; i++)
    {
        if(idg[i] == 0) {
            q.push(i);
            ranks.push_back(i);
        }
    }

    while(!q.empty())
    {
        int v = q.front();
        q.pop();
        for(int u = 1; u <= n; u++)
        {
            if(adj[v][u] == 1)
            {
                idg[u]--;
                if(idg[u] == 0) 
                {
                    q.push(u);
                    ranks.push_back(u);
                }
            }
        }
    }
    return (ranks.size() == n);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 0; i < n; i++)
            cin >> team[i];

        for(int i = 0; i < n; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                int v = team[i];
                int u = team[j];
                adj[v][u] = 1;
            }
        }

        cin >> m;
        for(int i = 0; i < m; i++)
        {
            int v, u;
            cin >> v >> u;
            swap(adj[u][v], adj[v][u]);
        }

        if(ts())
        {
            for(int v : ranks)
                cout << v << ' ';
            cout << '\n';
        }
        else cout << "IMPOSSIBLE\n";
    
        ranks.clear();
        q = queue<int>();
        for(int i = 0; i <= n; i++)
        {
            idg[i] = 0;
            team[i] = 0;
        }
        memset(adj, 0, sizeof(adj));
    }

    return 0;
}
