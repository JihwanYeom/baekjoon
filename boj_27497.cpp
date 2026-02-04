//<27497>번 : <알파벳 블록>
#include <bits/stdc++.h>
using namespace std;

deque<char> d;
stack<bool> s;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int in;
        char a;
        cin >> in;
        if(in == 1)
        {
            cin >> a;
            d.push_back(a);
            s.push(true);
        }
        if(in == 2)
        {
            cin >> a;
            d.push_front(a);
            s.push(false);
        }
        if(in == 3 && !s.empty())
        {
            if(s.top())
                d.pop_back();
            else
                d.pop_front();
            s.pop();
        }
    }
    
    if(d.empty()) {
        cout << 0 << '\n';
        return 0;
    }

    while(!d.empty()) {
        cout << d.front();
        d.pop_front();
    }
    cout << '\n';

    return 0;
}
