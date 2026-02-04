//<1010>번 : <다리 놓기>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long t, n, m, b;
    cin >> t;
    for(int i = 0 ; i < t; i++)
    {
        cin >> n >> m;
        b = 1;
        for(int j = 1; j <= n; j++)
        {
            b *= m-j+1;
            b /= j;
        }
        cout << b << '\n';
    }
    return 0;
}