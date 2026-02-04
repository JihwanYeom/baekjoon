//<5565>번 : <영수증증>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b;
    cin >> a;
    for(int i = 0; i < 9; i++)
    {
        cin >> b;
        a -= b;
    }
    cout << a << '\n';
    return 0;
}
