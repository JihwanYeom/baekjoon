//<10799>번 : <쇠막대기>
#include <bits/stdc++.h>
using namespace std;

stack<char> s;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;
    int cnt = 0;
    for(int i  = 0; i < str.length()-1; i++)
    {
        if(i < str.length()-1)
        {
            if(str[i] == '(' && str[i+1] == ')')
            {
                cnt += s.size();
                i++;
            }
            else if(str[i] == '(') 
            {
                s.push(str[i]);
                cnt++;
            }
            else if(str[i] == ')')
                s.pop();
        }
    }
    cout << cnt << '\n';
    return 0;
}


