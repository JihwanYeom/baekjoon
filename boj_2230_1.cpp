//<2230>번 : <수 고르기-이분탐색>
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
    sort(a, a+n);
    int result = INT_MAX;
    for(int i = 0; i < n; i++)
    {
        int x = a[i];
        int l = i;
        int r = n;
        int mid;
        while(l < r)
        {
            mid = (l+r)/2;
            if(a[mid] >= x + m)
                r = mid;
            else
                l = mid+1;
        }
        if(l != n)
            result = min(abs(a[l] - x), result);
    }
    cout << result << '\n';
    return 0;
}
