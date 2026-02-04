//<11047>번 : <동전 0>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k;
    int ar[10] = {};
    cin >> n >> k;
    for(int i = 0; i < n; i++)
        cin >> ar[i];

    int i = n-1, cnt = 0;
    while(k > 0)
    {
        cnt += k/ar[i];
        k %= ar[i--];
    }
    cout << cnt << '\n';
    return 0;
}
