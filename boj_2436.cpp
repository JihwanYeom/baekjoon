//<2436>번 : <풍선 터뜨리기>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    deque<int> b;
    int move[1001];
    int n = 0, m = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        b.push_back(i);
        cin >> move[i];
    }

    for(int i = 0; i < n; i++)
    {
        if(m >= 0)
        {
            for(int i = 0; i < m-1; i++)
            {
                b.push_back(b.front());
                b.pop_front();
            }
            cout << b.front() << ' ';
            m = move[b.front()];
            b.pop_front();
        }
        else
        {
            for(int i = 0; i < -(m+1); i++)
            {
                b.push_front(b.back());
                b.pop_back();
            }
            cout << b.back() << ' ';
            m = move[b.back()];
            b.pop_back();
        }
    }
    return 0;
}