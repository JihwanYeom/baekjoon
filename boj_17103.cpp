//<17103>번 : <골드바흐 파티션>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    bool* sieve = new bool[1000001];
    for(int i = 0; i <= 1000000; i++)
        sieve[i] = true;
    sieve[0] = false;
    sieve[1] = false;
    for(int i = 2; i <= 1000; i++)
    {
        if(sieve[i] != true)
            continue;
        for(int j = 2; i*j <= 1000000; j++)
            sieve[i*j] = false;
    }

    int T, N, cnt;
    cin >> T;
    for(int i = 0 ; i < T; i++)
    {
        cin >> N;
        cnt = 0;
        for(int j = 0; j <= N/2; j++)
        {
            if(sieve[j] && sieve[N-j])
                cnt++;
            else
                continue;
        }
        cout << cnt << '\n';
    }
    return 0;
}