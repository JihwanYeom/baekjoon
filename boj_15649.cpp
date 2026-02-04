//<15649>번 : <N과 M (1)>
#include <bits/stdc++.h>
using namespace std;

bool selected[9] = {};
int arr[9] = {};
int n, m;

void func(int k)
{
    if(k == m)
    {
        for(int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }
    for(int i = 1; i <= n; i++)
    {
        if(selected[i] == false)
        {
            selected[i] = true;
            arr[k] = i;
            func(k+1);
            selected[i] = false;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    func(0);
    return 0;
}