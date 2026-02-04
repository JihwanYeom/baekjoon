//<25372>번 : <성택이의 은밀한 비밀번호>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string s;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> s;
        if(s.length() >= 6 && s.length() <=9)
            cout << "yes\n";
        else
            cout << "no\n";
    }
    

    return 0;
}
