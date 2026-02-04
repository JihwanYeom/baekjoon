//<25918>번 : <북극곰은 괄호를 찢어>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string a;
    stack<char> s;
    cin >> n >> a;

    int m = 0;
    for(int i = 0; i < a.length(); i++)
    {
        char c = a[i];
        if(!s.empty() && s.top() != c)
            s.pop();
        else
            s.push(c);
        int size = s.size();
        m = max(m, size);
    }
    if(!s.empty())
    {
        cout << -1 << '\n';
        return 0;
    }
    cout << m << '\n';
    return 0;
}