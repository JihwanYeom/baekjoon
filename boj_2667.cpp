//<2667>번 : <단지번호붙이기>
#include <bits/stdc++.h>
using namespace std;

int n;
int m[25][25];
bool visited[25][25] = {};
int cnt = 0;
vector<int> v;

void bfs(int y, int x)
{
    if(m[y][x] == 0 || visited[y][x]) return;
    
    visited[y][x] = true;
    cnt++;
    if(y > 0) bfs(y-1,x);
    if(x > 0) bfs(y,x-1);
    if(y < n-1) bfs(y+1,x);
    if(x < n-1) bfs(y,x+1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string in;
        cin >> in;
        for(int j = 0; j < n; j++)
            m[i][j] = in[j] - '0';
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cnt = 0;
            bfs(i,j);
            if(cnt != 0) v.push_back(cnt);
        }
    }

    sort(v.begin(), v.end());

    cout << v.size() << '\n';
    for(int i : v)
        cout << i << '\n';
        
    return 0;
}