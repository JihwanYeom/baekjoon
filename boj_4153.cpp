//<4153>번 : <직각삼각형형>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    while(true)
    {
        cin >> a >> b >> c;
        if(a == 0 && b == 0 && c == 0)
            break;
        if(a > c) swap(a,c);
        if(b > c) swap(b,c);

        if(pow(a,2) + pow(b,2) == pow(c,2))
            cout << "right\n";
        else
            cout << "wrong\n";
    }
    
    return 0;
}