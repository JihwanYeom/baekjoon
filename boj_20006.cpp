//<20006>번 : <랭킹전 대기열>
#include <bits/stdc++.h>
using namespace std;

class Room {
public:
    vector<pair<string, int>> player;
    int level;
};

vector<Room> rooms;
int p, l, m;
bool isEntered;
string n; 

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> p >> m;
    for(int i = 0; i < p; i++)
    {
        cin >> l >> n;
        isEntered = false;
        for(int i = 0; i < rooms.size(); i++)
        {
            if(abs(l-rooms[i].level) <= 10 && rooms[i].player.size() < m) 
            {
                rooms[i].player.push_back({n,l});
                isEntered = true;
                break;
            }
        }

        if(!isEntered)
        {
            Room r;
            r.player.push_back({n,l});
            r.level = l;
            rooms.push_back(r);
        }
    }
    
    for(Room r : rooms)
    {
        if(r.player.size() == m)
            cout << "Started!" << '\n';
        else
            cout << "Waiting!" << '\n';
        
        sort(r.player.begin(), r.player.end());
        for(pair<string, int> p : r.player) 
            cout << p.second << ' ' << p.first << '\n';
    }

    return 0;
}