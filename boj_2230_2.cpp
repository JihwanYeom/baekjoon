//<2230>번 : <수 고르기-투 포인터>
#include <bits/stdc++.h>
using namespace std;

int a[100000];
int n, m;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int i = 0, j = 0;
    int result = INT_MAX;
    sort(a, a+n);
    for(int i = 0; i < n; i++)
    {
        while(a[j] - a[i] < m && j < n) 
            j++;
        if(j == n) break;
        result = min(result, a[j]-a[i]);
    }
    cout << result << '\n';
    return 0;
}
