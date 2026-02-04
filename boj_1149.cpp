//<1149>번 : <RGB거리>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    int ar[n][3];
    
    for(int i = 0; i < n; i++)
        cin >> ar[i][0] >> ar[i][1] >> ar[i][2];
    
    int r = ar[0][0], g = ar[0][1], b = ar[0][2];
    int cur_r, cur_g, cur_b;

    for(int i = 1; i < n; i++)
    {
        cur_r = min(g + ar[i][0], b + ar[i][0]);
        cur_g = min(r + ar[i][1], b + ar[i][1]);
        cur_b = min(r + ar[i][2], g + ar[i][2]);
        r = cur_r; g = cur_g; b = cur_b;
    }

    cout << min(min(r,g),b) << '\n';

    return 0;
}