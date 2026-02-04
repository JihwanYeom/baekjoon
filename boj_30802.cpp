//<30802>번 : <웰컴 키트트>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t, p, sum = 0;
    int size[6];

    cin >>  n;
    for(int i = 0; i < 6; i++)
        cin >> size[i];
    cin >> t >> p;
    for(int i = 0; i < 6; i++)
    {
        if(size[i]%t == 0) sum += size[i]/t;
        else sum += size[i]/t + 1; 
    }
    cout << sum << '\n';
    cout << n/p << ' ' << n%p << '\n';
    return 0;
}
