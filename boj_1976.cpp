//<1976>번 : <여행 가자>
#include <iostream>
#include <vector>

using namespace std;

vector<int> p(201, -1);

int find(int a) {
    if(p[a] == -1) {
        return a;
    }
    return p[a] = find(p[a]);
}

bool uni(int a, int b) {
    int u = find(a);
    int v = find(b);

    if(u == v) 
        return false;

    p[v] = u;
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            int link;
            cin >> link;
            if(link == 1) uni(i, j);
        }
    }
    int plan, k;
    cin >> plan;
    for(int i = 1; i < m; i++) {
        cin >> k;
        if(find(k) != find(plan)) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}