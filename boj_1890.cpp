//<1890>번 : <점프>
#include <bits/stdc++.h>
using namespace std;

long long d[100][100] = {};
long long a[100][100] = {};

int n;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    d[0][0] = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(a[i][j] == 0) continue;
            int dist = a[i][j];
            if(i + dist < n) {
                d[i + dist][j] += d[i][j];
            }
            if(j + dist < n) {
                d[i][j + dist] += d[i][j];
            }
        }
    }

    cout << d[n-1][n-1] << '\n';

    return 0;
}
