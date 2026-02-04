//<1259>번 : <팰린드롬수수>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string n;
    bool isPalindrome;
    while(true)
    {
        cin >> n;
        if(n == "0") break;
        isPalindrome = true;
        for(int i = 0; i < n.length()/2; i++)
        {
            if(n[i] != n[n.length()-1-i])
            {
                isPalindrome = false;
                break;
            }
        }
        if(isPalindrome) cout << "yes\n";
        else cout << "no\n";
    }

    return 0;
}