//<7785>번 : <회사에 있는 사람>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    unordered_set<string> s;
    string cmd, name;
    
    cin >> n;
    for(int i = 0 ; i < n; i++)
    {
        cin >> name >> cmd;
        if(cmd == "enter")
            s.insert(name);
        if(cmd == "leave")
            s.erase(name);
    }
    vector<string> v(s.begin(), s.end());
    sort(v.begin(), v.end(), greater<string>());
    for(string i : v)
        cout << i << '\n';
    return 0;
}