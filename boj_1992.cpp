//<1992>번 : <쿼드트리>
#include <bits/stdc++.h>
using namespace std;

int n;
char a[64][64];
void func(int x, int y, int k)
{
    char first = a[y][x];
    bool divide = false;
    for (int i = y; i < y + k; i++)
    {
        for (int j = x; j < x + k; j++)
        {
            if (a[i][j] != first)
            {
                divide = true;
                break;
            }
        }
        if (divide) break;
    }
    if (divide)
    {
        cout << '(';
        func(x, y, k / 2);
        func(x + k / 2, y, k / 2);
        func(x, y + k / 2, k / 2);
        func(x + k / 2, y + k / 2, k / 2);
        cout << ')';
    }
    else
        cout << first;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    }
    func(0, 0, n);

    return 0;
}