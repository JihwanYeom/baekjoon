//<11399>번 : <ATM>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int ar[1000] = {};
    int d[1000] = {};

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> ar[i];
        
    sort(ar,ar+n);
    
    d[0] = ar[0];
    for(int i = 1; i < n; i++)
        d[i] = d[i-1] + ar[i];

    int t = 0;
    for(int i = 0; i < n; i++)
        t += d[i];

    cout << t << '\n';
}