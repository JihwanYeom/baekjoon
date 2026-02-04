//<24416>번 : <알고리즘 수업 - 피보나치 수 1>
#include <bits/stdc++.h>
using namespace std;

int cnt1 = 0, cnt2 = 0;

int fib(int n)
{
    if(n == 1 || n == 2) {cnt1++; return 1;}
    else return (fib(n-1) + fib(n-2));
}

int f[40];
int fibonacci(int n)
{
    f[0] = f[1] = 1;
    for (int i = 2; i < n; i++)
    {
        cnt2++;
        f[i] = f[i-1] + f[i-2];
    }
        
    return f[n-1];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    fib(n);
    fibonacci(n);
    cout << cnt1 << ' ' << cnt2 << '\n';

    return 0;
}