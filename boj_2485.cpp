//<2485>번 : <가로수>
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(a%b == 0)
        return b;
    return gcd(b, a%b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, interval, max = 0,min = 1000000000, input;
    cin >> n;

    int *pos = new int[n];

    for(int i = 0; i < n; i++)
    {
        cin >> pos[i];
        if(max < pos[i])
            max = pos[i];
        if(min > pos[i])
            min = pos[i];
    }
    interval = max-min;
    
    for(int i = 0; i < n-1; i++)
        interval = gcd(interval, pos[i+1] - pos[i]);

    cout << (max-min)/interval - n + 1 << '\n';

    return 0;
}