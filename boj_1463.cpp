//<1463>번 : <1로 만들기>
#include <bits/stdc++.h>
using namespace std;

int ar[1000005];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    ar[1] = 0;
    for(int i = 2; i <= n; i++)
    {
        ar[i] = ar[i-1] + 1;
        if(i%2 == 0) ar[i] = min(ar[i],ar[i/2]+1);
        if(i%3 == 0) ar[i] = min(ar[i],ar[i/3]+1);
    }
    cout << ar[n] << '\n';
    return 0;
}