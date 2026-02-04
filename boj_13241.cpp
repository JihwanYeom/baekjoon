//<13241>번 : <최소공배수>
#include <bits/stdc++.h>
using namespace std;

long long int gcd(long long int a, long long int b)
{
    if(a%b == 0)
        return b;
    return gcd(b,a%b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int a, b;
    cin >> a >> b;
    
    cout << gcd(a,b) << '\n';
    cout << a*b/gcd(a,b) << '\n';

    return 0;
}