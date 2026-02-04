//<1644>번 : <소수의 연속합>
#include <bits/stdc++.h>
using namespace std;

bool sieve[4000001] = {};
vector<int> prime;
int n, m;

void init()
{
    fill(sieve, sieve+n+1, true);
    sieve[1] = false;
    sieve[2] = true;
    m = (int)sqrt(n);
    for(int i = 2; i <= m; i++)
    {
        if(!sieve[i]) continue;
        for(int j = 2; i*j <= n; j++)
            sieve[i*j] = false;
    }
    for(int i = 2; i <= n; i++)
        if(sieve[i]) prime.push_back(i);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    if(n == 1)
    {
        cout << 0 << '\n';
        return 0;
    }
    init();
    
    int size = prime.size();
    int sum = prime[0];
    int cnt = 0;

    int j = 0;
    for(int i = 0; i <= j; i++)
    {
        while(j < size-1 && sum < n)
        {
            j++;
            sum += prime[j];
        }
        if(sum == n) cnt++;
        sum -= prime[i];
    }

    cout << cnt << '\n';
    return 0;
}