//<1780>번 : <종이의 개수>
#include <bits/stdc++.h>
using namespace std;

int n;
int cnt[3] = {};
int p[2200][2200];

void func(int x, int y, int k)
{
    int first = p[y][x];
    bool cut = false;
    for (int i = y; i < y+k; i++)
    {
        for (int j = x; j < x+k; j++)
        {
            if (p[i][j] != first)
            {
                cut = true;
                break;
            }
        }
        if (cut) break;
    }
    if (cut)
    {
        for(int i = 0; i < 3; i++)
            for(int j = 0; j < 3; j++)
                func(x + j * k / 3, y + i * k  / 3, k / 3);
    }
    else cnt[first+1]++;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> p[i][j];

    func(0, 0, n);
    for(int i = 0; i < 3; i++)
        cout << cnt[i] << '\n';

    return 0;
}