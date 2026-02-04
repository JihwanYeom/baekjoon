//<12852>번 : <1로 만들기 2>
#include <bits/stdc++.h>
#define INF 10000000
using namespace std;


int n;
int d[1000001] = {};
int pre[1000001] = {};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    fill(d, d+n+1, INF);

    d[1] = 0;

    for(int i = 1; i <= n; i++) {
        if(i + 1 <= 1000000 && d[i] + 1 < d[i+1]) {
            d[i+1] = d[i] + 1;
            pre[i+1] = i;
        }

        if(i * 2 <= 1000000 && d[i] + 1 < d[i*2]) {
            d[i*2] = d[i] + 1;
            pre[i*2] = i;
        }

        if(i * 3 <= 1000000 && d[i] + 1 < d[i*3]) {
            d[i*3] = d[i] + 1;
            pre[i*3] = i;
        }
    }
    cout << d[n] << '\n';

    int p = n;
    while(p > 0) {
        cout << p << ' ';
        p = pre[p];
    }
    return 0;
}
