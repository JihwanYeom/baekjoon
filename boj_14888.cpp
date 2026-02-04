//<14888>번 : <연산자 끼워넣기기>
#include <bits/stdc++.h>
using namespace std;

int arr[11];
int op[4] = {};
int _max = -1000000000;
int _min = 1000000000;
int n;

int operate(int op, int n1, int n2)
{
    if(op == 0) return n1+n2;
    if(op == 1) return n1-n2;
    if(op == 2) return n1*n2;
    if(op == 3) return n1/n2;
    return 0;
}

void func(int i, int num)
{
    if(i == n-1)
    {
        if(num < _min) _min = num;
        if(num > _max) _max = num;
        return;
    }
    for(int k = 0; k < 4; k++)
    {
        if(op[k] != 0)
        {
            op[k]--;
            func(i+1, operate(k,num,arr[i+1]));
            op[k]++;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 0; i < 4; i++)
        cin >> op[i];
    func(0,arr[0]);
    cout << _max << '\n' << _min << '\n';
    
    return 0;
}