//<2577>번 : <숫자의 개수>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, n;
    int ar[10] = {};
    cin >> a >> b >> c;
    n = a*b*c;
    
    while(n != 0)
    {
        ar[n%10]++;
        n/=10;
    }
    for(int i = 0 ; i < 10; i++)
        cout << ar[i] << '\n';
    return 0;
}