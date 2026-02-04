//<11659>번 : <구간 합 구하기>
#include <bits/stdc++.h>
using namespace std;

int ar[100001] = {};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, a, b;
    cin >> n >> m;
    ar[0] = 0;
    for(int i = 1; i <= n; i++)
    {
        cin >> ar[i];
        ar[i] += ar[i-1];
    }
    for(int i = 0; i < m ; i++)
    {
        cin >> a >> b;
        cout << ar[b]-ar[a-1] << '\n';
    }
    return 0;
}