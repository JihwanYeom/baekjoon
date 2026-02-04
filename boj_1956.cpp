//<1956>번 : <운동>
#include <bits/stdc++.h>
#define INF 10000000
using namespace std;

int d[401][401];

int n, m;

void floyd()
{
    for(int v = 1; v <= n; v++)
        for(int s = 1; s <= n; s++)
            for(int t = 1; t <= n; t++)
                d[s][t] = min(d[s][t], d[s][v] + d[v][t]); 

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    fill(d[0], d[401], INF);
    for(int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        d[u][v] = w;
    }

    floyd();

    int result = INF;
    for(int i = 1; i <= n; i++)
        result = min(result, d[i][i]);
    
    if(result == INF) cout << -1 << '\n';
    else cout << result << '\n';

    return 0;
}
