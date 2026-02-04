//<2559>번 : <수열>
#include <bits/stdc++.h>
using namespace std;

int ar[100001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, max_sum = INT_MIN;
    cin >> n >> k;

    ar[0] = 0;
    for(int i = 1; i <= n; i++) 
    {
        cin >> ar[i];
        ar[i] += ar[i-1];
    }

    for(int i = 0; i <= n-k ; i++){
        max_sum = max(max_sum, ar[i+k] - ar[i]);
    }
    cout << max_sum << '\n';
    return 0;
}