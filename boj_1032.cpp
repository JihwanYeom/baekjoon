//<1032>번 : <명령 프롬프트>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string s, r;

    cin >> n >> r;
    for(int i = 0; i < n-1; i++) {
        cin >> s;
        for(int j = 0; j < r.length(); j++) {
            if(r[j] != s[j]) r[j] = '?';
        }
    }

    cout << r << '\n';
    return 0;
}
