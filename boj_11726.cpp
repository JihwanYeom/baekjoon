//<11726>번 : <2×n 타일링>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int dp[1000];
    int n, m = 10007;

    cin >> n;
    dp[0] = 1;
    dp[1] = 2;
    for(int i = 2; i < n; i++)
        dp[i] = (dp[i-1] + dp[i-2]) % m;
    cout << dp[n-1] << '\n';
    return 0;
}
