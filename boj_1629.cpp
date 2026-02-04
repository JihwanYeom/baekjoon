//<1629>번 : <곱셈>
#include <bits/stdc++.h>
using namespace std;

long long a, b, c;

long long func(int k)
{
    if(k == 1) return a%c;
    else 
    {
        if(k % 2 == 0) return (func(k/2)*func(k/2))%c;
        if(k % 2 == 1) return (func(k/2)*func(k/2+1))%c;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a >> b >> c;
    cout << func(b) << '\n';
    return 0;
}