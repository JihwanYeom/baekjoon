//<20492>번 : <세금>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int a = n/100 * 78;
    int b = n/5;
    b = b/100 * 78;
    b = b + (n/5)*4;
    cout << a << ' ' <<  b << '\n'; 

    return 0;
}