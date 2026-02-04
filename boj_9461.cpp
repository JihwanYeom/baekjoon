//<9461>번 : <파도반 수열>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t;
    cin >> t;
    long long ar[101] = {};
    ar[1] = ar[2] = ar[3] = 1;
    ar[4] = ar[5] = 2;
    ar[6] = 3; ar[7] = 4; ar[8] = 5;
    ar[9] = 7; ar[10] = 9;

    while(t--)
    {
        cin >> n;
        if(ar[n] == 0)
        {
            for(int i = 11; i <= n; i++)
                ar[i] = ar[i-1] + ar[i-5];
        }
        cout << ar[n] << '\n';
    }
    
    return 0;
}