//<4470>번 : <줄번호>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string line;
    cin >> n;
    getline(cin, line);
    for(int i = 1; i <= n; i++) {
        getline(cin, line);
        cout << i << ". " << line << '\n';
    }

    return 0;
}
