//<2075>번 : <N번째 큰 수>
#include <bits/stdc++.h>
using namespace std;

priority_queue<int, vector<int>, greater<int>> pq;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n;
    for(int i = 0; i < n*n; i++)
    {
        cin >> m;
        pq.push(m);
        if(pq.size() == n+1)
            pq.pop();
    }
    
    cout << pq.top() << '\n';
    return 0;
}
