//<1541>번 : <잃어버린 괄호>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string exp;
    getline(cin,exp);
    int max = 0, num = 0, digit = 0;
    bool sub = false;
    for(int i = 0; i <= exp.length(); i++)
    {
        if(exp[i] == '+' || exp[i] == '-' || exp[i] == '\0') 
        {
            if(sub) max -= num;
            else max += num;
            num = 0;
            if(exp[i] == '-')
                sub = true;
        }
        else
            num = num*10+(exp[i]-'0');
    }
    cout << max << '\n';
    return 0;
}