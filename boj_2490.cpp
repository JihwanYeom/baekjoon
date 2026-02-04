//<2490>번 : <윷놀이>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    char a[5] = {'D', 'C', 'B', 'A', 'E'};

    for(int i = 0; i < 3; i++)
    {
        int in;
        int cnt = 0;
        for(int j = 0; j < 4; j++)
        {
            cin >> in;
            if(in == 1) cnt++; 
        }
        cout << a[cnt] << '\n';
    }

    return 0;
}