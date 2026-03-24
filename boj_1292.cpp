//<1292>번 : <쉽게 푸는 문제>
#include <bits/stdc++.h>
using namespace std;

int ar[1001] = {};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, n = 1, m = 0;
    for(int i = 1; i <= 1000; i++) {
        ar[i] = n;
        m++;
        if(m == n) {
            m = 0;
            n++;
        }
    }
    cin >> a >> b;
    int s = 0;
    for(int i = a; i <= b; i++) {
        s += ar[i];
    }
    cout << s << '\n';
    return 0;
}