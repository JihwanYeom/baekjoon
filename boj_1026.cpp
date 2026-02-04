//<1026>번 : <보물>
#include <bits/stdc++.h>
using namespace std;

vector<int> a;
vector<int> b;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, in, s = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> in;
        a.push_back(in);
    }
    for(int i = 0; i < n; i++) {
        cin >> in;
        b.push_back(in);
    }
    sort(a.begin(), a.end(), greater<>());
    sort(b.begin(), b.end());
    
    for(int i = 0; i < n; i++) 
        s += a[i] * b[i];
    
    cout << s << '\n';

    return 0;
}
