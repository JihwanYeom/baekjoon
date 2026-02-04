//<1264>번 : <모음의 개수>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    string v = "aeiouAEIOU";
    
    while(true)
    {
        int cnt = 0;
        getline(cin,s);
        if(s.compare("#") == 0)
            break;

        for(int i = 0; s[i]; i++)
            cnt += (v.find(s[i]) != string::npos);

        cout << cnt << '\n';
    }
    

    return 0;
}