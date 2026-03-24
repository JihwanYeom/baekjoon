//<1167>번 : <트리의 지름>
#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> adj[100001];
int p[100001] = {};
int d[100001] = {};
int n;

int dfs(int a) {
    int max1 = 0, max2 = 0;
    for(pair<int, int> e : adj[a]) {
        int b = e.first;
        int w = e.second;
        if(p[a] == b) continue;
        p[b] = a;
        int k = dfs(b) + w;
        if(k > max1) {
            max2 = max1;
            max1 = k;
        }
        else if(k > max2) {
            max2 = k;
        }
    }   
    if(max1 == 0) {
        d[a] = 0;
        return 0;
    }
    else if(max2 == 0) {
        d[a] = max1;
        return max1;
    }
    d[a] = max1 + max2;
    return max1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    
    for(int i = 0; i < n; i++) {
        int a, b = 0, w = 0;
        cin >> a;
        while(w != -1) {
            cin >> b;
            if(b == -1) break;
            cin >> w;
            adj[a].push_back({b, w});
        }
    }
    dfs(1);
    int m = 0;
    for(int i = 1; i <= n; i++) {
        m = max(d[i], m);
    }
    cout << m << '\n';

    return 0;
}