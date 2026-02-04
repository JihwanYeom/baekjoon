//<9465>번 : <스티커>
#include <bits/stdc++.h>
using namespace std;

int t, n;
long long a[100000][2];
long long d[100000][2];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;
    while(t--) {
        cin >> n;
        for(int i = 0; i < n; i++)
            cin >> a[i][0];
        for(int i = 0; i < n; i++)
            cin >> a[i][1];

        d[0][0] = a[0][0];
        d[0][1] = a[0][1];
        d[1][0] = a[1][0] + a[0][1];
        d[1][1] = a[1][1] + a[0][0];

        for(int i = 2; i < n; i++) {
            d[i][0] = a[i][0] + max(d[i-2][0], max(d[i-1][1], d[i-2][1]));
            d[i][1] = a[i][1] + max(d[i-2][1], max(d[i-1][0], d[i-2][0]));
        }

        long long result = max(max(d[n-2][0], d[n-2][1]), max(d[n-1][0], d[n-1][1]));
        cout << result << '\n';
    }
    return 0;
}
