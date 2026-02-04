//<5596>번 : <시험 점수>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a = 0, b = 0, in;

    for(int i = 0; i < 4; i++) {
        cin >> in;
        a += in;
    }

    for(int i = 0; i < 4; i++) {
        cin >> in;
        b += in;
    }

    int r = a >= b ? a : b;
    cout << r << '\n';

    return 0;
}
