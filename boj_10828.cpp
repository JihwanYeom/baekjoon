//<10828>번 : <스택>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    stack<int> s;
    int N, e;
    string cmd;
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        cin >> cmd;
        if(cmd == "push")
        {
            cin >> e;
            s.push(e);
        }
        if(cmd == "pop")
        {
            if(s.empty())
            {
                cout << -1 << '\n';
                continue;
            }
            cout << s.top() << '\n';
            s.pop();
        }
        if(cmd == "size")
        {
            cout << s.size() << '\n';
        }
        if(cmd == "empty")
        {
            if(s.empty())
                cout << 1 << '\n';
            else
                cout << 0 << '\n';
        }
        if(cmd == "top")
        {
            if(s.empty() == false)
                cout << s.top() << '\n';
            else
                cout << -1 << '\n';
        }
    }
    return 0;
}