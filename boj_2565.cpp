//<2565>번 : <전깃줄>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, max = 1;
    cin >> n;
    vector<pair<int,int>> v(n);
    vector<int> d(n);

    for(int i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second;
    
    sort(v.begin(), v.end());

    for(int i = 0; i < n; i++)
    {
        d[i] = 1;
        for(int j = 0; j < i; j++)
        {
            if(v[j].second < v[i].second && d[j]+1 > d[i])
                d[i] = d[j]+1;
        }
        if(max < d[i]) max = d[i];
    }
    cout << n-max << '\n';
    return 0;
}

/*


*/