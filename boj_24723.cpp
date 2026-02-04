//<24723>번 : <녹색거탑>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, p = 1;
    cin >> n;
    for(int i = 0; i < n; i++)
        p*=2;
    cout << p << '\n';
    return 0;
}