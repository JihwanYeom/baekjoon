//<1158>번 : <요세푸스 문제>
#include <bits/stdc++.h>
using namespace std;

queue<int> q;
vector<int> r;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
        q.push(i);
    
    int cnt = 1;
    while(!q.empty()) {
        if(cnt%k == 0) r.push_back(q.front());
        else q.push(q.front());
        q.pop();
        cnt++;
    }
    cout << "<" << r[0];
    for(int i = 1; i < n; i++)
        cout << ", " << r[i];
    cout << ">\n";
    return 0;
}
