//<2845>번 : <파티가 끝나고 난 뒤>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b;
    int c[5];
    cin >> a >> b;
    for(int i = 0; i < 5; i++)
    {
        cin >> c[i];
        cout << c[i]-a*b << ' ';
    }

    return 0;
}
