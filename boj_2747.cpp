//<2747>번 : <피보나치 수>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int a[50];
    a[0] = 0;
    a[1] = 1;

    cin >> n;
    for(int i = 2; i <= n; i++)
        a[i] = a[i-1] + a[i-2];
    cout << a[n] << '\n';

    return 0;
}