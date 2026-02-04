//<30036>번 : <INK>
#include <bits/stdc++.h>
using namespace std;

char stage[100][100];

int I, N, K;
string color;
int x, y, ink = 0, idx = 0;;

void print()
{
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(i == y && j == x)
            {
                cout << '@'; 
                continue;
            }
            cout << stage[i][j];
        }
        cout << '\n';
    }   
}

void update(char cmd)
{
    if(cmd == 'U')
    {
        if(y > 0 && stage[y-1][x] == '.') y--;
    }
    if(cmd == 'D')
    {
        if(y < N-1 && stage[y+1][x] == '.') y++;
    }
    if(cmd == 'L')
    {
        if(x > 0 && stage[y][x-1] == '.') x--;
    }
    if(cmd == 'R')
    {
        if(x < N-1 && stage[y][x+1] == '.') x++;
    }
    if(cmd == 'j')
        ink++;
    if(cmd == 'J')
    {
        for(int i = y-ink; i <= y+ink; i++)
        {
            for(int j = x-ink; j <= x+ink; j++)
            {
                if(i > N-1 || i < 0 || j > N-1 || j < 0)
                    continue;
                
                if(stage[i][j] != '.' && abs(x - j) + abs(y - i) <= ink)
                    stage[i][j] = color[idx];
            }
        }
        ink = 0;
        idx = (idx+1)%I;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> I >> N >> K;
    cin >> color;
    for(int i = 0; i < N; i++)
    {
        string in;
        cin >> in;
        for(int j = 0; j < N; j++) {
            if(in[j] == '@'){
                x = j; y = i;
                stage[i][j] = '.';
                continue;
            }
            stage[i][j] = in[j];
        }
    }

    string cmd;
    cin >> cmd;
    for(int i = 0; i < K; i++)
        update(cmd[i]);
    print();

    return 0;
}