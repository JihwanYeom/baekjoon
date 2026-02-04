//<3273>번 : <두 수의 합>
#include <bits/stdc++.h>
using namespace std;

int a[2000000];
int n, x;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    cin >> x;
    sort(a, a+n);
    int j = n-1;
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        while(j > i && a[i] + a[j] > x)
            j--;
        if(j == i) break;
        if(a[i] + a[j] == x) cnt++;
    }   
    cout << cnt << '\n';

    return 0;
}
