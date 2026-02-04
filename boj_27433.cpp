//<27433>번 : <팩토리얼 2>
#include <bits/stdc++.h>
using namespace std;

long long factorial(long long n)
{
    if(n == 0)
        return 1;
    return n*factorial(n-1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    cout << factorial(n) << '\n';
    return 0;
}