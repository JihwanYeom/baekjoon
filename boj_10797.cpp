//<10797>번 : <10부제>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c = 0;
    cin >> a;
    for(int i = 0; i < 5; i++)
    {
        cin >> b;
        if(b == a) c++;
    }
    cout << c << '\n';
    return 0;
}