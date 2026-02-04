//<11723>번 : <집합>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int s = 0;
    int m, x;
    string cmd;
    cin >> m;
    for(int i = 0; i < m; i++)
    {
        cin >> cmd;
        if(cmd == "add")
        {
            cin >> x;
            s = s | (int)pow(2,x);
        }
        if(cmd == "remove")
        {
            cin >> x;
            s = s & ~(int)pow(2,x);
        }
        if(cmd == "check")
        {
            cin >> x;
            if((s & (int)pow(2,x)) == 0)
                cout << 0 << '\n';
            else
                cout << 1 << '\n';
        }
        if(cmd == "toggle")
        {
            cin >> x;
            if((s & (int)pow(2,x)) == 0)
                s = s | (int)pow(2,x);
            else
                s = s & ~(int)pow(2,x);
        }
        if(cmd == "all")
        {
            s = 0b111111111111111111110;
        }
        if(cmd == "empty")
            s = 0;
    }

    return 0;
}