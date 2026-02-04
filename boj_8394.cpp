//<8394>번 : <악수>
#include <bits/stdc++.h>
using namespace std;

long long d[10000000][2];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    d[0][0] = 1;
    d[0][1] = 0;
    for(int i = 1; i < n; i++) {
        d[i][0] = (d[i-1][0] + d[i-1][1])%10;
        d[i][1] = d[i-1][0]%10;
    }
    cout << (d[n-1][0] + d[n-1][1])%10 << '\n';

    return 0;
}
