//<14489>번 : <치킨 두 마리 (...)>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;
    if(a + b >= c*2) {
        cout << a + b - c*2 << '\n';
    }
    else {
        cout << a + b << '\n';
    }

    return 0;
}