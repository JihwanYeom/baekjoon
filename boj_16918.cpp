//<16918>번 : <봄버맨 ->
#include <bits/stdc++.h>
using namespace std;

pair<bool, int> board[200][200];

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int r, c, n;

void update(int t)
{
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(t%2 == 1 && board[i][j].first && board[i][j].second == 0)
            {
                board[i][j].first = false;
                for(int k = 0; k < 4; k++)
                {
                    int nx = j + dx[k];
                    int ny = i + dy[k];
                    if(nx < 0 || ny < 0 || nx > c-1 || ny > r-1)
                        continue;
                    
                    if(board[ny][nx].first && board[ny][nx].second == 0)
                        continue;
                    
                    board[ny][nx].first = false;
                }
            }

            if(t%2 == 0 && !board[i][j].first)
            {
                board[i][j].first = true;
                board[i][j].second = 3;
            }

            board[i][j].second--;
        }
    }
}

void print()
{
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(board[i][j].first) cout << 'O';
            else cout << '.';
        }
        cout << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> r >> c >> n;
    for(int i = 0; i < r; i++)
    {
        string in;
        cin >> in;
        for(int j = 0; j < c; j++) {
            board[i][j] = {in[j] == 'O',1};
        }
    }
    for(int t = 2; t <= n; t++)
        update(t);
    print();

    return 0;
}