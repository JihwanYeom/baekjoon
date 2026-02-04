//<1037>번 : <약수>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, in, max = 0, min = 10000000;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> in;
        if(max < in) max = in;
        if(min > in) min = in;
    }
    cout << max*min << '\n';
    return 0;
}