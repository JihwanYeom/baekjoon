//<2576>번 : <홀수>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a[7];
    for(int i = 0; i < 7; i++)
        cin >> a[i];
    
    bool notFound = true;
    int sum = 0;
    int min_ = 100;
    for(int i = 0; i < 7; i++)
    {
        if(a[i]%2 == 1)
        {
            sum += a[i];
            min_ = min(min_, a[i]);
            notFound = false;
        }
    }

    if(notFound)
    {
        cout << "-1" << '\n';
        return 0;
    }

    cout << sum << '\n' << min_ << '\n';
    return 0;
}
