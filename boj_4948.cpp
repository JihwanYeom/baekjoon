//<4948>번 : <베르트랑 공준>
#include <bits/stdc++.h>
using namespace std;

bool isPrime(unsigned int n){
    if(n < 2)
        return false;
    for(unsigned int i = 2; i <= sqrt(n); i++)
    {
        if(n%i == 0)
            return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, cnt = 0;
    while(true)
    {
        cin >> n;
        if(n == 0)
            break;
        cnt = 0;
        for(int i = n + 1; i <= 2*n; i++)
        {
            if(isPrime(i))
                cnt++;
        }
        cout << cnt << '\n';
    }
    return 0;
}