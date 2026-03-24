//<9372>번 : <상근이의 여행>
#include <iostream>
#include <vector>

using namespace std;

int t, n, m;
vector<int> p(1001, -1);

int find(int a) {
    if(p[a] == -1) {
        return a;
    }
    return p[a] = find(p[a]);
}

bool uni(int a, int b) {
    int u = find(a);
    int v = find(b);
    if(u == v) return false;
    p[v] = u;
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;
    while(t--) {
        p = vector<int>(1001, -1);
        cin >> n >> m;
        int a, b, cnt = 0;
        for(int i = 0; i < m; i++) {
            cin >> a >> b;
            if(find(a) != find(b)) {
                cnt++;
                uni(a, b);
            }
        }
        cout << cnt << '\n';
    }

    return 0;
}
