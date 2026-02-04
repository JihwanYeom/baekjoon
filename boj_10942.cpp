//<10942>번 : <팰린드롬?>
#include <bits/stdc++.h>
using namespace std;

int a[2001] = {};
int d[2001][2001] = {};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, s, e;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        d[i][i] = 1;
    }
    cin >> m;

    for(int i = 2; i <= n; i++) {
        for(int j = 1; j < i; j++) {
            if(i - j == 1){
                if(a[i] == a[j]) d[j][i] = 1;
                else d[j][i] = 0;
                continue;
            }
            if(d[j+1][i-1] == 1 && a[j] == a[i])
                d[j][i] = 1;
            else d[j][i] = 0;
        }
    }
    
    while(m--) {
        cin >> s >> e;
        cout << d[s][e] << '\n';
    }

    return 0;
}