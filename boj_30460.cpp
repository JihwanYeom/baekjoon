//<30460>번 : <스위치>
#include <bits/stdc++.h>
using namespace std;

long long a[200000];
long long d[200000][4] = {};
int n;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        for(int j = 0; j < 4; j++)
            d[i][j] = -2000000001;
    }
    
    d[0][0] = a[0];
    d[0][1] = a[0]*2;
    for(int i = 1; i < n; i++) {
        d[i][0] = max(d[i-1][3], d[i-1][0]) + a[i];
        d[i][1] = max(d[i-1][3], d[i-1][0]) + a[i]*2;
        d[i][2] = d[i-1][1] + a[i]*2;
        d[i][3] = d[i-1][2] + a[i]*2;
    }

    cout << max(max(d[n-1][0], d[n-1][1]) , max(d[n-1][2], d[n-1][3])) << '\n';
    return 0;
}