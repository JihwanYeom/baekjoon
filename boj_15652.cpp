//<15652>번 : <N과 M (4)>
#include <bits/stdc++.h>
using namespace std;

int arr[9] = {};
int n, m;

void func(int k, int l)
{
    if(k == m)
    {
        for(int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }
    for(int i = l; i <= n; i++)
    {
        arr[k] = i;
        func(k+1, i);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    func(0, 1);
    return 0;
}