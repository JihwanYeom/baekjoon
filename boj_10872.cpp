//<10872>번 : <팩토리얼>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, p = 1;
    cin >> n;
    for(int i = 1; i <= n; i++)
        p*=i;
    cout << p << '\n';

    return 0;
}