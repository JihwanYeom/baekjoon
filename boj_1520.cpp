//<1520>번 : <내리막 길>
#include <bits/stdc++.h>
using namespace std;

int a[500][500];
long long d[500][500] = {};
int dy[4] = {1, -1, 0, 0};
int dx[4] = {0, 0, 1, -1};
priority_queue<pair<int, pair<int, int>>> pq;
int n, m;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
            if(i == 0 && j == 0) continue;
            pq.push({a[i][j],{i,j}});
        }
    }
    d[0][0] = 1;
    while(!pq.empty()) {
        pair<int, pair<int, int>> p = pq.top();
        pq.pop();
        int h = p.first;
        int y = p.second.first;
        int x = p.second.second;
        for(int k = 0; k < 4; k++) {
            int nx = x + dx[k];
            int ny = y + dy[k];
            if(ny < 0 || ny > n-1 || nx < 0 || nx > m-1) 
                continue;
            if(a[ny][nx] > h)
                d[y][x] += d[ny][nx];
        }
    }
    cout << d[n-1][m-1] << '\n';
    return 0;
}
