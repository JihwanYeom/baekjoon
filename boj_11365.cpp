//<11365>번 : <!밀비 급일>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string in;
    while(true)
    {
        getline(cin, in);
        if(in == "END") return 0;
        for(int i = in.length()-1; i >= 0; i--)
            cout << in[i];
        cout << '\n';
    }

    return 0;
}