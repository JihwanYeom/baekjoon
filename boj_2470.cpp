//<2470>번 : <두 용액>
#include <bits/stdc++.h>
using namespace std;

int a[100000];
int n;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a+n);

    int j = n-1;
    int i = 0;
    int m = abs(a[0] + a[n-1]);
    int mi = 0;
    int mj = n-1;
    while(i < j)
    {
        if(abs(a[i] + a[j]) < m)
        {
            m = abs(a[i] + a[j]);
            mi = i;
            mj = j;
        }
        if(a[i] + a[j] > 0) 
            j--;
        else i++;
    }
    cout << a[mi] << ' ' << a[mj] << '\n';
    return 0;
}