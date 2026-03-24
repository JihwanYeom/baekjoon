//<20040>번 : <사이클 게임>
#include <iostream>
#include <vector>

using namespace std;

int n, m, answer;
vector<int> p(500000, -1);

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

    cin >> n >> m;
    answer = 0;
    for(int i = 1; i <= m; i++) {
        int a, b;
        cin >> a >> b;
        if(!uni(a, b) && answer == 0) {
            answer = i;
        }
    }
    cout << answer << '\n';

    return 0;
}