//<16815>번 : <Star in Parentheses>
#include <bits/stdc++.h>
using namespace std;

stack<pair<char, bool>> s;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string in;
    bool isAfterStar = false;
    int cnt = 0;
    cin >> in;
    for(int i = 0; i < in.length(); i++)
    {
        if(in[i] == '*')
            isAfterStar = true;
        
        if(in[i] == '(')
            s.push({in[i], isAfterStar});

        if(in[i] == ')')
        {
            pair<char, bool> p = s.top();
            s.pop();
            if(isAfterStar && !p.second)
                cnt++;
        }
    }
    cout << cnt << '\n';

    return 0;
}
