//<1075>번 : <나누기>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, f;
    cin >> n >> f;
    n = n/100 * 100;
    for(int i = n; i <= n + 99; i++) {
        if(i%f == 0) {
            printf("%02d\n", i%100);
            return 0;
        }
    }

    return 0;
}