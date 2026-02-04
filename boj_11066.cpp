//<11066>번 : <파일 합치기>
#include <bits/stdc++.h>
#define INF 5000000000000

using namespace std;

int t, n;
long long d[500][500] = {};
long long s[500][500] = {};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;
    while(t--) {
        cin >> n;
        fill(s[0], s[500], INF);
        for(int i = 0; i < n; i++) {
            cin >> d[i][i];
            s[i][i] = 0;
        }

        for(int range = 2; range <= n; range++) {
            for(int i = 0; i <= n - range; i++) {
                int j = i + range - 1;
                d[i][j] = d[i][j-1] + d[j][j];
                for(int k = i; k < j; k++) 
                    s[i][j] = min(s[i][j], s[i][k] + s[k+1][j] + d[i][j]);
            }
        }
        cout << s[0][n-1] << '\n';
    }

    return 0;
}
