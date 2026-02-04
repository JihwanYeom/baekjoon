//<4673>번 : <셀프 넘버>
#include <bits/stdc++.h>
using namespace std;

bool isSelfNumber[10001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    fill(isSelfNumber, isSelfNumber+10001, true);

    for(int i = 1; i < 10001; i++)
    {
        int s = 0;
        int n = i;
        while(n != 0)
        {
            s += n%10;
            n /= 10;
        }
        if(i + s < 10001)
            isSelfNumber[i+s] = false;
            
        if(isSelfNumber[i])
            cout << i << '\n';
    }

    return 0;
}
