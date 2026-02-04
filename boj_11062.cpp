//<11062>번 : <카드 게임>
#include <bits/stdc++.h>
using namespace std;

int a[1001];
int d[1001][1001] = {};
int n, t, turn;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;
    while(t--) {
        cin >> n;

        for(int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        
        if(n % 2 == 1) turn = 1;
        else turn = -1;

        for(int len = 0; len < n; len++) {
            for(int i = 1; i <= n-len; i++) {
                int l = i, r = i + len;
                if(turn == 1) 
                    d[l][r] = max(d[l+1][r] + a[l], d[l][r-1] + a[r]);
                else
                    d[l][r] = min(d[l+1][r], d[l][r-1]);
                
            }
            turn *= -1;
        }

        cout << d[1][n] << '\n';
        fill(d[0], d[n+1], 0);
    }
    

    return 0;
}

// top-down 풀이
/*
int pick(int l, int r, int turn) {
    if(l > r) return 0;
    if(d[l][r] != 0) return d[l][r];

    if(turn == 0)
        return d[l][r] = max(pick(l+1, r, 1) + a[l], pick(l, r-1, 1) + a[r]);
    else
        return d[l][r] = min(pick(l+1, r, 0), pick(l, r-1, 0));

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;
    while(t--) {
        cin >> n;

        for(int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        pick(1, n, 0);    
        cout << d[1][n] << '\n';

        fill(d[0], d[n+1], 0);
    }
    

    return 0;
}
*/