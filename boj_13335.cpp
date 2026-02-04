//<13335>번 : <트럭>
#include <bits/stdc++.h>
using namespace std;

int n, w, l;
queue<int> trucks;
deque<pair<int, int>> bridge;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> w >> l;
    for(int i = 0 ; i < n; i++)
    {
        int truck;
        cin >> truck;
        trucks.push(truck);
    }

    int weight = 0;
    int time = 1;
    
    weight += trucks.front();
    bridge.push_back({trucks.front(),w});
    trucks.pop();
    
    while(!bridge.empty()) 
    {
        for(int i = 0; i < bridge.size(); i++)
            bridge[i].second--;

        if(bridge.front().second == 0) 
        {
            weight -= bridge.front().first;
            bridge.pop_front();
        }

        if(!trucks.empty() && weight + trucks.front() <= l)
        {
            bridge.push_back({trucks.front(),w});
            weight += trucks.front();
            trucks.pop();
        }
        time++;
    }
    cout << time << '\n';
    return 0;
}