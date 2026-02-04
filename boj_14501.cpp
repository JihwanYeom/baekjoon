//<14501>번 : <퇴사>
#include <bits/stdc++.h>
using namespace std;

int n;
int t[15];
int p[15];
int d[15] = {};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> t[i] >> p[i]; 
    }

    int m = 0;
    for(int i = 0; i < n; i++) {
        if(i + t[i] < n) {
            d[i + t[i]] = max(d[i + t[i]], p[i]);
        }
        if(d[i] > m) m = d[i];
    }

    cout << m << '\n';

    return 0;
}
