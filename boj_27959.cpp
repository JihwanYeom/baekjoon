//<27959>번 : <초코바>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    if(n*100 < m) cout << "No\n";
    else cout << "Yes\n";

    return 0;
}