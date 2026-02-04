//<26029>번 : <붙임성 좋은 총총이>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    set<string> dancing;
    string p1, p2;
    int n;

    cin >> n;
    dancing.insert("ChongChong");
    for(int i = 0; i < n; i++)
    {
        cin >> p1 >> p2;
        if(dancing.find(p1) != dancing.end() || 
           dancing.find(p2) != dancing.end())
        {
            dancing.insert(p1);
            dancing.insert(p2);
        }
    }
    cout << dancing.size() << '\n';

    return 0;
}