//<5585>번 : <거스름돈>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, cnt = 0;
    int money[6] = {500,100,50,10,5,1};
    cin >> n;
    m = 1000-n;
    for(int i = 0 ; i < 6; i++)
    {
        cnt += m/money[i];
        m = m % money[i];
    }
    cout << cnt << '\n';

    return 0;
}