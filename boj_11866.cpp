//<11866>번 : <요세푸스 문제 0>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    queue<int> q;
    int n, k;
    cin >> n >> k;

    for(int i = 1; i <= n; i++)
        q.push(i);
    
    cout << '<';
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < k-1; j++)
        {
            q.push(q.front());
            q.pop();
        }
        cout << q.front();
        q.pop();
        if(i < n-1) {cout << ", ";}
    }
    cout << ">\n";
    return 0;
}