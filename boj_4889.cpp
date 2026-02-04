//<4889>번 : <안정적인 문자열>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string in;
    stack<char> s;
    int cnt;
    int i = 1;

    while(true)
    {
        getline(cin, in);
        if(in.find('-') != string::npos)
            break;

        cnt = 0;
        for(int i = 0; i < in.length(); i++)
        {
            if(in[i] == '{')
                s.push('{');
            if(in[i] == '}')
            {
                if(s.empty()) 
                {
                    s.push('{');
                    cnt++;
                }
                else s.pop();
            }
        }

        cnt += s.size()/2;

        cout << i << ". " << cnt << '\n';
        while(!s.empty()) s.pop();
        i++;
    }
    
    return 0;
}