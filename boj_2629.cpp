//<2629>번 : <양팔저울>
#include <bits/stdc++.h>
using namespace std;

int w[31] = {};
bool d[31][15001] = {};
int n, m, sum = 0;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> w[i];
        sum += w[i];
    }
    
    for(int i = 1; i <= n; i++) {
        d[i][w[i]] = true;
        for(int j = 1; j <= sum; j++) {
            if(j >= w[i]) {
                if(d[i-1][j - w[i]]) {
                    d[i][j] = true;
                }
            }

            if(d[i-1][j]) {
                d[i][j] = true;
                d[i][abs(j-w[i])] = true;
            }
        }
    }

    cin >> m;
    for(int i = 0; i < m; i++) {
        int b;
        cin >> b;
        
        if(b > 15000) cout << "N ";
        else if(d[n][b]) cout << "Y ";
        else cout << "N ";
    }
    cout << '\n';
    return 0;
}