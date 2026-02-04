//<12738>번 : <가장 긴 증가하는 부분 수열 3>
#include <bits/stdc++.h>
using namespace std;

vector<int> lis;
int a[1000001] = {};
int n;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        int idx = lower_bound(lis.begin(), lis.end(), a[i]) - lis.begin();
        if(idx == lis.size()) lis.push_back(a[i]);
        else lis[idx] = a[i];
    }
    cout << lis.size() << '\n';

    return 0;
}