//<9085>번 : <더하기>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, s;
    cin >> t;
    while(t--) {
        s = 0;
        cin >> n;
        for(int i = 0; i < n; i++) {
            int in = 0;
            cin >> in;
            s += in;
        }
        cout << s << '\n';
    }

    return 0;
}