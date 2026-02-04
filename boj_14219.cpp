//<14219>번 : <막대과자 포장>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    if((n * m) % 3 == 0) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}