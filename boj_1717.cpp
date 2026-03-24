//<1717>번 : <집합의 표현>
#include <iostream>
#include <vector>

using namespace std;

int parent[1000001] = {};
int n, m;

int find(int a) {
    if(parent[a]  < 0) {
        return a;
    }
    return parent[a] = find(parent[a]);
}

void uni(int a, int b) {
    int u = find(a);
    int v = find(b);
    if(u == v) return;
    parent[v] = u;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    fill(parent, parent + n + 1, -1);
    int op, a, b;
    for(int i = 0; i < m; i++) {
        cin >> op >> a >> b;
        if(op == 1) {
            if(find(a) == find(b))
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else {
            uni(a, b);
        }
    }
    
    return 0;
}
