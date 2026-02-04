//<1912>번 : <연속합>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    int ar[n];
    for(int i = 0; i < n; i++)
        cin >> ar[i];

    int cur_sum = ar[0];
    int max_sum = ar[0];

    for(int i = 1; i < n; i++) 
    {
        cur_sum = max(ar[i], cur_sum + ar[i]);
        max_sum = max(max_sum, cur_sum);
    }
    cout << max_sum << '\n';
    return 0;
}