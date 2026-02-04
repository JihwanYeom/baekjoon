//<2156>번 : <포도주 시식>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int w[10000];
    int d[10000];
    int n;
    cin >> n;
    for(int i = 0 ; i < n; i++)
        cin >> w[i];
    
    d[0] = w[0];
    d[1] = w[0] + w[1];
    d[2] = max(w[0]+w[1],w[2] + max(w[0],w[1]));
    for(int i = 3; i < n; i++)
        d[i] = max(d[i-3]+w[i-1]+w[i], max(d[i-2] + w[i],d[i-1]));

    cout << d[n-1] << '\n';
    return 0;
}

