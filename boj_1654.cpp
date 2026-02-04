//<1654>번 : <랜선 자르기>
#include <bits/stdc++.h>
using namespace std;

long long len[10000];
long long n, k;
long long max_len;

long long bs(long long l, long long r)
{
    long long mid = (l+r)/2;
    long long sum = 0;

    if(l > r)
        return r;
    
    for(int i = 0; i < k; i++)
        sum += len[i]/mid;

    if(sum < n)
        return bs(l, mid-1);
    if(sum >= n)
        return bs(mid+1, r);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> k >> n;
    max_len = 0;
    for(int i = 0; i < k ;i++)
    {
        cin >> len[i];
        max_len = max(max_len, len[i]);
    }
    cout << bs(1, max_len) << '\n';
    return 0;
}