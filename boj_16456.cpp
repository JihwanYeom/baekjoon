//<16456>번 : <하와와 대학생쨩 하와이로 가는 거시와요~>
#include <bits/stdc++.h>
using namespace std;

long long k = 1000000009;
long long d[50001][2] = {};


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    d[0][0] = 1;
    d[0][1] = 0;
    d[1][0] = 1;
    d[1][1] = 0; 
    for(int i = 2; i < n; i++) {
        d[i][0] = (d[i-1][0]%k + d[i-1][1]%k)%k ;
        d[i][1] = d[i-2][0]%k;
    }
    cout << (d[n-1][0]%k + d[n-1][1]%k)%k << '\n';
    return 0;
}