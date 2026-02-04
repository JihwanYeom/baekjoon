//<5532>번 : <방학 숙제>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int l, a, b, c, d;
    cin >> l >> a >> b >> c >> d;
    int x = a/c;
    if(a%c != 0) x++;
    int y = b/d;
    if(b%d != 0) y++;
    

    cout << l - max(x,y) << '\n';

    return 0;
}