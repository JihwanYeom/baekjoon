//<22886>번 : <Moons and Umbrellas>
#include <bits/stdc++.h>
using namespace std;

string a;
long long d[1001][2];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for(int k = 0; k < t; k++) {
        int x, y;
        cin >> x >> y >> a;
        fill(d[0], d[1001], LONG_LONG_MAX-1000);
        if(a[0] == 'C') d[0][0] = 0;
        if(a[0] == 'J') d[0][1] = 0;
        if(a[0] == '?') {
            d[0][0] = 0;
            d[0][1] = 0;
        } 
        for(int i = 1; i < a.length(); i++) {
            if(a[i] == 'C') {
                d[i][0] = min(d[i-1][0], d[i-1][1] + y);
            }
            if(a[i] == 'J') {
                d[i][1] = min(d[i-1][0] + x, d[i-1][1]);
            }
            if(a[i] == '?') {
                d[i][0] = min(d[i-1][0], d[i-1][1] + y);
                d[i][1] = min(d[i-1][0] + x, d[i-1][1]);
            } 
            
        }
        cout << "Case #" << k+1 << ": " << min(d[a.length()-1][0], d[a.length()-1][1]) << '\n';
    }

    return 0;
}