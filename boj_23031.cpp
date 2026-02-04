//<23031>번 : <으어어... 에이쁠 주세요..>
#include <bits/stdc++.h>
using namespace std;

bool light[15][15] = {};
vector<pair<int, int>> s;
vector<pair<pair<int, int>, bool>> z;
pair<int, int> pos;
int angle = 0;

int dy[4] = {1, 0, -1, 0};
int dx[4] = {0, 1, 0, -1};

int N;
string A;

void movePlayer(char cmd)
{
    if(cmd == 'F')
    {
        int nx, ny;
        ny = pos.first + dy[angle];
        nx = pos.second + dx[angle];
        if(ny < 0 || ny > N-1 || nx < 0 || nx > N-1)
            return;
        pos.first = ny;
        pos.second = nx;
    }
    if(cmd == 'L')
        angle = (angle+1)%4;
    if(cmd == 'R') {
        if(angle == 0) angle = 3;
        else angle--;
    }
}

void moveZombie()
{
    for(int i = 0; i < z.size(); i++)
    {
        if(z[i].second == false)
            z[i].first.first++;
        if(z[i].second == true)
            z[i].first.first--;
        
        if(z[i].first.first < 0)
        {
            z[i].first.first = 0;
            z[i].second = false;
        }
        if(z[i].first.first > N-1)
        {
            z[i].first.first = N-1;
            z[i].second = true;
        }
    }
}

bool checkCollision()
{
    int py = pos.first;
    int px = pos.second;
    for(int i = 0; i < s.size(); i++)
    {
        int sy = s[i].first;
        int sx = s[i].second;
        if(py == sy && px == sx)
        {
            for(int j = py-1; j <= py+1; j++)
            {
                for(int k = px-1; k <= px+1; k++)
                {
                    if(j < 0 || j > N-1 || k < 0 || k > N-1)
                        continue;
                    light[j][k] = true;
                }
            }
        }
    }

    for(int i = 0; i < z.size(); i++)
    {
        int zy = z[i].first.first;
        int zx = z[i].first.second;
        if(zx == px && zy == py && !light[py][px])
            return true;
    }
    return false;
}

void play()
{
    for(int i = 0; i < A.length(); i++)
    {
        if(checkCollision())
        {
            cout << "Aaaaaah!" << '\n';
            return;
        }
        movePlayer(A[i]);
        if(checkCollision())
        {
            cout << "Aaaaaah!" << '\n';
            return;
        }
        moveZombie();
    }
    cout << "Phew..." << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> A;
    for(int i = 0; i < N; i++)
    {
        string in;
        cin >> in;
        for(int j = 0; j < N; j++)
        {
            if(in[j] == 'S')
                s.push_back({i,j});
            if(in[j] == 'Z')
                z.push_back({{i,j},false});
        }
    }

    pos = {0,0};
    angle = 0;
    play();
    

    return 0;
}
