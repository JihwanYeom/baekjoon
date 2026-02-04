//<10156>번 : <과자>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int k, n, m, r;
    cin >> k >> n >> m;
    r = k*n-m;
    if(r < 0) r = 0;
    cout << r << '\n';

    return 0;
}