//<1934>번 : <최소공배수>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, t, gcd, lcm;
    cin >> t;
    for(int i = 0; i < t; i ++)
    {
        cin >> a >> b;
        gcd = a < b ? a : b;
        while(a%gcd != 0 || b%gcd != 0)
            gcd--;
        lcm = a*b/gcd;
        cout << lcm << '\n';
    }
    return 0;
}