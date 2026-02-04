//<10250>번 : <ACM 호텔>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t,h,w,n;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> h >> w >> n;
        if(n%h == 0) cout << (h*100) + (n/h) << '\n';
        else cout << (n%h*100)+(n/h+1) << '\n';
    }

    return 0;
}