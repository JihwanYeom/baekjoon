//<33838>번 : <퍼시스턴트 스택>
#include <bits/stdc++.h>
using namespace std;

stack<int> s;
stack<int> r;

int n, q, a;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> q;
        if(q == 1)
        {
            int a;
            cin >> a;
            s.push(a);
            r.push(0);
        }
        if(q == 2)
        {
            r.push(s.top());
            s.pop();
        }
        if(q == 3)
        {
            cin >> a;
            for(int j = 0; j < a; j++)
            {
                int b = r.top();
                if(b == 0) s.pop();
                else s.push(r.top());
                r.pop();
            }
        }
        if(q == 4)
        {
            cout << s.size() << '\n';
        }
        if(q == 5)
        {
            if(s.empty()) cout << -1 << '\n';
            else cout << s.top() << '\n';
        }
    }


    return 0;
}