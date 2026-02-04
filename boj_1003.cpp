//<1003>번 : <피보나치 함수>
#include <bits/stdc++.h>
using namespace std;

int d[41];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    d[0] = 0;
    d[1] = 1;
    for(int i = 2; i < 41; i++) {
        d[i] = d[i-1] + d[i-2];
    }
    int n, t;
    
    cin >> t;
    while(t--) {
        cin >> n;
        if(n == 0) cout << "1 0" << '\n';
        else cout << d[n-1] << ' ' << d[n] << '\n';
    }
    return 0;
}
