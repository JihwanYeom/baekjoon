//<30404>번 : <오리와 박수치는 춘배>
#include <bits/stdc++.h>
using namespace std;

bool t[1000001] = {};
int n, k;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        int in;
        cin >> in;
        t[in] = true;
    }
    int st = k-1;
    int cnt = 0;
    for(int i = 0; i < 1000001 ; i++)
    {
        if(t[i])
        {
            cnt++;
            i = i+k;
        }
    }
    cout << cnt << '\n';
    return 0;
}