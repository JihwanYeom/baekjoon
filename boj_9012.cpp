//<9012>번 : <괄호>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    vector<char> s;

    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        for(int j = 0; str[j]; j++)
        {
            
            if(!s.empty() && (str[j] == s.back()+1))
                s.pop_back();
            else
                s.push_back(str[j]);
        }
        if(s.empty()) cout << "YES\n";
        else cout << "NO\n"; s.clear();;
        
    }

    return 0;
}
