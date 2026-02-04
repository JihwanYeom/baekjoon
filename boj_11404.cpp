//<11404>번 : <플로이드>
#include <bits/stdc++.h>
#define INF 100000000
using namespace std;

int d[101][101];
int n, m;

void floyd()
{
    
    for(int i = 1; i <= n; i++)
        d[i][i] = 0;

    for(int v = 1; v <= n; v++)
    {
        for(int s = 1; s <= n; s++)
        {
            for(int t = 1; t <= n; t++)
            {
                if(d[s][v] + d[v][t] < d[s][t])
                    d[s][t] = d[s][v] + d[v][t];
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    fill(d[0], d[101], INF);
    for(int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        d[u][v] = min(d[u][v], w);
    }

    floyd();

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n ; j++)
        {
            if(d[i][j] == INF) cout << 0 << ' ';
            else cout << d[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}