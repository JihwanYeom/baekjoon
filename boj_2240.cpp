//<2240>번 : <자두나무>
#include <bits/stdc++.h>
using namespace std;

int a[1001];
int d[1001][31][2] = {};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, w;
    cin >> t >> w;
    for(int i = 0; i < t; i++) {
        cin >> a[i];
    }
    if(a[0] == 1) {
        for(int i = 0; i <= w; i++) {
            if(i%2 == 0)
                d[0][i][0] = 1;
            if(i%2 == 1)
                d[0][i][1] = 0;
        }
    }
    if(a[0] == 2) {
        for(int i = 0; i <= w; i++) {
            if(i%2 == 0)
                d[0][i][0] = 0;
            if(i%2 == 1)
                d[0][i][1] = 1;
        }
    }
    
    for(int i = 1; i < t; i++) {
        if(a[i] == 1) {
            d[i][0][0] = d[i-1][0][0] + 1;
            d[i][0][1] = d[i-1][0][1];
        }
        
        if(a[i] == 2) {
            d[i][0][0] = d[i-1][0][0];
            d[i][0][1] = d[i-1][0][1] + 1;
        }
        for(int j = 1; j <= w; j++) {
            if(a[i] == 1) {
                d[i][j][0] = max(d[i-1][j][0] + 1, d[i-1][j-1][1] + 1);
                d[i][j][1] = max(d[i-1][j-1][0], d[i-1][j][1]);
            }
            if(a[i] == 2) {
                d[i][j][0] = max(d[i-1][j][0], d[i-1][j-1][1]);
                d[i][j][1] = max(d[i-1][j-1][0] + 1, d[i-1][j][1] + 1);
            }
        }
    }
    int result = 0;
    for(int i = 0; i < t; i++) {
        for(int j = 0; j <= w; j++) {
            result = max(result, max(d[i][j][0], d[i][j][1]));
        }
    }
    
    cout << result << '\n';
    return 0;
}