//<2455>번 : <지능형 기차>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, p = 0, m = 0;
    for(int i = 0; i < 4; i++) {
        cin >> a >> b;
        p -= a;
        m = max(m, p);
        p += b;
        m = max(m, p);
    }
    cout << m << '\n';
    return 0;
}