//<2522>번 : <별 찍기 - 12>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n-1-i; j++)
            cout << ' ';
        for(int j = 0; j <= i; j++)
            cout << '*';
        cout << '\n';
    }
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j <= i; j++)
            cout << ' ';
        for(int j = 0; j < n-1-i; j++)
            cout << '*';
        cout << '\n';
    }

    return 0;
}