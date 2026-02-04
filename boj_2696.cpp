//<2696>번 : <중앙값 구하기>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, m;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        priority_queue<int> max_heap;
        priority_queue<int, vector<int>, greater<int>> min_heap;
        vector<int> result;
        cin >> n;
        for(int j = 1; j <= n; j++)
        {
            if(!min_heap.empty() && max_heap.size() < j/2+1)
            {
                max_heap.push(min_heap.top());
                min_heap.pop();
            }

            cin >> m;
            max_heap.push(m);

            if(max_heap.size() > j/2+1)
            {
                min_heap.push(max_heap.top());
                max_heap.pop();
            }

            if(j%2 == 1)
                result.push_back(max_heap.top());
        }

        cout << result.size() << '\n';
        for(int j = 0; j < result.size(); j++)
        {
            cout << result[j];
            if(j%10 == 9) cout << '\n';
            else cout << ' ';
        }

        cout << '\n';
    }

    return 0;
}