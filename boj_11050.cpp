//<11050>번 : <이항 계수>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, bc = 1;
    cin >> n >> k;
    for(int i = 1; i <= k; i++) 
    {
        bc *= n-i+1;
        bc /= i;
    }
    cout << bc << '\n';
    return 0;
}