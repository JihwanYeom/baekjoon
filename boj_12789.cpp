//<12789>번 : <도키도키 간식드리미미>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, order = 1;
    vector<int> s;

    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> m;
        if(m == order) { order++; }
        else { s.push_back(m); }

        while(!s.empty() && s.back() == order)
        { order++; s.pop_back(); }
    }
    
    if(s.empty()) {cout << "Nice\n";}
    else {cout << "Sad\n";}
    return 0;
}