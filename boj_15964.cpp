//<15964>번 : <이상한 기호>
#include <bits/stdc++.h>
using namespace std;

long long func(long long a, long long b)
{
    return (a+b)*(a-b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;
    cout << func(a,b) << '\n';

    return 0;
}