//<2309>번 : <일곱 난쟁이>
#include <bits/stdc++.h>
using namespace std;

int a[9];
int b1, b2;
int sum = 0;
int dif;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    for(int i = 0; i < 9; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    dif = sum - 100;

    sort(a, a+9);
    
    bool isEnd = false;
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            if(a[i] + a[j] == dif)
            {
                isEnd = true;
                b1 = a[i], b2 = a[j];
                break;
            }
        }
        if(isEnd)
            break;
    }

    for(int i = 0; i < 9; i++)
    {
        if(a[i] != b1 && a[i] != b2)
            cout << a[i] << '\n';
    }

    return 0;
}
