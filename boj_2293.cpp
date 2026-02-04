//<2293>번 : <동전 1>
#include <bits/stdc++.h>
using namespace std;

int coins[100];
int d[10001];
int n, k;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> k;
    for(int i = 0; i < n; i++)
        cin >> coins[i];
    
    d[0] = 1;
    for(int i = 0; i < n; i++) {
        for(int j = coins[i]; j <= k; j++) {
            d[j] = d[j] + d[j-coins[i]];
        }
    }
    cout << d[k] << '\n';
    return 0;
}
