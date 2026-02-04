//<33557>번 : <곱셈을 누가 이렇게 해>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    long long a, b;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        string s = "";
        
        long long c1 = a*b;
        while(a != 0 && b != 0)
        {
            long long c = (a%10) * (b%10);
            a/=10; b/= 10;
            s = to_string(c) + s;
        }
        if(a != 0) s = to_string(a) + s;
        if(b != 0) s = to_string(b) + s;
        long long c2 = stoll(s);

        if(c1 == c2) cout << 1 << '\n';
        else cout << 0 << '\n';
        
    }

    return 0;
}