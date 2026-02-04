//<2530>번 : <인공지능 시계>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a = 0;
    int h, m, s;
    cin >> h >> m >> s;
    cin >> a;
    a += h*3600 + m*60 + s;
    h = a/3600%24;
    a %= 3600;
    m = a/60%60;
    m %= 60;
    s = a%60;
    cout << h << ' ' << m << ' ' << s << '\n';

    return 0;
}