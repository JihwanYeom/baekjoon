//<1012>번 : <유기농 배추>
#include <bits/stdc++.h>
using namespace std;

int t, n, m, k, cnt;
bool isCount = false;

bool field[50][50] = {};
bool visited[50][50] = {};

void dfs(int y, int x)
{
    if(!field[y][x] || visited[y][x]) return;
    
    isCount = true;
    visited[y][x] = true;
    if(x > 0) dfs(y, x-1);
    if(x < m-1) dfs(y, x+1);
    if(y > 0) dfs(y-1, x);
    if(y < n-1) dfs(y+1, x);

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;
    for(int p = 0; p < t; p++)
    {
        cin >> m >> n >> k;
        int x, y;
        cnt = 0;
        for(int i = 0; i < k; i++)
        {
            cin >> x >> y;
            field[y][x] = true;
        }

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                dfs(i,j);
                if(isCount)
                {
                    cnt++;
                    isCount = false;
                }
            }
        }

        cout << cnt << '\n';

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                field[i][j] = false;
                visited[i][j] = false;
            }
        }
    }

    return 0;
}
