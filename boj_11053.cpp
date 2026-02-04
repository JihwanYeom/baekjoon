//<11053>번 : <가장 긴 증가하는 부분 수열>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, max = 1;
    int a[1001] = {};
    int d[1001] = {};
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    
    for(int i = 1; i <= n; i++)
    {
        d[i] = 1;
        for(int j = 1; j < i; j++)
        {
            if(a[j] < a[i]  && d[j]+1 > d[i])
                d[i] = d[j]+1;
        }
        if(max < d[i]) max = d[i];
    }
    cout << max << '\n';
    return 0;
}
