//<4949>번 : <균형잡힌 세상>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> s;
    string str;
    while(true)
    {
        getline(cin,str);
        if(str == ".")
            break;
        for(int i = 0; str[i] != '.'; i++)
        {
            if(!s.empty() && 
            ((s.back() == '(' && str[i] == ')') || 
            (s.back() == '[' && str[i] == ']'))) 
            { s.pop_back(); }
            else if(str[i] == '[' || str[i] == ']' || 
                    str[i] == '(' || str[i] == ')')
            { s.push_back(str[i]); }
        }
        if (s.empty()) {cout << "yes\n";}
        else {cout << "no\n"; s.clear();}
    }

    return 0;
}