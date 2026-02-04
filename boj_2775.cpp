//<2775>번 : <부녀회장이 될테야>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, k, n;
    int apt[15][15] = {};
    for(int i = 1; i < 15; i++)
        apt[0][i] = i;
    for(int i = 1; i < 15; i++)
    {
        for(int j = 1; j < 15; j++)
        {
            apt[i][j] = 0;
            for(int k = 1; k <= j; k++)
                apt[i][j] += apt[i-1][k];
        }
    }
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> k >> n;
        cout << apt[k][n] << '\n';
    }

    return 0;
}
