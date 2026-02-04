//<13458>번 : <시험 감독>
#include <bits/stdc++.h>
using namespace std;

long long a[1000000];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, b, c;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    cin >> b >> c;

    long long cnt = n;
    for(int i = 0; i < n; i++)
    {
        long long d = a[i]-b;
        if(d > 0)
            cnt += d/c + (d%c != 0);
    }
    cout << cnt << '\n';
    return 0;
}