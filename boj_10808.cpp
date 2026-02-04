//<10808>번 : <알파벳 개수>
#include <bits/stdc++.h>
using namespace std;

int cnt[26] = {};
string s;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> s;
    for(int i = 0; i < s.length(); i++)
        cnt[s[i] - 'a']++;
    for(int i = 0; i < 26; i++)
        cout << cnt[i] << ' ';
    cout << '\n';

    return 0;
}