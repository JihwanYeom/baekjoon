//<5522>번 : <카드 게임>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int sum = 0, n = 0;
    for(int i = 0; i < 5; i++)
    {
        cin >> n;
        sum += n;
    }
    cout << sum << '\n';

    return 0;
}