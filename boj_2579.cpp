//<2579>번 : <계단 오르기>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int stair[300];
    int sum[300][2];

    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> stair[i];
    
    sum[0][0] = stair[0];
    sum[0][1] = 0;

    sum[1][0] = stair[0] + stair[1];
    sum[1][1] = stair[1];

    for(int i = 2 ; i < n; i++)
    {
        sum[i][0] = sum[i-1][1] + stair[i];
        sum[i][1] = max(sum[i-2][0],sum[i-2][1]) + stair[i];
    }
    cout << max(sum[n-1][0],sum[n-1][1]) << '\n';
    return 0;
}