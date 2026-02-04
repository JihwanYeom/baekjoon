//<1931>번 : <회의실 배정>
#include <bits/stdc++.h>
using namespace std;

int n, k, cnt;
pair<int, int> t[100000];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 0 ; i < n; i++)
        cin >> t[i].second >> t[i].first;
    
    sort(t, t+n);
    k = 0; cnt = 0;
    for(int i = 0; i < n; i++)
    {
        if(t[i].second >= k)
        {
            cnt++;
            k = t[i].first;
        }
    }
    cout << cnt << '\n';
    return 0;
}