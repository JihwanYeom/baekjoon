//<1300>번 : <K번째 수>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, k;
    cin >> n >> k;

    long long l = 1, r = k;
    while(l < r)
    {
        long long mid = (l+r)/2;
        long long order = 0;
        for(long long i = 1; i <= n; i++)
            order += min(n,mid/i);
        if(order < k) l = mid + 1;
        if(order >= k) r = mid;
    }
    cout << l << '\n';
    return 0;
}
