//<10986>번 : <나머지 합>
#include <bits/stdc++.h>
using namespace std;

long long ar[1000000] = {};
long long d[1001] = {};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    cin >> ar[0];
    d[ar[0]%m]++;
    for(int i = 1; i < n; i++) 
    {
        cin >> ar[i];
        ar[i] = (ar[i-1]+ar[i])%m;
        d[ar[i]]++;
    }
    long long cnt = 0;
    for(int i = 0; i < m; i++)
        cnt += d[i]*(d[i]-1)/2;
    cnt += d[0];
    cout << cnt << '\n';
    return 0;
}


//