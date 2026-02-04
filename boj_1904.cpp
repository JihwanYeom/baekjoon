//<1904>번 : <01타일>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m = 15746;
    cin >> n;
    int* ar = new int[n];
    ar[0] = 1; ar[1] = 2;
    for(int i = 2; i < n; i++)
        ar[i] = (ar[i-1] + ar[i-2])%m;
    cout << ar[n-1] << '\n';
    
    return 0;
}