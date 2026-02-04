//<1966>번 : <프린터 큐>
#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> a, pair<int,int> b)
{
    return a.first < b.first;
}   

int n,m,t;
vector<pair<int,int>> q;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> n >> m;
        for(int j = 0; j < n;j++)
        {
            pair<int,int> data;
            cin >> data.first;
            data.second = j;
            q.push_back(data);
        }
        int cnt = 1;
        int target = q[m].second;
        while(true)
        {
            if(q.front().second == target && q.front() == *max_element(q.begin(),q.end(), compare))
                break;
            
            if(q.front() == *max_element(q.begin(),q.end(), compare))
            {
                cnt++;
                q.erase(q.begin());
            }
            else
            {
                q.push_back(q.front());
                q.erase(q.begin());
            }
        }
        cout << cnt << '\n';
        q.clear();
    }

    return 0;
}