//<11478>번 : <서로 다른 부분 문자열의 개수>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    unordered_set<string> sub;

    cin >> s;
    for(int i = 1; i <= s.length(); i++)
    {
        for(int j = 0; j < s.length(); j++)
           sub.insert(s.substr(j, i));
    }

    cout << sub.size() << '\n';

    return 0;
}