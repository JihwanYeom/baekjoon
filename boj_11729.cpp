//<11729>번 : <하노이 탑 이동 순서>
#include <bits/stdc++.h>
using namespace std;

void hanoi(int a, int b, int c, int n)
{
    if(n == 1)
    {
        cout << a << ' ' << c << '\n';
        return;
    }
    hanoi(a,c,b,n-1);
    hanoi(a,b,c,1);
    hanoi(b,a,c,n-1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    cout << (1<<n)-1 << '\n';
    hanoi(1,2,3,n);

    return 0;
}