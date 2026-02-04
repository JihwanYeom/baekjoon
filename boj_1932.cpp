//<1932>번 : <정수 삼각형>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int sum[n][n];
    cin >> sum[0][0];
    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cin >> sum[i][j];
            if(j == 0) sum[i][j] += sum[i-1][0];
            else if(j == i) sum[i][j] += sum[i-1][j-1];
            else sum[i][j] += max(sum[i-1][j-1], sum[i-1][j]);
        }
    }

    int max_sum = 0;
    for(int i = 0; i < n; i++)
        max_sum = max(max_sum, sum[n-1][i]);
    cout << max_sum << '\n';
    return 0;
}