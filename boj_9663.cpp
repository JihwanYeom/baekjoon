//<9663>번 : <N-Queen>
#include <bits/stdc++.h>
using namespace std;
int n, cnt = 0;
int arr[15];

bool isPossible(int row, int col)
{
    for(int i = 0; i < row; i++)
    {
        if(arr[i] == col || (abs(arr[i] - col) == abs(i-row))) // 세로 대각
            return false;
    }
    return true;
}

void func(int row)
{
    if(row == n)
    {
        cnt++; return;
    }
    for(int i = 0; i < n; i++)
    {
        if(isPossible(row, i))
        {
            arr[row] = i;
            func(row+1);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    func(0);
    cout << cnt << '\n';

    return 0;
}