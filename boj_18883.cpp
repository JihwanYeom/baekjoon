//<18883>번 : <N M 찍기>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        for(int j = 1; j <= m; j++) {
            cout << i*m + j;
            if(j != m) cout << ' ';
        }
        cout << '\n';
    }

    return 0;
}