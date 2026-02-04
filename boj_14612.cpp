//<14612>번 : <김식당>
#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<pair<int,int>> orders;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> M;
    while(N--)
    {
        string cmd;
        cin >> cmd;
        if(cmd == "order")
        {
            int n, t;
            cin >> n >> t;
            orders.push_back({t,n});
        }
        else if(cmd == "sort")
            sort(orders.begin(), orders.end());
        else if(cmd == "complete")
        {
            int n;
            cin >> n;
            for(int i = 0; i < orders.size(); i++)
            {
                if(orders[i].second == n)
                    orders.erase(orders.begin()+i);
            }
        }
        
        if(orders.empty()) 
            cout << "sleep" << '\n';
        else
        {
            for(pair<int, int> order : orders)
                cout << order.second << ' ';
            cout << '\n';
        }
        
    }

    return 0;
}