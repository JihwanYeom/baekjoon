//<11943>번 : <파일 옮기기>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, d, r;
    cin >> a >> b >> c >> d;
    r = (a + d) < (b + c) ? a + d : b + c;
    cout << r << '\n';

    return 0;
}
