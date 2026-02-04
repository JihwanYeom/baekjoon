//<25682>번 : <체스판 다시 칠하기 2>
#include <bits/stdc++.h>
using namespace std;

int bb[2001][2001] = {};
int wb[2001][2001] = {};
char b[2001][2001] = {};

void paint(int y, int x)
{
    if((x+y)%2 == 0)
    {
        if(b[y][x] == 'B') wb[y][x] = 1;
        if(b[y][x] == 'W') bb[y][x] = 1;
    }
    else
    {
        if(b[y][x] == 'B') bb[y][x] = 1;
        if(b[y][x] == 'W') wb[y][x] = 1;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k, min_sum = INT_MAX;
    cin >> n >> m >> k;
    for(int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> b[i][j];
            paint(i,j);
            wb[i][j] = wb[i][j] + wb[i-1][j] + wb[i][j-1] - wb[i-1][j-1]; 
            bb[i][j] = bb[i][j] + bb[i-1][j] + bb[i][j-1] - bb[i-1][j-1]; 
        }
    }

    for(int i = k; i <= n; i++)
    {
        for(int j = k; j <= m; j++)
        {
            int w_sum = wb[i][j] - wb[i-k][j] - wb[i][j-k] + wb[i-k][j-k];
            int b_sum = bb[i][j] - bb[i-k][j] - bb[i][j-k] + bb[i-k][j-k];
            min_sum = min(min_sum,min(w_sum,b_sum));
        }
    }
    cout << min_sum << '\n';
    return 0;
}