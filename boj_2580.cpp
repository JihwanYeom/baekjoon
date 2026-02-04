//<2580>번 : <스도쿠>
#include <bits/stdc++.h>
using namespace std;

int sudoku[9][9] = {};
int arr[81][2] = {};
int n = 0;
int cnt = 0;

bool isPossible(int num, int row, int col)
{
    for(int i = 0; i < 9 ; i++)
    {
        if(sudoku[i][col] == num || sudoku[row][i] == num)
            return false;
    }
    for(int i = (row/3)*3; i < (row/3+1)*3; i++)
    {
        for(int j = (col/3)*3; j < (col/3+1)*3; j++)
        {
            if(sudoku[i][j] == num)
                return false;
        }
    }
    cnt++;
    return true;
}

void func(int k)
{
    if(k == n)
    {
        for(int i = 0; i < 9; i++)
        {
            for(int j = 0; j < 9; j++)
                cout << sudoku[i][j] << ' ';
            cout << '\n';
        }
        exit(0);
    }
    int row = arr[k][0];
    int col = arr[k][1];
    for(int i = 1; i < 10; i++)
    {
        if(isPossible(i, row, col))
        {
            sudoku[row][col] = i;
            func(k+1);
            sudoku[row][col] = 0;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            cin >> sudoku[i][j];
            if(sudoku[i][j] == 0)
            {
                arr[n][0] = i;
                arr[n][1] = j;
                n++;
            }
        }
    }
    func(0);
    return 0;
}