//<4195>번 : <친구 네트워크>
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> p(300001, -1);

int t, f;

int find(int a) {
    if(p[a] < 0) {
        return a;
    }
    return p[a] = find(p[a]);
}

int siz(int a) {
    int u = find(a);
    return -p[u];
}


int uni(int a, int b) {
    int u = find(a);
    int v = find(b);

    if(u == v) return false;
    p[u] += p[v];
    p[v] = u;

    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;
    while(t--) {
        unordered_map<string, int> idx;
        p = vector<int>(300001, -1);

        cin >> f;
        for(int i = 0; i < f; i++) {
            string a, b;
            cin >> a >> b;
            if(idx.find(a) == idx.end())
                idx[a] = idx.size();
            if(idx.find(b) == idx.end())
                idx[b] = idx.size();
            int ia = idx[a];
            int ib = idx[b];
            uni(ia, ib);
            cout << siz(ia) << '\n';
        }
    }

    return 0;
}