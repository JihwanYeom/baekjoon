//<7579>번 : <앱>
#include <bits/stdc++.h>
using namespace std;

int n, m;
int w[101] = {};
int c[101] = {};
int d[10000][101] = {};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    for(int i = 1; i <= n; i++)
        cin >> w[i];

    int total = 0;
    for(int i = 1; i <= n; i++) {
        cin >> c[i];
        total += c[i];
    }

    for(int i = 0; i <= total; i++) {
        for(int j = 1; j <= n; j++) {
            if(c[j] <= i)
                d[i][j] = max(d[i][j-1], d[i-c[j]][j-1] + w[j]);
            else 
                d[i][j] = d[i][j-1];
                
            if(d[i][j] >= m) {
                cout << i << '\n';
                return 0;
            }  
        }
    }

    return 0;
}
