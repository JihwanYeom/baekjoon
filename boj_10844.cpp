//<10844>번 : <쉬운 계단 수>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k = 1000000000;
    int d[100][10];
    cin >> n;
    d[0][0] = 0;
    for(int i = 1; i < 10; i++)
        d[0][i] = 1;
    for(int i = 1; i < n; i++)
    {
        d[i][0] = d[i-1][1];
        d[i][9] = d[i-1][8];
        for(int j = 1; j < 9; j++)
            d[i][j] = (d[i-1][j-1] + d[i-1][j+1])%k;
    }
    int sum = 0;
    for(int i = 0; i < 10; i++)
        sum = (sum + d[n-1][i])%k;
    cout << sum << '\n';
    return 0;
}