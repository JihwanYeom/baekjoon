//<11727>번 : <2xn 타일링 2>
#include <bits/stdc++.h>
using namespace std;

int d[1003] = {};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    d[0] = 1;
    int n, div = 10007;
    cin >> n;

    for(int i = 0; i < n; i++) {
        d[i+1] = (d[i+1] + d[i])%div;
        d[i+2] = (d[i+2] + 2*d[i])%div;
    }
    cout << d[n] << '\n';

    return 0;
}
