//<25706>번 : <자전거 묘기>
#include <bits/stdc++.h>
using namespace std;

long long a[200001] = {};
long long d[200001] = {};

long long n;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = n-1; i >= 0; i--) {
        if(i + 1 + a[i] >= n) {
            d[i] = 1;
            continue;
        }
        d[i] = d[i+1+a[i]] + 1;
    }

    for(int i = 0; i < n; i++)
        cout << d[i] << ' ';
    cout << '\n';
    return 0;
}
