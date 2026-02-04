//<10987>번 : <모음의 개수>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    string v = "aeiou";
    
    int cnt = 0;
    cin >> s;
    for(int i = 0; s[i]; i++)
        cnt += (v.find(s[i]) != string::npos);

    cout << cnt << '\n';

    return 0;
}