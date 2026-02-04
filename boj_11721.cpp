//<11721>번 : <열 개씩 끊어 출력하기>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    for(int i = 0; s[i]; i++)
    {
        cout << s[i];
        if(i%10 == 9)
            cout << '\n';
    }
    return 0;
}