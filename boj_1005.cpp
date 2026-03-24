//<1005>번 : <ACM Craft>
#include <iostream>
#include <vector>

using namespace std;

int t, n, k, w;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;
    while(t--) {
        vector<int> adj[1001];
        vector<int> order;
        int cost[1001] = {};
        int indeg[1001] = {};
        cin >> n >> k;
        for(int i = 1; i <= n; i++) {
            cin >> cost[i];
        }
        for(int i = 0; i < k; i++) {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            indeg[y]++;
        }
        cin >> w;
        for(int i = 0; i < n; i++) {
            for(int j = 1; j <= n; j++) {
                if(indeg[j] == 0) {
                    order.push_back(j);
                    for(auto v : adj[j]) {
                        indeg[v]--;
                    }
                    indeg[j] = -1;
                }
            }
        }

        int total = 0;
        for(int i = 0; i < n; i++) {
            if(order[i] == w) break;
            total += cost[order[i]];
        }
        cout << total << '\n';
    }

    return 0;
}