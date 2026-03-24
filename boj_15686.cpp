//<15686>번 : <치킨 배달>
#include <iostream>
#include <vector>

using namespace std;

bool remain[13] = {};
vector<pair<int, int>> home;
vector<pair<int, int>> chicken;
int n, m, min_dist = 100000000;

void func(int i, int r) {
    if(r == m) {
        int dist[2501];
        fill(dist, dist+2500, 1000);
        for(int j = 0; j < home.size(); j++) {
            for(int k = 0; k < chicken.size(); k++) {
                if(!remain[k]) continue;
                int d = abs(chicken[k].first - home[j].first) + abs(chicken[k].second - home[j].second);
                dist[j] = min(dist[j], d); 
            }
        }
        int total_dist = 0;
        for(int j = 0; j < home.size(); j++) {
            total_dist += dist[j];
        }
        min_dist = min(min_dist, total_dist);
        return;
    }
    if(i == chicken.size()) {
        return;
    }

    func(i + 1, r);
    remain[i] = true;
    func(i + 1, r + 1);
    remain[i] = false;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    int in;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> in;
            if(in == 1) {
                home.push_back({i, j});
            }
            if(in == 2) {
                chicken.push_back({i, j});
            }
        }
    }
    func(0, 0);
    cout << min_dist << '\n';

    return 0;
}
