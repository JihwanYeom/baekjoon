//<1977>번 : <완전제곱수>
#include <bits/stdc++.h>
using namespace std;

bool a[10001] = {};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    for(int i = 0; i <= 100; i++) {
        a[i*i] = true;
    }

    int m, n;
    cin >> m >> n;

    int k = -1, s = 0;
    for(int i = m; i <= n; i++) {
        if(a[i] ) {
            if (k == -1) k = i;
            s += i;
        }
    }
    if(k == -1) {
        cout << k << '\n'; 
        return 0;
    }
    cout << s << '\n' << k << '\n';
    return 0;
}