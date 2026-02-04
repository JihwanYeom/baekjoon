//<4134>번 : <다음 소수>
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

    unsigned int n;
    int t;

    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> n;
        for(unsigned int j = n;;j++)
        {
            if(isPrime(j))
            {
                cout << j << endl;
                break;
            }
        }
    }
    return 0;
}