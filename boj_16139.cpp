//<16139>번 : <인간 컴퓨터 상호작용>
#include <bits/stdc++.h>
using namespace std;

int l, r, q;
char a;
string str;
int cnt[200000][26] = {};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> str;

    cnt[0][str[0]-'a'] = 1;
    for(int i = 1; i < str.length(); i++)
    {
        for(int j = 0; j < 26; j++){
            cnt[i][j] = cnt[i-1][j];
            if(j == str[i]-'a')
                cnt[i][j]++;
        }
    }

    cin >> q;
    for(int i = 0; i < q; i++)
    {
        cin >> a >> l >> r;
        if(l == 0)
            cout << cnt[r][a-'a'] << '\n';
        else
            cout << cnt[r][a-'a'] - cnt[l-1][a-'a'] << '\n';
    }
    return 0;
}
