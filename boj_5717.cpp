//<5717>번 : <상근이의 친구들>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a = -1,b = -1;
    while(true)
    {
        cin >> a >> b;
        if(a == 0 && b == 0)
            break;
        cout << a+b << '\n';
    }

    return 0;
}