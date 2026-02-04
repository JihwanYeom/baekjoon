//<15650>번 : <N과 M (2)>
#include <bits/stdc++.h>
using namespace std;

bool selected[9] = {};
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
        if(selected[i] == false)
        {
            selected[i] = true;
            arr[k] = i;
            func(k+1, i+1);
            selected[i] = false;
        }
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