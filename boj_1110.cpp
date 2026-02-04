//<1110>번 : <더하기 사이클>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, cnt = 0;
    cin >> n;
    m = n;
    while(cnt == 0 || m != n)
    {
        int k = m/10 + m%10;
        m = m%10*10 + k%10;
        cnt++;
    }
    cout << cnt << '\n';
    return 0;
}