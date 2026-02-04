//<2841>번 : <외계인의 기타 연주>
#include <bits/stdc++.h>
using namespace std;

stack<int> s[7];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, p, cnt = 0;
    cin >> n >> p;
    for(int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        while(!s[a].empty() && s[a].top() > b)
        {
            s[a].pop();
            cnt++;
        }
        if(!s[a].empty() && s[a].top() == b)
            continue;
        s[a].push(b);
        cnt++;
    }
    cout << cnt << '\n';
    return 0;
}
