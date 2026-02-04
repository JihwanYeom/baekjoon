//<1806>번 : <부분합>
#include <bits/stdc++.h>
using namespace std;

long long a[100000];
long long n, s;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> s;
    for(int i = 0 ; i < n; i++)
        cin >> a[i];

    int result = INT_MAX;
    int j = 0;
    long long sum = a[0];
    for(int i = 0; i < n; i++)
    {
        while(j < n && sum < s) 
        {
            j++;
            if(j != n) sum += a[j];
        }
        if(j == n) break;
        result = min(result, j - i + 1);
        sum -= a[i];
    }
    if(result == INT_MAX) result = 0;
    cout << result << '\n';
    return 0;
}