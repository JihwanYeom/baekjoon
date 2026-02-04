//<1735>번 : <분수 합>
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(a%b == 0)
        return b;
    return gcd(b,a%b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, d, n, m;
    cin >> a >> b >> c >> d;

    n = a*d + c*b;
    m = b*d;

    cout << n/gcd(n,m) << ' ' << m/gcd(n,m) << '\n';
    return 0;
}