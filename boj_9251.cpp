//<9251>번 : <LCS>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b;
    cin >> a >> b;
    int n = a.length();
    int m = b.length();
    a = " " + a;
    b = " " + b;
    int** dp = new int*[1001];
    for(int i = 0; i < 1001; i++)
        dp[i] = new int[1001];
    for(int i = 0 ; i < 1001; i++)
    {
        dp[0][i] = 0; dp[i][0] = 0;
    }
    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(a[j] == b[i]) dp[i][j] = dp[i-1][j-1]+1;
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    cout << dp[m][n] << '\n';
    return 0;
}

/*

  A C A Y K P
C 0 1 1 1 1 1
A 1 1 2 2 2 2
P 1 1 2 2 2 3
C 1 2 2 2 2 3
A 1 2 3 3 3 3
K

A C A Y K P
C A P C A K

ans - ACAK
dp

A C A Y K P
2 2 3   4 3
C A P C A K
    

*/