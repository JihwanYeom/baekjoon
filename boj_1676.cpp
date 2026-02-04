//<1676>번 : <팩토리얼 0의 개수>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 0, f = 0, t = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int m = i;
        while(m%5 == 0)
        {
            m /= 5;
            f++;
        }
        while(m%2 == 0)
        {
            m /= 2;
            t++;
        }
    }
    cout << min(t,f) << '\n';
    return 0;
}