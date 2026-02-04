//<17298>번 : <오큰수>
#include <bits/stdc++.h>
using namespace std;

stack<pair<int, int>> s;
int a[1000000];
int nge[1000000];
int n;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < n; i++)
    {
        while(!s.empty() && s.top().first < a[i]) 
        {
            int idx = s.top().second;
            nge[idx] = a[i];
            s.pop();
        }
        s.push({a[i], i});
    }
    while(!s.empty()) 
    {
        int idx = s.top().second;
        nge[idx] = -1;
        s.pop();
    }
    for(int i = 0; i < n; i++)
        cout << nge[i] << ' ';
    cout << '\n';
    return 0;
}