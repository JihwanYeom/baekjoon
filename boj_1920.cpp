//<1920>번 : <수 찾기
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    long long num;
    cin >> n;
    unordered_set<int> s;
    for(int i = 0; i< n; i++){
        cin >> num;
        s.insert(num);
    }
    cin >> m;
    for(int i = 0; i < m; i++) {
        cin >> num;
        if(s.find(num) != s.end())
            cout << 1 << '\n';
        else
            cout << 0 << '\n';
    }
    return 0;
}