//<5554>번 : <심부름 가는 길>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 0, h, m, s, n;
    for(int i = 0; i < 4; i++)
    {
        cin >> n;
        t+=n;
    }
    s = t%60;
    m = t/60;
    cout << m << '\n' << s << '\n';
    return 0;
}