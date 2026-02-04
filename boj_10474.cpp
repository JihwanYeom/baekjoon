//<10474>번 : <분수좋아해?>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    while(true) {
        cin >> n >> m;
        if(n == 0 && m == 0) {
            break;
        }
        cout << n/m << ' ' << n%m << " / " << m << '\n';
    }

    return 0;
}