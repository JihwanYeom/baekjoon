//<2740>번 : <행렬 곱셈>
#include <bits/stdc++.h>
using namespace std;

int n, m, k;
int a[100][100] = {};
int b[100][100] = {};
int c[100][100] = {};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            cin >> a[i][j];
    }
    cin >> m >> k;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < k; j++)
            cin >> b[i][j];
    }
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < k; j++)
        {
            for(int p = 0; p < m; p++)
                c[i][j] += a[i][p] * b[p][j]; 
            cout << c[i][j] << ' ';
        }
        cout << '\n';
    }
    
    return 0;
}