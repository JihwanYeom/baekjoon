//<11054>번 : <가장 긴 바이토닉 부분 수열>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, max_len = 0;
    int a[1001];
    int d1[1001];
    int d2[1001];
    cin >> n;
    d1[1] = 1;
    d2[n] = 1;
    for(int i = 1; i <= n; i++)
        cin >> a[i];

    for(int i = 2; i <= n; i++)
    {
        d1[i] = 1;
        for(int j = 1; j < i; j++)
        {
            if(a[j] < a[i]  && d1[j]+1 > d1[i])
                d1[i] = d1[j]+1;
        }
    }
    for(int i = n-1; i >= 1; i--)
    {
        d2[i] = 1;
        for(int j = n; j > i; j--)
        {
            if(a[j] < a[i] && d2[j]+1 > d2[i])
                d2[i] = d2[j]+1;
        }
    }
    
    for (int i = 1; i <= n; i++)
        max_len = max(max_len, d1[i] + d2[i] - 1);
    cout << max_len << '\n';
    return 0;
}