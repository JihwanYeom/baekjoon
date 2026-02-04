//<31403>번 : <A + B - C>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    string sa, sb;
    cin >> a >> b >> c;
    sa = to_string(a);
    sb = to_string(b);
    
    cout << a + b - c << '\n';
    cout << stoi(sa+sb) - c << '\n';
    return 0;
}