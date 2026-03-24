//<17219>번 : <비밀번호 찾기>
#include <bits/stdc++.h>
using namespace std;

map<string, string> pwMap;
int n, m;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    string a, p;
    for(int i = 0; i < n; i++) {
        cin >> a >> p;
        pwMap.insert({a, p});
    }

    for(int i = 0; i <  m; i++) {
        cin >> a;
        cout << pwMap.find(a)->second << '\n';
    }

    return 0;
}