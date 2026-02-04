//<10162>번 : <전자레인지>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    int button[3] = {300, 60, 10};
    int cnt[3] = {};
    cin >> t;
    for(int i = 0; i < 3; i++) {
        cnt[i] += t/button[i];
        t %= button[i];
    }
    if(t != 0) cout << -1 << '\n';
    else {
        for(int i = 0; i < 3; i++)
            cout << cnt[i] << ' ';
        cout << '\n';
    }

    return 0;
}