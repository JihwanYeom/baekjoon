//<1009>번 : <분산처리>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long t, a, b;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        int r = a;
        int key = r%10;
        int cnt = 0;
        for(int i = 0; i < b-1; i++) {
            r = (r*a)%10;
            cnt++;
            if(r == key) break;
        }
        
        if(r == 0) r = 10;
        cout << r << '\n';
    }

    return 0;
}