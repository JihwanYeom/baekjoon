//<18110>번 : <solved.ac>
#include <bits/stdc++.h>
using namespace std;

int n, m, sum = 0;
int ar[300000] = {};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n;
    if(n == 0)
    {
        cout << 0 << '\n';
        return 0;
    }
    
    for(int i = 0 ; i < n; i++)
        cin >> ar[i];

    sort(ar, ar+n);
    m = (int)((float)n*0.15+0.5);

    for(int i = m; i < n-m; i++){
        sum += ar[i];
    }

    cout << (int)((float)sum/(n-m*2) + 0.5) << '\n';
    return 0;
}