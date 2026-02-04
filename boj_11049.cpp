//<11049>번 : <행렬 곱셈 순서>
#include <bits/stdc++.h>
#define R first
#define C second
#define INF INT_MAX

using namespace std;

pair<long long, long long> a[500][500];
long long d[500][500];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, r, c;
    cin >> n;
    fill(d[0], d[500], INF);
    for(int i = 0; i < n; i++) {
        cin >> r >> c;
        a[i][i] = {r,c};
        d[i][i] = 0;
    }

    for(int range = 2; range <= n; range++) {
        for(int i = 0; i <= n-range; i++) {
            int j = i + range - 1;
            a[i][j] = {a[i][i].R, a[j][j].C};
            for(int k = i; k < j; k++) {
                d[i][j] = min(d[i][j], a[i][k].R * a[i][k].C * a[k+1][j].C + d[i][k] + d[k+1][j]);
            }
        }
    }
    cout << d[0][n-1] << '\n';

    return 0;
}
