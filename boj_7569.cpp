//<7569>번 : <토마토>
#include <bits/stdc++.h>
using namespace std;

typedef struct Position{
    int x, y, z;
    Position(int x_, int y_, int z_)
    {
        x = x_; y = y_; z = z_;
    }

}Pos;

int box[100][100][100];
bool visited[100][100][100];
queue<Pos> q;
int n, m, h;

int dx[6] = {1, -1, 0, 0, 0, 0};
int dy[6] = {0, 0, 1, -1, 0, 0};
int dz[6] = {0, 0, 0, 0, 1, -1};

void bfs()
{
    while(!q.empty())
    {
        Pos p = q.front();
        q.pop();
        int x = p.x; int y = p.y; int z = p.z;
        for(int i = 0; i < 6; i++)
        {
            int nx = x+dx[i];
            int ny = y+dy[i];
            int nz = z+dz[i];

            if(nx < 0 || nx > m-1 ||
               ny < 0 || ny > n-1 ||
               nz < 0 || nz > h-1) continue;

            if(!visited[nz][ny][nx])
            {
                q.push(Pos(nx,ny,nz));
                visited[nz][ny][nx] = true;
                box[nz][ny][nx] = box[z][y][x] + 1;
            }
        }
    }
}



int getResult()
{
    int day = 0;
    for(int i = 0; i < h; i++)
    {
        for(int j = 0; j < n; j++)
        {
            for(int k = 0; k < m; k++)
            {
                if(box[i][j][k] == 0)
                    return -1;
                day = max(day, box[i][j][k]);
            }
        }
    }
    return day-1;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> m >> n >> h;
    for(int i = 0; i < h; i++)
    {
        for(int j = 0; j < n; j++)
        {
            for(int k = 0; k < m; k++)
            {
                cin >> box[i][j][k];
                if(box[i][j][k] == 1)
                {
                    visited[i][j][k] = true;
                    q.push(Pos(k,j,i));
                }
                if(box[i][j][k] == -1)
                    visited[i][j][k] = true;
            }
        }
    }
    bfs();
    cout << getResult() << '\n';
    return 0;
}
