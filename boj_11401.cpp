//<11401>번 : <이항 계수 3>
#include <bits/stdc++.h>
using namespace std;

long long n, k, a, b;
long long m = 1000000007;

long long fact(int num)
{
    long long f = 1;
    for(int i = 1; i <= num; i++)
        f = (f*i%m)%m;
    return f;
}

long long pow(long long p)
{
    if(p == 1) return b%m;
    if(p % 2 == 0) return (pow(p/2) * pow(p/2))%m;
    if(p % 2 == 1) return (pow(p/2 + 1) * pow(p/2))%m;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> k;
    a = fact(n);
    b = (fact(n-k)*fact(k))%m;
    cout << (a*(pow(m-2)%m))%m << '\n';

    return 0;
}