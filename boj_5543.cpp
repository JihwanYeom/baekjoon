//<5543>번 : <상근날드드>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a = 3000, b = 3000, n;
    for(int i = 0; i < 3; i ++)
    {
        cin >> n;
        a = min(a,n);
    }
    for(int i = 0; i < 2; i ++)
    {
        cin >> n;
        b = min(b,n);
    }
    cout << a + b - 50 << '\n';
    return 0;
}
