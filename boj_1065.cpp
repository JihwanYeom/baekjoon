//<1065>번 : <한수>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, cnt = 0;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        string x = to_string(i);
        int d = x[1] - x[0];

        bool isArithmetic = true;
        for(int j = 0; j < x.length()-1; j++) {
            if(x[j+1] - x[j] != d) {
                isArithmetic = false;
                break;
            }
        }
        if(isArithmetic) cnt++;
    }

    cout << cnt << '\n';

    return 0;
}
