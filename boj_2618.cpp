//<2618>번 : <경찰차>
#include <bits/stdc++.h>
using namespace std;

int n, w;
int d[1001][1001] = {};
int car[1001][1001] = {};
stack<int> s;
pair<int, int> a[1001] = {};
pair<int, int> p1[1001][1001];
pair<int, int> p2[1001][1001];

int dist(pair<int, int> a, pair<int, int> b) {
    return abs(a.first-b.first) + abs(a.second-b.second);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> w;
    for(int i = 1; i <= w; i++) {
        cin >> a[i].first >> a[i].second;
    }

    p1[0][0] = {1, 1};
    p2[0][0] = {n, n};
    car[0][0] = 0;
    int shortest = 1000000000;
    int cur_i = 0, cur_j = 0;
    for(int i = 0; i <= w; i++) {
        for(int j = 0; j <= w-i; j++) {
            if(i == 0 && j == 0) {
                
            }
            else if(i == 0) {
                d[i][j] = d[i][j-1] + dist(p1[i][j-1], a[i+j]);
                p1[i][j] = a[i+j];
                p2[i][j] = p2[i][j-1];
                car[i][j] = 1;
            }
            else if(j == 0) {
                d[i][j] = d[i-1][j] + dist(p2[i-1][j], a[i+j]);
                p2[i][j] = a[i+j];
                p1[i][j] = p1[i-1][j];
                car[i][j] = 2;
            }
            else if(d[i-1][j] + dist(p2[i-1][j], a[i+j]) < d[i][j-1] + dist(p1[i][j-1], a[i+j])) {
                d[i][j] = d[i-1][j] + dist(p2[i-1][j], a[i+j]);
                p2[i][j] = a[i+j];
                p1[i][j] = p1[i-1][j];
                car[i][j] = 2;
            }
            else {
                d[i][j] = d[i][j-1] + dist(p1[i][j-1], a[i+j]);
                p1[i][j] = a[i+j];
                p2[i][j] = p2[i][j-1];
                car[i][j] = 1;
            }

            if(i + j == w) {
                if(shortest > d[i][j]){
                    shortest = d[i][j];
                    cur_i = i;
                    cur_j = j;
                }
            }
        }
    }

    while(car[cur_i][cur_j] != 0) {
        int cur_car = car[cur_i][cur_j];
        s.push(cur_car);
        if(cur_car == 1)
            cur_j--;
        if(cur_car == 2)
            cur_i--;
    }

    cout << shortest << '\n';
    while(!s.empty()) {
        cout << s.top() << '\n';
        s.pop();
    }

    return 0;
}
