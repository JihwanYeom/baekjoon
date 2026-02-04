//<13305>번 : <주유소>
#include <bits/stdc++.h>
using namespace std;

long long n;
long long w[100000] = {};
long long v[100000] = {};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n;
    for(int i = 1; i < n; i++) cin >> w[i];
    for(int i = 0; i < n; i++) cin >> v[i];

    long long c = v[0];
    long long sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += w[i]*c;
        if(v[i] < c)
            c = v[i];
    }
    cout << sum << '\n';
    return 0;
}