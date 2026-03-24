//<27294>번 : <몇개고?>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, s;
    cin >> t >> s;

    if(t >= 12 && t <= 16 && s == 0) 
        cout << 320 << '\n';
    else
        cout << 280 << '\n';

    return 0;
}
