//<29729>번 : <가변 배열>
#include <bits/stdc++.h>
using namespace std;

int s, u = 0, n, m;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> s >> n >> m;
    for(int i = 0; i < n+m; i++)
    {
        int c;
        cin >> c;
        if(c == 1) 
        {
            if(u == s) s*=2;
            u++;    
        }
        if(c == 0) u--;
    }
    cout << s << '\n';
    return 0;
}