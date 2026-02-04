//<14626>번 : <ISBN>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int sum = 0;
    int p;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] >= '0' && s[i] <= '9')
        {
            int w = 1 + (i%2)*2;
            sum += (s[i] - '0')*w;
        }
        if(s[i] == '*')
            p = i;
    }
    
    int r;
    if(p%2 == 1) 
    {
        for(int i = 0; i < 10; i++)
        {
            if((sum + i*3)%10 == 0)
            {
                r = i;
                break;
            }

        }
    }
    else r = 10 - sum%10;

    cout << r << '\n';

    return 0;
}
