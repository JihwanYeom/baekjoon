//<2630>번 : <색종이 만들기기>
#include <bits/stdc++.h>
using namespace std;

int n, b = 0, w = 0;
int p[128][128];

void func(int k, int x, int y)
{
    int c = p[y][x];
    bool cut = false;
    for (int i = y; i < y + k; i++)
    {
        for (int j = x; j < x + k; j++)
        {
            if (p[i][j] != c)
            {
                cut = true;
                break;
            }
        }
        if (cut) break;
    }
    if (cut)
    {
        func(k / 2, x, y);
        func(k / 2, x + k / 2, y);
        func(k / 2, x, y + k / 2);
        func(k / 2, x + k / 2, y + k / 2);
    }
    else
    {
        if (c == 1) b++;
        if (c == 0) w++;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> p[i][j];
            
    func(n, 0, 0);

    cout << w << '\n' << b << '\n';
    return 0;
}