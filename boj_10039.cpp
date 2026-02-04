//<10039>번 : <평균 점수>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 0, m;
    for(int i = 0; i < 5; i++)
    {
        cin >> m;
        if(m < 40) m = 40;
        n += m;
    }
    cout << n/5 << '\n';
    return 0;
}