//<15829>번 : <Hashing>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    char str[50];
    long long n,m = 1234567891, sum = 0, r = 1;
    cin >> n;
    for(int i = 0 ; i < n; i++)
    {
        cin >> str[i];
        sum = (sum+(((int)str[i]-'a'+1)*r)%m)%m;
        long long next_r = 0;
        for(int j = 0; j < 31; j++)
            next_r = (next_r + r)%m;
        r = next_r;
    }
    cout << sum << '\n';
    return 0;
}