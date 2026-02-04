//<14502>번 : <연구소>
#include <bits/stdc++.h>
using namespace std;

int lab[8][8] = {};
int temp[8][8] = {};
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
vector<pair<int,int>> virus;
queue<pair<int, int>> q;
int n, m;

void bfs() {
    while(!q.empty()) {
        pair<int, int> v = q.front();
        q.pop();
        int y = v.first;
        int x = v.second;
        for(int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx < 0 || nx > m-1 || ny < 0 || ny > n-1)
                continue;
            if(temp[ny][nx] != 0) 
                continue;
            temp[ny][nx] = 2;
            q.push({ny,nx}); 
        }
    }
}

void init() {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            temp[i][j] = lab[i][j];
        }
    }
    q = queue<pair<int, int>>();
    for(pair<int, int> v : virus) {
        q.push(v);
    }
}

int check() {
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(temp[i][j] == 0)
                cnt++;
        }
    }
    return cnt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> lab[i][j];
            if(lab[i][j] == 2)
                virus.push_back({i,j});
        }
    }

    int res = 0;
    for(int i = 0; i < n*m; i++) {
        for(int j = 0; j < i; j++) {
            for(int k = 0; k < j; k++) {
                init();

                if(temp[i/m][i%m] != 0 || temp[j/m][j%m] != 0 ||temp[k/m][k%m] != 0) 
                    continue;

                temp[i/m][i%m] = 1;
                temp[j/m][j%m] = 1;
                temp[k/m][k%m] = 1;

                bfs();
                res = max(res,check());
            }
        }
    }
    cout << res << '\n';
    return 0;
}