//<11945>번 : <뜨거운 붕어빵>
#include <bits/stdc++.h>
using namespace std;

string s[10];
int n, m;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    for(int i = 0; i < n; i++)
        cin >> s[i];

    for(int i = 0; i < n; i++){
        for(int j = m-1; j >= 0; j--)
            cout << s[i][j];
        cout << '\n';
    }

    return 0;
}
