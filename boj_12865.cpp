//<12865>번 : <평범한 배낭>
#include <bits/stdc++.h>
using namespace std;

int n, k;
int v[101], w[101];
int dp[100001][101] = {};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> k;

    for(int i = 1; i <= n; i++)
        cin >> w[i] >> v[i];

    for(int i = 1; i <= k; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(w[j] <= i)
                dp[i][j] = max(dp[i][j-1], dp[i-w[j]][j-1] + v[j]);
            else
                dp[i][j] = dp[i][j-1]; 
        }
    }

    cout << dp[k][n] << '\n';
    return 0;
}

