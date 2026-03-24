//<14938>번 : <서강그라운드>
#include <iostream>
#include <vector>
#define INF 100000000

using namespace std;

int n, m, r, t;
int item[101];
int area[101][101];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m >> r;
    for(int i = 1; i <= n; i++) {
        cin >> item[i];
    }

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == j) area[i][j] = 0;
            else area[i][j] = INF;
        }
    }

    for(int i = 0; i < r; i++) {
        int a, b, w;
        cin >> a >> b >> w;
        area[a][b] = w;
        area[b][a] = w; 
    }

    for(int k = 1; k <= n; k++) {
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                area[i][j] = min(area[i][j], area[i][k] + area[j][k]);
            }
        }
    }

    int max_total = 0;
    for(int i = 1; i <= n; i++) {
        int total = 0;
        for(int j = 1; j <= n; j++) {
            if(area[i][j] <= m) {
                total += item[j];
            }
        }
        max_total = max(total, max_total);
    }
    cout << max_total << '\n';
    return 0;
}