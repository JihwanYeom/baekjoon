//<28278>번 : <스택2>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    stack<int> s;
    int N, cmd, e;
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        cin >> cmd;
        switch(cmd)
        {
            case 1:
                cin >> e;
                s.push(e);
                break;
            case 2:
                if(s.empty() == false)
                {
                    cout << s.top() << '\n';
                    s.pop();
                }
                else
                    cout << -1 << '\n';
                break;
            case 3:
                cout << s.size() << '\n';
                break;
            case 4:
                if(s.empty())
                    cout << 1 << '\n';
                else
                    cout << 0 << '\n';
                break;
            case 5:
                if(s.empty() == false)
                    cout << s.top() << '\n';
                else
                    cout << -1 << '\n';
                break;
        }
    }
    return 0;
}